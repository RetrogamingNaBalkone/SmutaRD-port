/* Ghidra address: 00430238; FUN_00430238 */

bool __cdecl FUN_00430238(HANDLE param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileType(param_1);
  return DVar1 == 2;
}

