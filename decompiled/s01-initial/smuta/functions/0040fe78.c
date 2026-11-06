/* Ghidra address: 0040fe78; FUN_0040fe78 */

void FUN_0040fe78(void)

{
  int iVar1;
  
  (**(code **)(*DAT_0044f640 + 0x40))();
  FUN_0042fc2c();
  for (iVar1 = 0; iVar1 < DAT_00435814; iVar1 = iVar1 + 1) {
    if (iVar1 == DAT_0044f958) {
      (**(code **)(*DAT_0044f640 + 0x40))();
    }
  }
  return;
}

