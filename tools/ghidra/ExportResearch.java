// Research export only: generated pseudocode is not a port implementation.
// @category SmutaRD
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.framework.Application;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;

public class ExportResearch extends GhidraScript {
    private PrintWriter writer(Path path) throws IOException {
        return new PrintWriter(Files.newBufferedWriter(path, StandardCharsets.UTF_8));
    }
    private String cell(Object value) {
        return String.valueOf(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    @Override public void run() throws Exception {
        Path out = Paths.get(getScriptArgs()[0]);
        Files.createDirectories(out.resolve("functions"));
        try (PrintWriter w = writer(out.resolve("program.txt"))) {
            w.println("ghidra_version=" + Application.getApplicationVersion());
            w.println("program=" + currentProgram.getName());
            w.println("executable_sha256=" + currentProgram.getExecutableSHA256());
            w.println("format=" + currentProgram.getExecutableFormat());
            w.println("language=" + currentProgram.getLanguageID());
            w.println("compiler_spec=" + currentProgram.getCompilerSpec().getCompilerSpecID());
            w.println("image_base=" + currentProgram.getImageBase());
            w.println("address_system=Ghidra loader addresses; not file offsets or live runtime addresses");
            w.println("analysis=default auto-analysis; no manual function/type corrections");
            w.println("decompiler_timeout_seconds=60 per function");
            for (MemoryBlock b : currentProgram.getMemory().getBlocks())
                w.printf("block=%s\t%s\t%s\tread=%s\twrite=%s\texecute=%s%n",
                    b.getName(), b.getStart(), b.getEnd(), b.isRead(), b.isWrite(), b.isExecute());
            var entries = currentProgram.getSymbolTable().getExternalEntryPointIterator();
            while (entries.hasNext()) w.println("entry=" + entries.next());
            var options = currentProgram.getOptions(Program.ANALYSIS_PROPERTIES);
            for (String name : options.getOptionNames())
                w.println("analysis_option=" + name + "=" + options.getValueAsString(name));
        }
        try (PrintWriter w = writer(out.resolve("symbols.tsv"))) {
            w.println("address\ttype\texternal\tname");
            var symbols = currentProgram.getSymbolTable().getAllSymbols(true);
            while (symbols.hasNext()) {
                monitor.checkCancelled();
                Symbol s = symbols.next();
                w.printf("%s\t%s\t%s\t%s%n", s.getAddress(), s.getSymbolType(), s.isExternal(), cell(s.getName(true)));
            }
        }
        try (PrintWriter w = writer(out.resolve("disassembly.tsv"))) {
            w.println("address\tbytes\tinstruction\tflow_type\tflows");
            var instructions = currentProgram.getListing().getInstructions(true);
            while (instructions.hasNext()) {
                monitor.checkCancelled();
                Instruction i = instructions.next();
                StringBuilder bytes = new StringBuilder();
                for (byte b : i.getBytes()) bytes.append(String.format("%02x", b & 255));
                w.printf("%s\t%s\t%s\t%s\t%s%n", i.getAddress(), bytes, cell(i), i.getFlowType(),
                    cell(java.util.Arrays.toString(i.getFlows())));
            }
        }
        int total = 0, ok = 0, failed = 0, external = 0;
        DecompInterface decompiler = new DecompInterface();
        try (PrintWriter index = writer(out.resolve("functions.tsv"));
             PrintWriter combined = writer(out.resolve("all-functions.c"))) {
            index.println("entry\tname\tbody_bytes\tstatus\toutput\tdiagnostic");
            combined.println("/* Automatic Ghidra research pseudocode. Not compilable or behavior-verified source. */");
            if (!decompiler.openProgram(currentProgram)) throw new IOException("Cannot initialize decompiler: " + decompiler.getLastMessage());
            var functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function f = functions.next();
                total++;
                if (f.isExternal()) { external++; continue; }
                String address = f.getEntryPoint().toString();
                String relative = "functions/" + address.replace(':', '_') + ".c";
                DecompileResults result = decompiler.decompileFunction(f, 60, monitor);
                boolean success = result.decompileCompleted() && result.getDecompiledFunction() != null;
                String text = "/* Ghidra address: " + address + "; " + cell(f.getName()) + " */\n";
                if (success) { text += result.getDecompiledFunction().getC(); ok++; }
                else { text += "/* DECOMPILATION FAILED: " + cell(result.getErrorMessage()).replace("*/", "* /") + " */\n"; failed++; }
                Files.writeString(out.resolve(relative), text, StandardCharsets.UTF_8);
                combined.println(text);
                index.printf("%s\t%s\t%d\t%s\t%s\t%s%n", address, cell(f.getName()), f.getBody().getNumAddresses(),
                    success ? "ok" : "failed", relative, cell(result.getErrorMessage()));
                if (total % 100 == 0) println("Export progress: " + total + " functions");
            }
        } finally { decompiler.dispose(); }
        try (PrintWriter w = writer(out.resolve("summary.properties"))) {
            w.println("functions=" + total);
            w.println("decompiled=" + ok);
            w.println("failed=" + failed);
            w.println("external_skipped=" + external);
        }
        println("SMUTARD_EXPORT_COMPLETE functions=" + total + " decompiled=" + ok + " failed=" + failed);
    }
}
