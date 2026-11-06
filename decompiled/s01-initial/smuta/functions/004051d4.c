/* Ghidra address: 004051d4; FUN_004051d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004051d4(void)

{
  undefined4 *in_stack_00000004;
  int in_stack_00000010;
  
  FUN_00404c88();
  *in_stack_00000004 = &PTR_FUN_00434e14;
  FUN_00424fc0();
  FUN_00404c04();
  FUN_00404bb8();
  FUN_004281c6();
  if ((1 < _DAT_00443d4c) && (in_stack_00000010 == 0)) {
    FUN_00426100();
  }
  thunk_FUN_004a6160();
  FUN_00406a20();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

