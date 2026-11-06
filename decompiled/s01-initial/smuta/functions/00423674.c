/* Ghidra address: 00423674; FUN_00423674 */

void FUN_00423674(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x138);
  *(int *)(in_stack_00000004 + 0x138) = *(int *)(in_stack_00000004 + 0x138) + -1;
  if (iVar1 < 1) {
    *(undefined2 *)(in_stack_00000004 + 0x136) = *(undefined2 *)(in_stack_00000004 + 0x132);
  }
  return;
}

