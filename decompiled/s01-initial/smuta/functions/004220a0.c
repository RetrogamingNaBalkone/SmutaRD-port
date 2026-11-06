/* Ghidra address: 004220a0; FUN_004220a0 */

void FUN_004220a0(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_004368d0;
    *(undefined2 *)(in_stack_00000004 + 0x1b) = 0;
    FUN_0041e238();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

