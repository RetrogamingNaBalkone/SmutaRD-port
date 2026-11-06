/* Ghidra address: 00404598; FUN_00404598 */

void FUN_00404598(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_0043475c;
    FUN_00428949();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

