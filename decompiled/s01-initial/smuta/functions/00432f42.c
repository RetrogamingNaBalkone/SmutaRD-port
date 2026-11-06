/* Ghidra address: 00432f42; GetPrivateProfileStringA */

DWORD __stdcall
GetPrivateProfileStringA
          (LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,DWORD nSize,
          LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize,lpFileName);
  return DVar1;
}

