/* Ghidra address: 0040595c; FUN_0040595c */

void FUN_0040595c(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00434dec;
    thunk_FUN_004a6190();
    FUN_00424b90();
    FUN_00404d08();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

