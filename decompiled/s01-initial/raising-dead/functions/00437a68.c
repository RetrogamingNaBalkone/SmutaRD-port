/* Ghidra address: 00437a68; GetFileAttributesW */

DWORD __stdcall GetFileAttributesW(LPCWSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00437a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesW(lpFileName);
  return DVar1;
}

