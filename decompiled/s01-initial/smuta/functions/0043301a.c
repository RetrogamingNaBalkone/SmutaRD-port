/* Ghidra address: 0043301a; mixerGetLineInfoA */

MMRESULT __stdcall mixerGetLineInfoA(HMIXEROBJ hmxobj,LPMIXERLINEA pmxl,DWORD fdwInfo)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043301a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerGetLineInfoA(hmxobj,pmxl,fdwInfo);
  return MVar1;
}

