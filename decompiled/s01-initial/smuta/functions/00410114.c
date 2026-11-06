/* Ghidra address: 00410114; FUN_00410114 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410114(void)

{
  int *piVar1;
  int iVar2;
  
  FUN_00424c98();
  piVar1 = DAT_0044f640;
  *(undefined2 *)(DAT_0044f640 + 8) = 0x30;
  *(undefined2 *)((int)piVar1 + 0x22) = 0x28;
  FUN_004267f4();
  iVar2 = 0;
  do {
    FUN_0042bb58();
    if ((*(byte *)(DAT_0044f9b8 + 0x12) & 0x20) != 0) break;
    FUN_00426799();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x12);
  FUN_0042fc2c();
  FUN_0042fc2c();
  (**(code **)(*DAT_0044f640 + 0x40))();
  return;
}

