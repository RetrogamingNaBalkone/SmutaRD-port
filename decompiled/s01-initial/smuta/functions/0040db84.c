/* Ghidra address: 0040db84; FUN_0040db84 */

void FUN_0040db84(void)

{
  int in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  if (*(int *)(in_stack_00000004 + 0x29) < *(int *)(in_stack_00000004 + 0x1d)) {
    *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x1d);
    *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x29);
    return;
  }
  *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x29);
  *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x1d);
  return;
}

