/* Ghidra address: 00421e00; FUN_00421e00 */

void FUN_00421e00(void)

{
  FUN_0042fc2c();
  FUN_0042fc2c();
  (**(code **)(*DAT_0044f640 + 0x44))();
  if (*(int *)(DAT_0048aab4 + 0x3ce) != 0) {
    (**(code **)(*(int *)(*(int *)(DAT_0048aab4 + 0x3ce) + 0x14) + 0x10))();
    FUN_0042fc2c();
    FUN_0042fc2c();
    (**(code **)(*DAT_0044f640 + 0x44))();
  }
  return;
}

