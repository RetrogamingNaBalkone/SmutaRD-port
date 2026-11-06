/* Ghidra address: 00432ff0; mixerGetControlDetailsA */

MMRESULT __stdcall
mixerGetControlDetailsA(HMIXEROBJ hmxobj,LPMIXERCONTROLDETAILS pmxcd,DWORD fdwDetails)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerGetControlDetailsA(hmxobj,pmxcd,fdwDetails);
  return MVar1;
}

