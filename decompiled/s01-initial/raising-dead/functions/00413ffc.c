/* Ghidra address: 00413ffc; FUN_00413ffc */

void __stdcall FUN_00413ffc(void)

{
  FUN_00433130();
  FUN_00433130();
  (**(code **)(*DAT_0053d640 + 0x44))();
  if (*(int *)(DAT_004f1434 + 0x3ce) != 0) {
    (**(code **)(*(int *)(*(int *)(DAT_004f1434 + 0x3ce) + 0x14) + 0x10))();
    FUN_00433130();
    FUN_00433130();
    (**(code **)(*DAT_0053d640 + 0x44))();
  }
  return;
}

