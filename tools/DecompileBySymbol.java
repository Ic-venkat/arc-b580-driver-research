import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import ghidra.program.model.symbol.*;
import java.io.*;

public class DecompileBySymbol extends GhidraScript {
    @Override
    public void run() throws Exception {
        String outPath = getScriptArgs()[0];
        PrintWriter out = new PrintWriter(new FileWriter(outPath));
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);

        String[] names = new String[getScriptArgs().length - 1];
        for (int i = 1; i < getScriptArgs().length; i++) names[i - 1] = getScriptArgs()[i];

        SymbolTable st = currentProgram.getSymbolTable();
        for (String want : names) {
            SymbolIterator it = st.getAllSymbols(true);
            boolean found = false;
            for (Symbol s : it) {
                if (s.getSymbolType() == SymbolType.FUNCTION && s.getName().equals(want)) {
                    Function f = getFunctionAt(s.getAddress());
                    if (f == null) f = currentProgram.getFunctionManager().getFunctionAt(s.getAddress());
                    if (f == null) { out.println("// symbol " + want + " at " + s.getAddress() + " has no function"); break; }
                    DecompileResults res = di.decompileFunction(f, 120, monitor);
                    out.println("// ===== " + want + " @ " + s.getAddress() + " =====");
                    out.println(res.getDecompiledFunction().getC());
                    found = true;
                    break;
                }
            }
            if (!found) out.println("// NOT FOUND: " + want);
        }
        out.close();
        di.dispose();
    }
}
