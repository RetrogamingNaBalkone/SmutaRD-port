/* Ghidra address: 00404d40; FUN_00404d40 */

void FUN_00404d40(void)

{
  int in_stack_00000004;
  tagRECT local_28;
  float local_18;
  int local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  GetClientRect(DAT_00443c44,&local_28);
  local_8 = (float)local_28.right;
  local_c = (float)local_28.bottom;
  local_14 = *(int *)(in_stack_00000004 + 0x16);
  if (local_c < ((float)local_14 * local_8) / (float)*(int *)(in_stack_00000004 + 0x12)) {
    local_18 = local_c / (float)local_14;
    FUN_0042fc2c();
    local_10 = FUN_0042fc2c();
    FUN_0042fc2c();
  }
  else {
    local_18 = local_8 / (float)*(int *)(in_stack_00000004 + 0x12);
    FUN_0042fc2c();
    local_10 = FUN_0042fc2c();
    FUN_0042fc2c();
  }
  FUN_00403f54();
  return;
}

