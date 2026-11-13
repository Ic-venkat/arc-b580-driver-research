import ghidra.app.script.GhidraScript;
import ghidra.program.model.symbol.*;
import java.io.PrintWriter;
import java.io.FileWriter;

public class DumpExports extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = args.length > 0 ? args[0] : "exports.txt";
        PrintWriter out = new PrintWriter(new FileWriter(outPath));
        
        SymbolTable symTab = currentProgram.getSymbolTable();
        SymbolIterator it = symTab.getAllSymbols(true);
        int count = 0;
        while (it.hasNext()) {
            Symbol s = it.next();
            if (s.isExternalEntryPoint() || s.getSymbolType() == SymbolType.FUNCTION) {
                if (s.isExternalEntryPoint()) {
                    out.println("EXPORT: " + s.getName() + " @ " + s.getAddress());
                    count++;
                }
            }
        }
        out.println("Total external entry points: " + count);
        out.close();
        println("Exported " + count + " symbols to " + outPath);
    }
}
