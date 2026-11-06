/* Ghidra address: 00432fde; waveOutWrite */

MMRESULT __stdcall waveOutWrite(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutWrite(hwo,pwh,cbwh);
  return MVar1;
}

