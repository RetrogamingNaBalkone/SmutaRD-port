/* Ghidra address: 00437a92; GetPrivateProfileIntA */

UINT __stdcall
GetPrivateProfileIntA(LPCSTR lpAppName,LPCSTR lpKeyName,INT nDefault,LPCSTR lpFileName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00437a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetPrivateProfileIntA(lpAppName,lpKeyName,nDefault,lpFileName);
  return UVar1;
}

