/* Ghidra address: 00437c9c; mixerGetDevCapsA */

MMRESULT __stdcall mixerGetDevCapsA(UINT_PTR uMxId,LPMIXERCAPSA pmxcaps,UINT cbmxcaps)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00437c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerGetDevCapsA(uMxId,pmxcaps,cbmxcaps);
  return MVar1;
}

