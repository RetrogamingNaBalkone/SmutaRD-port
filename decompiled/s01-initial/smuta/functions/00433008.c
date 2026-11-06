/* Ghidra address: 00433008; auxGetVolume */

MMRESULT __stdcall auxGetVolume(UINT uDeviceID,LPDWORD pdwVolume)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = auxGetVolume(uDeviceID,pdwVolume);
  return MVar1;
}

