import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class DumpArc extends GhidraScript {
    @Override
    public void run() throws Exception {
        PrintWriter out = new PrintWriter(new FileWriter(getScriptArgs()[0]));
        Program p = currentProgram;

        FunctionIterator fi = p.getFunctionManager().getFunctions(true);
        int total = 0;
        List<String[]> named = new ArrayList<>();
        while (fi.hasNext()) {
            Function f = fi.next();
            total++;
            String n = f.getName();
            if (!n.startsWith("FUN_")) {
                named.add(new String[]{n, Long.toString(f.getBody().getNumAddresses())});
            }
        }
        out.println("TOTAL_FUNCTIONS=" + total);
        out.println("NAMED_FUNCTIONS=" + named.size());

        // exports
        out.println("---EXPORTS---");
        SymbolTable st = p.getSymbolTable();
        SymbolIterator syms = st.getAllSymbols(true);
        int expCount = 0;
        for (Symbol s : syms) {
            if (s.getSymbolType() == SymbolType.FUNCTION && s.isExternalEntryPoint()) {
                expCount++;
                out.println("EXPORT " + s.getName());
            }
        }
        out.println("EXPORT_COUNT=" + expCount);

        // interesting named functions by keyword
        String[] kws = {"Draw", "Submit", "Queue", "Barrier", "Descriptor", "Bind", "Alloc", "Memory", "Cmd", "Render", "Sync", "Semaphore", "Fence", "Pipeline", "Shader", "Compile"};
        out.println("---INTERESTING_NAMED---");
        for (String[] e : named) {
            for (String k : kws) {
                if (e[0].contains(k)) { out.println(e[1] + " " + e[0]); break; }
            }
        }

        // RTTI / class names often reveal subsystem structure
        out.println("---LARGEST_FUNCS---");
        fi = p.getFunctionManager().getFunctions(true);
        List<String[]> all = new ArrayList<>();
        while (fi.hasNext()) { Function f = fi.next(); all.add(new String[]{Long.toString(f.getBody().getNumAddresses()), f.getName()}); }
        all.sort((a, b) -> Long.compare(Long.parseLong(b[0]), Long.parseLong(a[0])));
        for (int i = 0; i < Math.min(50, all.size()); i++) out.println(all.get(i)[0] + " " + all.get(i)[1]);
        out.close();
    }
}
