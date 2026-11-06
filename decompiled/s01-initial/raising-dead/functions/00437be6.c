/* Ghidra address: 00437be6; GetAsyncKeyState */

SHORT __stdcall GetAsyncKeyState(int vKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00437be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetAsyncKeyState(vKey);
  return SVar1;
}

