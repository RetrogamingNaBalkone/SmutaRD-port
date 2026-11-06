/* Ghidra address: 00432f4e; GetPrivateProfileIntA */

UINT __stdcall
GetPrivateProfileIntA(LPCSTR lpAppName,LPCSTR lpKeyName,INT nDefault,LPCSTR lpFileName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetPrivateProfileIntA(lpAppName,lpKeyName,nDefault,lpFileName);
  return UVar1;
}

