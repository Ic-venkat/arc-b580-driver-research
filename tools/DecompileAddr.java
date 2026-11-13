import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import java.io.*;

public class DecompileAddr extends GhidraScript {
    @Override
    public void run() throws Exception {
        String outPath = getScriptArgs()[0];
        PrintWriter out = new PrintWriter(new FileWriter(outPath));
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        di.setOptions(opts);
        di.openProgram(currentProgram);
        for (int i = 1; i < getScriptArgs().length; i++) {
            String a = getScriptArgs()[i];
            Address addr = currentProgram.getAddressFactory().getAddress(a.startsWith("0x") ? "0x" + a.substring(2) : a);
            Function f = currentProgram.getFunctionManager().getFunctionAt(addr);
            if (f == null) { out.println("// no function at " + a); continue; }
            DecompileResults res = di.decompileFunction(f, 180, monitor);
            out.println("// ===== " + a + " " + f.getName() + " =====");
            out.println(res.getDecompiledFunction().getC());
        }
        out.close();
        di.dispose();
    }
}
