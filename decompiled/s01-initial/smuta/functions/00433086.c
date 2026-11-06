/* Ghidra address: 00433086; GetAsyncKeyState */

SHORT __stdcall GetAsyncKeyState(int vKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetAsyncKeyState(vKey);
  return SVar1;
}

