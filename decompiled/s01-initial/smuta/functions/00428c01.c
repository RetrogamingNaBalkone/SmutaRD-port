/* Ghidra address: 00428c01; FUN_00428c01 */

void FUN_00428c01(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  in_stack_00000004[3] = in_stack_00000008;
  in_stack_00000004[2] = in_stack_00000008;
  in_stack_00000004[4] = in_stack_00000004[2] + in_stack_0000000c;
  in_stack_00000004[1] = in_stack_00000010;
  *in_stack_00000004 = in_stack_00000014;
  return;
}

