/* Ghidra address: 0040777c; FUN_0040777c */

void FUN_0040777c(void)

{
  short *in_stack_00000004;
  short in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  
  in_stack_00000004[2] = in_stack_00000008 << 8;
  in_stack_00000004[1] = in_stack_0000000c << 8;
  *in_stack_00000004 = in_stack_00000010 << 8;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return;
}

