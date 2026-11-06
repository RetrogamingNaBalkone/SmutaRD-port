/* Ghidra address: 00423660; FUN_00423660 */

void __stdcall FUN_00423660(void)

{
  int iVar1;
  
  (**(code **)(*DAT_0053d640 + 0x40))();
  FUN_00433130();
  for (iVar1 = 0; iVar1 < DAT_00439ff0; iVar1 = iVar1 + 1) {
    if (iVar1 == DAT_0053c814) {
      (**(code **)(*DAT_0053d640 + 0x40))();
    }
  }
  return;
}

