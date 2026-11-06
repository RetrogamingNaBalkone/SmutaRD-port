/* Ghidra address: 0042ad80; FUN_0042ad80 */

int FUN_0042ad80(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  iVar1 = *in_stack_00000008;
  if ((*(uint *)(iVar1 + 0xc) & 0x50) != 0x50) {
    return in_stack_00000004;
  }
  if (*(int *)(iVar1 + 8) == -1) {
    return in_stack_00000004;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 8) + in_stack_00000004);
  iVar2 = *(int *)(iVar1 + -8);
  *in_stack_00000008 = *(int *)((iVar1 - *(int *)(iVar1 + -4)) + -0xc);
  return in_stack_00000004 - iVar2;
}

