/* Ghidra address: 00433014; auxGetDevCapsA */

MMRESULT __stdcall auxGetDevCapsA(UINT_PTR uDeviceID,LPAUXCAPSA pac,UINT cbac)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = auxGetDevCapsA(uDeviceID,pac,cbac);
  return MVar1;
}

