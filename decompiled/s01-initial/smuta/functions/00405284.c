/* Ghidra address: 00405284; FUN_00405284 */

void FUN_00405284(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00434e14;
    thunk_FUN_004a6190();
    FUN_004281c6();
    FUN_00425f44();
    FUN_00404d08();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

