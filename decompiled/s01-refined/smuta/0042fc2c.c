/* Targeted Ghidra research export; addresses use image base 0x00400000.
 * Not compilable or gameplay-verified source. Opaque types/names remain provisional.
 * x87 helper 0042fc2c: ST0 input, EDX:EAX signed 64-bit output.
 * IMPORTANT: helper sets x87 RC=11 (truncate toward zero), restores CW, pops ST0.
 * Ghidra ROUND(value) below does NOT express that control-word change.
 */

/* Verified instructions: ST0 input; set CW RC=11, FISTP qword, restore CW; EDX:EAX result.
   Decompiler ROUND omits control-word semantics: finite in-range values truncate toward zero.
   NaN/out-of-range/exception behavior remains x87-specific, not a portable C cast. */

longlong __cdecl FUN_0042fc2c(float10 value)

{
  return (longlong)ROUND(value);
}

