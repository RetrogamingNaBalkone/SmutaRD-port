/* Ghidra address: 0041e944; FUN_0041e944 */

int FUN_0041e944(void)

{
  int in_stack_00000004;
  
  FUN_0041e2c4();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436b28;
  *(undefined1 *)(in_stack_00000004 + 0x8e) = 1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_LAB_00436998;
  *(undefined1 *)(in_stack_00000004 + 0x94) = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

