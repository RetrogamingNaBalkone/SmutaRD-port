/* Ghidra address: 00432fe4; mixerGetLineControlsA */

MMRESULT __stdcall
mixerGetLineControlsA(HMIXEROBJ hmxobj,LPMIXERLINECONTROLSA pmxlc,DWORD fdwControls)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerGetLineControlsA(hmxobj,pmxlc,fdwControls);
  return MVar1;
}

