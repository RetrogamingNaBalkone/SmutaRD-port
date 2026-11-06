/* Ghidra address: 00403cf8; FUN_00403cf8 */

void FUN_00403cf8(void)

{
  int iVar1;
  
  FUN_00429054();
  do {
    (**(code **)(*DAT_00434134 + 100))();
    iVar1 = FUN_00403b80();
  } while (iVar1 != 0);
  FUN_00403ed8();
  (**(code **)(*DAT_00434134 + 0x80))();
  if (DAT_0043413c != 0) {
    FUN_00403c10();
  }
  return;
}

