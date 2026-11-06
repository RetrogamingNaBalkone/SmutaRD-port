/* Ghidra address: 0041e61c; FUN_0041e61c */

void FUN_0041e61c(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436b28;
    FUN_0041e238();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

