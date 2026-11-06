/* Ghidra address: 0042f714; FUN_0042f714 */

void FUN_0042f714(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  *(uint *)(in_stack_00000004 + 0x14) = in_stack_00000008;
  *(uint *)(in_stack_00000004 + 0x10) = in_stack_00000008;
  if (((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) ||
     (in_stack_0000000c < in_stack_00000008)) {
    in_stack_0000000c = in_stack_00000008;
  }
  *(uint *)(in_stack_00000004 + 0x18) = in_stack_0000000c;
  return;
}

