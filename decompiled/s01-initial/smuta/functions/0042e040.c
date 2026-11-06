/* Ghidra address: 0042e040; FUN_0042e040 */

undefined4 FUN_0042e040(void)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  LPCSTR in_stack_00000004;
  
  BVar1 = CreateDirectoryA(in_stack_00000004,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 1) {
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0xb7) {
    uVar3 = FUN_0042dfc8();
    return uVar3;
  }
  uVar3 = FUN_0042e02c();
  return uVar3;
}

