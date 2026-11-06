/* Ghidra address: 00404fd6; FUN_00404fd6 */

void FUN_00404fd6(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if ((in_stack_00000004 != (undefined4 *)0x0) &&
     (*in_stack_00000004 = &PTR_FUN_004347b4, (in_stack_00000008 & 1) != 0)) {
    FUN_00431954();
  }
  return;
}

