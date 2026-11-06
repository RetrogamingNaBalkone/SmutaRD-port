/* Ghidra address: 0041e750; FUN_0041e750 */

int FUN_0041e750(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_004269f7();
  *(int *)(in_stack_00000004 + 0x7e) = iVar1;
  *(undefined2 *)(iVar1 + 4) = 0;
  return iVar1;
}

