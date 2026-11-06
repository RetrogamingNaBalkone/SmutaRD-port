/* Ghidra address: 00432f66; CreateDirectoryA */

BOOL __stdcall CreateDirectoryA(LPCSTR lpPathName,LPSECURITY_ATTRIBUTES lpSecurityAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateDirectoryA(lpPathName,lpSecurityAttributes);
  return BVar1;
}

