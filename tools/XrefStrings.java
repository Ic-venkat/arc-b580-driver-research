import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import java.io.*;

public class XrefStrings extends GhidraScript {
    @Override
    public void run() throws Exception {
        PrintWriter out = new PrintWriter(new FileWriter(getScriptArgs()[0]));
        String[] wants = {"CmdDrawIndexed", "CmdDraw", "QueueSubmit", "CmdBindDescriptorSets", "CmdPipelineBarrier", "CmdBeginRenderPass", "CmdEndRenderPass"};
        for (String w : wants) {
            Address a = null;
            DataIterator it = currentProgram.getListing().getDefinedData(true);
            while (it.hasNext()) {
                Data d = it.next();
                if (d.hasStringValue() && w.equals((String) d.getValue())) { a = d.getAddress(); break; }
            }
            if (a == null) { out.println("// " + w + " string not defined"); continue; }
            out.println("// " + w + " @" + a + " xrefs:");
            ReferenceIterator ri = currentProgram.getReferenceManager().getReferencesTo(a);
            while (ri.hasNext()) {
                Reference r = ri.next();
                Address from = r.getFromAddress();
                Function f = currentProgram.getFunctionManager().getFunctionContaining(from);
                out.println("  from " + from + (f != null ? (" in " + f.getName() + " @ " + f.getEntryPoint()) : ""));
            }
        }
        out.close();
    }
}
