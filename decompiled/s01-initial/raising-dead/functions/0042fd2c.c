/* Ghidra address: 0042fd2c; FUN_0042fd2c */

DWORD __cdecl FUN_0042fd2c(uint param_1)

{
  DWORD DVar1;
  
  if (param_1 < DAT_0043b4c0) {
    DVar1 = GetFileSize(*(HANDLE *)(&DAT_0053e22c + param_1 * 4),(LPDWORD)0x0);
    if (DVar1 == 0xffffffff) {
      DVar1 = FUN_00430070();
    }
  }
  else {
    DVar1 = FUN_0043000c(6);
  }
  return DVar1;
}

