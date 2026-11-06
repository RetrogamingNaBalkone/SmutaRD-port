/* Ghidra address: 0042319c; FUN_0042319c */

int FUN_0042319c(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = *(int *)(*(int *)(DAT_0048aab4 + 0x754) + 0x30) - *(int *)(in_stack_00000004 + 0x30);
  iVar1 = *(int *)(*(int *)(DAT_0048aab4 + 0x754) + 0x38) - *(int *)(in_stack_00000004 + 0x38);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

