import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import java.io.*;
import java.util.*;

public class MapDispatch extends GhidraScript {
    @Override
    public void run() throws Exception {
        PrintWriter out = new PrintWriter(new FileWriter(getScriptArgs()[0]));
        Memory mem = currentProgram.getMemory();

        // collect defined strings that look like vk command names
        List<Address> nameAddrs = new ArrayList<>();
        List<String> names = new ArrayList<>();
        DataIterator di = currentProgram.getListing().getDefinedData(true);
        while (di.hasNext()) {
            Data d = di.next();
            if (d.hasStringValue()) {
                String v = (String) d.getValue();
                if (v != null && v.length() > 3 && (v.startsWith("Cmd") || v.startsWith("Queue") || v.startsWith("Create") ||
                    v.startsWith("Get") || v.startsWith("Allocate") || v.startsWith("Wait") || v.startsWith("Reset") ||
                    v.startsWith("Begin") || v.startsWith("End") || v.startsWith("Bind") || v.startsWith("Enumerate") ||
                    v.startsWith("Acquire") || v.startsWith("Release") || v.startsWith("Submit") || v.startsWith("Set"))) {
                    nameAddrs.add(d.getAddress());
                    names.add(v);
                }
            }
        }
        out.println("NAME_STRINGS=" + names.size());

        // scan all initialized memory for pointer references to each string
        MemoryBlock[] blocks = mem.getBlocks();
        List<long[]> blocksRanges = new ArrayList<>(); // {start, len}
        List<byte[]> blockData = new ArrayList<>();
        for (MemoryBlock b : blocks) {
            if (b.isInitialized()) {
                long len = b.getSize();
                if (len > 0 && len < 200000000) {
                    byte[] data = new byte[(int) len];
                    mem.getBytes(b.getStart(), data);
                    blocksRanges.add(new long[]{b.getStart().getOffset(), len});
                    blockData.add(data);
                }
            }
        }

        for (int n = 0; n < nameAddrs.size(); n++) {
            long target = nameAddrs.get(n).getOffset();
            byte[] t = new byte[8];
            for (int i = 0; i < 8; i++) t[i] = (byte) ((target >> (8 * i)) & 0xff);
            int found = 0;
            for (int bi = 0; bi < blockData.size() && found < 4; bi++) {
                byte[] data = blockData.get(bi);
                long base = blocksRanges.get(bi)[0];
                for (int off = 0; off + 24 <= data.length; off++) {
                    boolean match = true;
                    for (int k = 0; k < 8; k++) { if (data[off + k] != t[k]) { match = false; break; } }
                    if (match) {
                        // stride-3 table: fn ptr at +16
                        long fn = 0;
                        for (int k = 0; k < 8; k++) fn |= ((long)(data[off + 16 + k] & 0xff)) << (8 * k);
                        Address fnAddr = null;
                        try { fnAddr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(fn); } catch (Exception e) {}
                        String fnName = "??";
                        if (fnAddr != null) {
                            Function f = currentProgram.getFunctionManager().getFunctionAt(fnAddr);
                            if (f != null) fnName = f.getName();
                            else fnName = "@" + fnAddr;
                        }
                        out.println(names.get(n) + " -> entry@" + Long.toHexString(base + off) + " fn=" + fnName);
                        found++;
                    }
                }
            }
        }
        out.close();
    }
}
