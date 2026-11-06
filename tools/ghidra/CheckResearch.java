// Verify saved projects independently of the import/export session.
// @category SmutaRD
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

public class CheckResearch extends GhidraScript {
    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        String game;
        if (currentProgram.getName().equals("SMUTA.EXE")) game = "smuta";
        else if (currentProgram.getName().equals("Rd.EXE")) game = "raising-dead";
        else throw new IllegalArgumentException("Unexpected program " + currentProgram.getName());
        Path out = Paths.get(args[0]).resolve(game);
        Properties metadata = new Properties();
        try (var reader = Files.newBufferedReader(out.resolve("program.txt"), StandardCharsets.UTF_8)) { metadata.load(reader); }
        if (!currentProgram.getExecutableSHA256().equals(metadata.getProperty("executable_sha256")))
            throw new IllegalStateException("Project/export SHA-256 mismatch");
        Map<String, String[]> rows = new HashMap<>();
        var lines = Files.readAllLines(out.resolve("functions.tsv"), StandardCharsets.UTF_8);
        for (String line : lines.subList(1, lines.size())) {
            String[] row = line.split("\t", -1);
            if (rows.put(row[0], row) != null) throw new IllegalStateException("Duplicate function " + row[0]);
        }
        int checked = 0;
        var functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function f = functions.next();
            if (f.isExternal()) continue;
            String[] row = rows.remove(f.getEntryPoint().toString());
            if (row == null || !Files.isRegularFile(out.resolve(row[4])) || Files.size(out.resolve(row[4])) == 0)
                throw new IllegalStateException("Missing export for " + f.getEntryPoint());
            checked++;
        }
        if (!rows.isEmpty()) throw new IllegalStateException("Export has functions absent from saved project");
        Path proof = Paths.get(args[1]).resolve(game + "-reopened.txt");
        Files.writeString(proof, "program=" + currentProgram.getName() + "\nsha256=" + currentProgram.getExecutableSHA256()
            + "\nfunctions_checked=" + checked + "\nresult=passed\n", StandardCharsets.UTF_8);
        println("SMUTARD_REOPEN_CHECK_PASSED " + game + " functions=" + checked);
    }
}
