/* Ghidra address: 0042e13c; FUN_0042e13c */

undefined4 FUN_0042e13c(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  LPCSTR in_stack_00000004;
  byte in_stack_00000008;
  
  DVar1 = GetFileAttributesA(in_stack_00000004);
  if (DVar1 == 0xffffffff) {
    uVar2 = FUN_0042e02c();
    return uVar2;
  }
  if (((in_stack_00000008 & 2) != 0) && ((DVar1 & 1) != 0)) {
    DAT_00438c44 = 5;
    return 0xffffffff;
  }
  return 0;
}

