/* Ghidra address: 00437cb4; mixerOpen */

MMRESULT __stdcall
mixerOpen(LPHMIXER phmx,UINT uMxId,DWORD_PTR dwCallback,DWORD_PTR dwInstance,DWORD fdwOpen)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00437cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerOpen(phmx,uMxId,dwCallback,dwInstance,fdwOpen);
  return MVar1;
}

