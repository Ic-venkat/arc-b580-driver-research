import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.address.*;
import java.io.*;

public class FindFnTable extends GhidraScript {
    @Override
    public void run() throws Exception {
        PrintWriter out = new PrintWriter(new FileWriter(getScriptArgs()[0]));
        Memory mem = currentProgram.getMemory();
        long minCode = 0x180001000L, maxCode = 0x180db0000L;
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || b.isExecute()) continue;
            long len = b.getSize();
            if (len >= 200000000) continue;
            byte[] data = new byte[(int) len];
            mem.getBytes(b.getStart(), data);
            int run = 0; int runStart = -1;
            for (int off = 0; off + 8 <= data.length; off += 8) {
                long q = 0;
                for (int j = 0; j < 8; j++) q |= ((long)(data[off + j] & 0xff)) << (8 * j);
                boolean isCode = q >= minCode && q <= maxCode;
                if (isCode) {
                    if (run == 0) runStart = off;
                    run++;
                } else {
                    if (run >= 40) {
                        StringBuilder sb = new StringBuilder("TABLE @").append(Long.toHexString(b.getStart().getOffset() + runStart)).append(" len=").append(run).append(" : ");
                        for (int k = 0; k < Math.min(run, 8); k++) {
                            long q2 = 0;
                            for (int j = 0; j < 8; j++) q2 |= ((long)(data[runStart + k*8 + j] & 0xff)) << (8 * j);
                            Function f = currentProgram.getFunctionManager().getFunctionAt(toAddr(q2));
                            sb.append(f != null ? f.getName() : ("sub" + Long.toHexString(q2))).append(' ');
                        }
                        out.println(sb);
                    }
                    run = 0;
                }
            }
            if (run >= 40) out.println("TABLE @END " + Long.toHexString(b.getStart().getOffset() + runStart) + " len=" + run);
        }
        out.close();
    }
}
