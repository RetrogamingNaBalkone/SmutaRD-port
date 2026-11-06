/* Ghidra address: 0042d1b4; FUN_0042d1b4 */

void FUN_0042d1b4(void)

{
  undefined1 in_stack_00000004;
  int in_stack_00000008;
  
  if (0x4f < *(int *)(in_stack_00000008 + 0x50)) {
    FUN_0042d184();
  }
  *(undefined1 *)(in_stack_00000008 + *(int *)(in_stack_00000008 + 0x50)) = in_stack_00000004;
  *(int *)(in_stack_00000008 + 0x50) = *(int *)(in_stack_00000008 + 0x50) + 1;
  *(int *)(in_stack_00000008 + 0x5c) = *(int *)(in_stack_00000008 + 0x5c) + 1;
  return;
}

