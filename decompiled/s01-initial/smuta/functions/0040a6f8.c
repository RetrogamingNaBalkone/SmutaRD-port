/* Ghidra address: 0040a6f8; FUN_0040a6f8 */

void FUN_0040a6f8(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = &PTR_FUN_0043548c;
  *(undefined2 *)(in_stack_00000004 + 1) = 1;
  *(undefined2 *)((int)in_stack_00000004 + 6) = 8;
  in_stack_00000004[2] = 0x5622;
  in_stack_00000004[3] = 0;
  in_stack_00000004[5] = 0;
  in_stack_00000004[4] = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return;
}

