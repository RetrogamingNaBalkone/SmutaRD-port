/* Ghidra address: 0040e1c8; FUN_0040e1c8 */

void FUN_0040e1c8(void)

{
  int in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  if (*(int *)(in_stack_00000004 + 0x25) < *(int *)(in_stack_00000004 + 0x19)) {
    *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x19);
    *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x25);
    return;
  }
  *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x25);
  *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x19);
  return;
}

