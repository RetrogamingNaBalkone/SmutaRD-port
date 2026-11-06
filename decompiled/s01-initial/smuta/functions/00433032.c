/* Ghidra address: 00433032; waveOutPrepareHeader */

MMRESULT __stdcall waveOutPrepareHeader(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutPrepareHeader(hwo,pwh,cbwh);
  return MVar1;
}

