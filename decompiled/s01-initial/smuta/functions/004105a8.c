/* Ghidra address: 004105a8; FUN_004105a8 */

void FUN_004105a8(void)

{
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 0x10) = *(int *)(in_stack_00000004 + 0x18) + 0x7fff >> 0x10;
  *(int *)(in_stack_00000004 + 0x14) = *(int *)(in_stack_00000004 + 0x1c) + 0x7fff >> 0x10;
  *(int *)(in_stack_00000004 + 0x18) =
       *(int *)(in_stack_00000004 + 0x18) + *(int *)(in_stack_00000004 + 0x20);
  *(int *)(in_stack_00000004 + 0x1c) =
       *(int *)(in_stack_00000004 + 0x1c) + *(int *)(in_stack_00000004 + 0x24);
  return;
}

