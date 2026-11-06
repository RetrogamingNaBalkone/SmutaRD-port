/* Ghidra address: 00430208; FUN_00430208 */

bool __cdecl FUN_00430208(uint param_1)

{
  DWORD DVar1;
  
  if (DAT_0043b4c0 <= param_1) {
    return false;
  }
  DVar1 = GetFileType(*(HANDLE *)(&DAT_0053e22c + param_1 * 4));
  return DVar1 == 2;
}

