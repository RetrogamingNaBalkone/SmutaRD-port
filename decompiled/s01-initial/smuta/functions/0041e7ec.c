/* Ghidra address: 0041e7ec; FUN_0041e7ec */

int FUN_0041e7ec(void)

{
  int in_stack_00000004;
  
  FUN_0041e2c4();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436b28;
  *(undefined1 *)(in_stack_00000004 + 0x8e) = 1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_LAB_004369e4;
  *(undefined2 *)(in_stack_00000004 + 0x72) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x70) = 0xc;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

