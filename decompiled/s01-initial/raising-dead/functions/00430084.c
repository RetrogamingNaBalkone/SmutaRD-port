/* Ghidra address: 00430084; FUN_00430084 */

undefined4 __cdecl FUN_00430084(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  BVar1 = CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 1) {
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0xb7) {
    uVar3 = FUN_0043000c(5);
    return uVar3;
  }
  uVar3 = FUN_00430070();
  return uVar3;
}

