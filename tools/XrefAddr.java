import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import java.io.*;

public class XrefAddr extends GhidraScript {
    @Override
    public void run() throws Exception {
        PrintWriter out = new PrintWriter(new FileWriter(getScriptArgs()[0]));
        for (int i = 1; i < getScriptArgs().length; i++) {
            Address a = toAddr(getScriptArgs()[i]);
            out.println("// refs to " + a + ":");
            ReferenceIterator ri = currentProgram.getReferenceManager().getReferencesTo(a);
            while (ri.hasNext()) {
                Reference r = ri.next();
                Address from = r.getFromAddress();
                Function f = currentProgram.getFunctionManager().getFunctionContaining(from);
                out.println("  " + r.getReferenceType() + " from " + from + (f != null ? (" in " + f.getName() + " @ " + f.getEntryPoint()) : ""));
            }
        }
        out.close();
    }
}
