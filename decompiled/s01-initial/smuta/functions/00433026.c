/* Ghidra address: 00433026; waveOutGetVolume */

MMRESULT __stdcall waveOutGetVolume(HWAVEOUT hwo,LPDWORD pdwVolume)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutGetVolume(hwo,pdwVolume);
  return MVar1;
}

