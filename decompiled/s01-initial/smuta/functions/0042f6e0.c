/* Ghidra address: 0042f6e0; FUN_0042f6e0 */

void FUN_0042f6e0(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  
  if ((in_stack_0000000c == 0) || (in_stack_00000008 == 0)) {
    in_stack_00000008 = in_stack_0000000c;
  }
  *(uint *)(in_stack_00000004 + 0x1c) = in_stack_00000008;
  *(uint *)(in_stack_00000004 + 0x20) = in_stack_0000000c;
  if (((in_stack_0000000c == 0) || (in_stack_00000010 == 0)) ||
     (in_stack_00000010 < in_stack_0000000c)) {
    in_stack_00000010 = in_stack_0000000c;
  }
  *(uint *)(in_stack_00000004 + 0x24) = in_stack_00000010;
  return;
}

