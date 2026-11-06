/* Ghidra address: 004220dc; FUN_004220dc */

int FUN_004220dc(void)

{
  int in_stack_00000004;
  
  FUN_0041e2c4();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_004368d0;
  *(undefined2 *)(in_stack_00000004 + 0x78) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x72) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x76) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x74) = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

