/* Ghidra address: 004212a4; FUN_004212a4 */

int FUN_004212a4(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  FUN_0041e2c4();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436900;
  *(undefined1 *)(in_stack_00000004 + 0x88) = 0x20;
  *(undefined2 *)(in_stack_00000004 + 0x70) = 0xffff;
  *(undefined2 *)(in_stack_00000004 + 0x78) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x99) = 0;
  FUN_0041e4b4();
  uVar1 = FUN_00426946();
  *(undefined4 *)(in_stack_00000004 + 100) = uVar1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

