/* Ghidra address: 0041eb08; FUN_0041eb08 */

void FUN_0041eb08(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436964;
    *(undefined2 *)(in_stack_00000004 + 0x1b) = 0;
    FUN_0041e238();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

