/* Ghidra address: 00432fd2; mixerOpen */

MMRESULT __stdcall
mixerOpen(LPHMIXER phmx,UINT uMxId,DWORD_PTR dwCallback,DWORD_PTR dwInstance,DWORD fdwOpen)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerOpen(phmx,uMxId,dwCallback,dwInstance,fdwOpen);
  return MVar1;
}

