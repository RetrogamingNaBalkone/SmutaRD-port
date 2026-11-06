/* Ghidra address: 00409104; FUN_00409104 */

void FUN_00409104(void)

{
  short in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  for (; in_stack_00000004 != 0; in_stack_00000004 = in_stack_00000004 + -1) {
    *in_stack_00000008 = *in_stack_00000008 + in_stack_0000000c;
    in_stack_00000008[1] = in_stack_00000008[1] + in_stack_00000010;
    in_stack_00000008 = in_stack_00000008 + 2;
  }
  return;
}

