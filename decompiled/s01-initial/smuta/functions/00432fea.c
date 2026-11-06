/* Ghidra address: 00432fea; mixerGetDevCapsA */

MMRESULT __stdcall mixerGetDevCapsA(UINT_PTR uMxId,LPMIXERCAPSA pmxcaps,UINT cbmxcaps)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerGetDevCapsA(uMxId,pmxcaps,cbmxcaps);
  return MVar1;
}

