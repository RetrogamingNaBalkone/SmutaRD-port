/* Ghidra address: 0042950c; FUN_0042950c */

void FUN_0042950c(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_004327b0();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

