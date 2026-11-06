// Targeted, instruction-backed corrections. Not a port implementation.
// @category SmutaRD
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

public class RefinePseudocode extends GhidraScript {
    private final DataType i32 = IntegerDataType.dataType;
    private final DataType i16 = ShortDataType.dataType;
    private DataType ptr(DataType t) { return new PointerDataType(t, 4); }
    private Function signature(String address, DataType result, DataType... types) throws Exception {
        Function f = getFunctionAt(toAddr(address));
        if (f == null) throw new Exception("Missing function " + address);
        List<Variable> args = new ArrayList<>();
        for (int n=0; n<types.length; n++)
            args.add(new ParameterImpl("arg" + (n+1), types[n], currentProgram));
        f.updateFunction("__cdecl", new ReturnParameterImpl(result, currentProgram),
            Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.USER_DEFINED, args.toArray(new Variable[0]));
        return f;
    }
    private void indirect(Function f, String site, DataType... types) throws Exception {
        FunctionDefinitionDataType def = new FunctionDefinitionDataType("verified_call_" + site);
        def.setCallingConvention("__cdecl");
        // Return value is unused here; its actual type remains unknown.
        def.setReturnType(Undefined4DataType.dataType);
        ParameterDefinition[] args = new ParameterDefinition[types.length];
        for (int n=0; n<types.length; n++) args[n] = new ParameterDefinitionImpl("arg"+(n+1),types[n],null);
        def.setArguments(args);
        HighFunctionDBUtil.writeOverride(f, toAddr(site), def);
    }
    @Override public void run() throws Exception {
        boolean smuta = currentProgram.getName().equals("SMUTA.EXE");
        String expected = smuta ? "1b7f8e5d010e225139f3a03f3721aff39d5e0b8c1c4ef42106c14002ea6405bb" :
            "caca5b11ae8abedf526412fdf6e4a790aa33ea91bc3b3c0f649fe64989a00f91";
        if (!expected.equalsIgnoreCase(currentProgram.getExecutableSHA256())) throw new Exception("Unexpected sample");
        String[] addresses = smuta ? new String[]{"0040840c","0041181c","00412628","0040e4ac","0042fc2c"} :
            new String[]{"004044ec","004169e0","004177ec","00424f88","00433130"};
        Path out = Paths.get(getScriptArgs()[0], smuta ? "smuta" : "raising-dead");
        Files.createDirectories(out);
        boolean verify = getScriptArgs().length > 1 && getScriptArgs()[1].equals("verify");
        if (!verify) {
            // Only observed layout; these are offset labels, not recovered semantic names.
            StructureDataType object = new StructureDataType("ObservedObject10", 0x12);
            object.replaceAtOffset(0, ptr(Undefined4DataType.dataType),4,"vtable",null);
            object.replaceAtOffset(0x10, UnsignedShortDataType.dataType,2,"field_10",null);
            var global = toAddr(smuta ? "0044f640" : "0053d640");
            clearListing(global, global.add(3));
            createData(global, ptr(object));
            // First stack slot is not read in this body; its semantic type is unknown.
            Function draw = signature(addresses[0], VoidDataType.dataType,
                Undefined4DataType.dataType, ptr(UnsignedShortDataType.dataType), ptr(i16), i16, i16, i16);
            signature(addresses[1], Undefined4DataType.dataType, ptr(i16),i32,i32,i16,ptr(i16),i32);
            signature(addresses[2], VoidDataType.dataType, ptr(i16),ptr(i32),ptr(i32),i32,i32,ptr(i16),i32,i32);
            signature(addresses[3], VoidDataType.dataType, ptr(Undefined1DataType.dataType));
            DataType opaque = ptr(Undefined1DataType.dataType);
            indirect(draw, smuta ? "00408449" : "00404529", opaque,
                UnsignedIntegerDataType.dataType,UnsignedIntegerDataType.dataType,
                UnsignedIntegerDataType.dataType,UnsignedIntegerDataType.dataType);
            indirect(draw, smuta ? "00408514" : "004045f4", opaque,i32,i32,ptr(i16),i16,i16);
            // FISTP qword; EDX:EAX result. ST0 is an actual register input, not a stack argument.
            Function helper = getFunctionAt(toAddr(addresses[4]));
            helper.updateFunction("__cdecl",
                new ReturnParameterImpl(LongLongDataType.dataType,
                    new VariableStorage(currentProgram, currentProgram.getRegister("EDX"), currentProgram.getRegister("EAX")), currentProgram),
                Function.FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.USER_DEFINED,
                new ParameterImpl("value", Float10DataType.dataType,
                    new VariableStorage(currentProgram, currentProgram.getRegister("ST0")), currentProgram));
            helper.setComment("Verified instructions: ST0 input; set CW RC=11, FISTP qword, restore CW; EDX:EAX result. " +
                "Decompiler ROUND omits control-word semantics: finite in-range values truncate toward zero. " +
                "NaN/out-of-range/exception behavior remains x87-specific, not a portable C cast.");
        }
        DecompInterface d = new DecompInterface();
        try {
            if (!d.openProgram(currentProgram)) throw new Exception(d.getLastMessage());
            for (String address : addresses) {
                Function f = getFunctionAt(toAddr(address));
                DecompileResults r = d.decompileFunction(f,60,monitor);
                if (!r.decompileCompleted() || r.getDecompiledFunction()==null) throw new Exception(r.getErrorMessage());
                String c = r.getDecompiledFunction().getC();
                if (c.contains("in_stack_") || c.contains("in_ST0")) throw new Exception("Unbound input: " + address);
                c = "/* Targeted Ghidra research export; addresses use image base 0x00400000.\n" +
                    " * Not compilable or gameplay-verified source. Opaque types/names remain provisional.\n" +
                    " * x87 helper " + addresses[4] + ": ST0 input, EDX:EAX signed 64-bit output.\n" +
                    " * IMPORTANT: helper sets x87 RC=11 (truncate toward zero), restores CW, pops ST0.\n" +
                    " * Ghidra ROUND(value) below does NOT express that control-word change.\n" +
                    " */\n" + c;
                Path file = out.resolve(address+".c");
                StringBuilder listing = new StringBuilder();
                var instructions = currentProgram.getListing().getInstructions(f.getBody(),true);
                while (instructions.hasNext()) {
                    Instruction ins = instructions.next();
                    listing.append(ins.getAddress()).append('\t');
                    for (byte b : ins.getBytes()) listing.append(String.format("%02x",b & 255));
                    listing.append('\t').append(ins).append('\n');
                }
                Path assembly = out.resolve(address+".tsv");
                if (verify) {
                    if (!c.equals(Files.readString(file))) throw new Exception("Reopened export differs: " + file);
                    if (!listing.toString().equals(Files.readString(assembly))) throw new Exception("Reopened instructions differ: " + assembly);
                } else {
                    Files.writeString(file,c,StandardCharsets.UTF_8);
                    Files.writeString(assembly,listing,StandardCharsets.UTF_8);
                }
                println("REFINED " + address + " " + f.getPrototypeString(true,true));
            }
        } finally { d.dispose(); }
        println("SMUTARD_REFINEMENT_PASSED " + currentProgram.getName() + " verify="+verify);
    }
}
