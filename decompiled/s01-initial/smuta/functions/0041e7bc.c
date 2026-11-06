/* Ghidra address: 0041e7bc; FUN_0041e7bc */

int FUN_0041e7bc(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_004269f7();
  *(int *)(in_stack_00000004 + 100) = iVar1;
  *(undefined2 *)(iVar1 + 4) = 0;
  return iVar1;
}

