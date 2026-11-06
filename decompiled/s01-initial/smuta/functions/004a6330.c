/* Ghidra address: 004a6330; FUN_004a6330 */

void FUN_004a6330(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 == 3) {
    FUN_004a6000();
    return;
  }
  if (in_stack_00000004 != 0) {
    FUN_004a6320();
    return;
  }
  FUN_004a6320();
  FUN_004a6000();
  FUN_004a6000();
  return;
}

