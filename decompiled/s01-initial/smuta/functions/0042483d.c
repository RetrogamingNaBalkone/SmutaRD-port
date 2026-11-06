/* Ghidra address: 0042483d; FUN_0042483d */

void FUN_0042483d(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  if (in_stack_00000004 != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    FUN_0041e238();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

