/* Ghidra address: 00401558; thunk_FUN_004a6260 */

void thunk_FUN_004a6260(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 == 3) {
    FUN_004a6000();
    return;
  }
  if (in_stack_00000004 != 0) {
    FUN_004a6250();
    return;
  }
  FUN_004a6250();
  FUN_004a6000();
  FUN_004a6000();
  return;
}

