/* Ghidra address: 00437cba; mixerSetControlDetails */

MMRESULT __stdcall
mixerSetControlDetails(HMIXEROBJ hmxobj,LPMIXERCONTROLDETAILS pmxcd,DWORD fdwDetails)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00437cba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerSetControlDetails(hmxobj,pmxcd,fdwDetails);
  return MVar1;
}

