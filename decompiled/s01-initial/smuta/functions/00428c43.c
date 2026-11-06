/* Ghidra address: 00428c43; FUN_00428c43 */

void FUN_00428c43(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  
  in_stack_00000004[2] = 0;
  if (0 < in_stack_0000000c) {
    if (DAT_00437658 < in_stack_0000000c) {
      in_stack_0000000c = DAT_00437658;
    }
    in_stack_00000004[1] = in_stack_0000000c;
    in_stack_00000004[2] = in_stack_0000000c;
  }
  in_stack_00000004[3] = in_stack_00000008;
  in_stack_00000004[5] = in_stack_00000004[1];
  in_stack_00000004[4] = *in_stack_00000004;
  return;
}

