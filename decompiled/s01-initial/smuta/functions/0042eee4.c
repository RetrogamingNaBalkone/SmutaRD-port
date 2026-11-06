/* Ghidra address: 0042eee4; FUN_0042eee4 */

int * FUN_0042eee4(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = (**(code **)(**(int **)(*in_stack_00000004 + 4) + 0x24))();
  if (iVar1 == -1) {
    FUN_0042f90c();
  }
  return in_stack_00000004;
}

