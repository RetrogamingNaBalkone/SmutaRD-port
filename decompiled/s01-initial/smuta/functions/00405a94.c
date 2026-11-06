/* Ghidra address: 00405a94; FUN_00405a94 */

void FUN_00405a94(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00434d80;
    FUN_00405cb4();
    FUN_0040170c();
    FUN_00425e98();
    FUN_00404598();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

