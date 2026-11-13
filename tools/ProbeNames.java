import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.address.*;
import java.io.*;

public class ProbeNames extends GhidraScript {
    @Override
    public void run() throws Exception {
        PrintWriter out = new PrintWriter(new FileWriter(getScriptArgs()[0]));
        Memory mem = currentProgram.getMemory();
        String[] wants = {"CmdDrawIndexed", "CmdDraw", "QueueSubmit", "BindDescriptorSets", "PipelineBarrier", "EndPrimitive"};
        StringBuilder sb = new StringBuilder();
        for (String w : wants) {
            Address a = null;
            DataIterator it = currentProgram.getListing().getDefinedData(true);
            while (it.hasNext()) {
                Data d = it.next();
                if (d.hasStringValue() && w.equals((String) d.getValue())) { a = d.getAddress(); break; }
            }
            if (a == null) { out.println("// " + w + " not found as defined string"); continue; }
            out.println("// " + w + " string @" + a);
            long target = a.getOffset();
            byte[] t = new byte[8];
            for (int i = 0; i < 8; i++) t[i] = (byte) ((target >> (8 * i)) & 0xff);
            for (MemoryBlock b : mem.getBlocks()) {
                if (!b.isInitialized()) continue;
                long len = b.getSize();
                if (len >= 200000000) continue;
                byte[] data = new byte[(int) len];
                mem.getBytes(b.getStart(), data);
                for (int off = 0; off + 16 <= data.length; off++) {
                    boolean match = true;
                    for (int k = 0; k < 8; k++) { if (data[off + k] != t[k]) { match = false; break; } }
                    if (match) {
                        sb.setLength(0);
                        sb.append("PTR @").append(Long.toHexString(b.getStart().getOffset() + off)).append(" ctx:");
                        for (int k = -8; k < 40; k += 8) {
                            long q = 0;
                            int idx = off + k;
                            if (idx >= 0 && idx + 8 <= data.length) {
                                for (int j = 0; j < 8; j++) q |= ((long)(data[idx + j] & 0xff)) << (8 * j);
                                sb.append(' ').append(k < 0 ? "-" : "+").append(Math.abs(k)).append('=').append(String.format("%x", q));
                            }
                        }
                        out.println(sb);
                    }
                }
            }
        }
        out.close();
    }
}
