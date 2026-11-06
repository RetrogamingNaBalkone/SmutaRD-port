/* Ghidra address: 0043303e; waveOutUnprepareHeader */

MMRESULT __stdcall waveOutUnprepareHeader(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043303e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutUnprepareHeader(hwo,pwh,cbwh);
  return MVar1;
}

