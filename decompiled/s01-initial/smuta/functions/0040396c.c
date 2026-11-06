/* Ghidra address: 0040396c; FUN_0040396c */

void FUN_0040396c(void)

{
  int iVar1;
  undefined4 in_stack_00000008;
  
  iVar1 = DirectDrawCreate();
  if (iVar1 != 0) {
    FUN_0042a068();
  }
  iVar1 = (**(code **)(*DAT_00434128 + 0x50))();
  if (iVar1 != 0) {
    FUN_0042a068();
  }
  DAT_0043413c = in_stack_00000008;
  return;
}

