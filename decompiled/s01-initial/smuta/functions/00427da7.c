/* Ghidra address: 00427da7; FUN_00427da7 */

void FUN_00427da7(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  int local_8;
  
  bVar7 = 0;
  if (DAT_00437630 != 0) {
    for (local_8 = 0; local_8 < DAT_0043762c; local_8 = local_8 + 1) {
      DAT_00437638 = DAT_00437634[2];
      iVar4 = 0;
      for (iVar3 = 0; iVar3 < *DAT_00437634; iVar3 = iVar3 + 1) {
        puVar5 = (undefined4 *)(DAT_00437638 + iVar3 * 0x14);
        puVar6 = (undefined4 *)(DAT_00437638 + iVar4 * 0x14);
        for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        DAT_0043763c = '\x01';
        iVar2 = *(int *)(DAT_00437638 + iVar3 * 0x14);
        piVar1 = (int *)(DAT_00437638 + iVar3 * 0x14);
        *piVar1 = *piVar1 + -1;
        piVar1 = DAT_00437634;
        if (iVar2 < 1) {
          (**(code **)(DAT_00437638 + 8 + iVar3 * 0x14))();
          DAT_00437634 = piVar1;
          *(undefined4 *)(DAT_00437638 + iVar3 * 0x14) =
               *(undefined4 *)(DAT_00437638 + 4 + iVar3 * 0x14);
        }
        if (DAT_0043763c != '\0') {
          iVar4 = iVar4 + 1;
        }
      }
      DAT_00437630 = DAT_00437630 - (*DAT_00437634 - iVar4);
      *DAT_00437634 = iVar4;
      if (iVar4 == 0) {
        *(int *)(DAT_00437634[3] + 0x10) = DAT_00437634[4];
        *(int *)(DAT_00437634[4] + 0xc) = DAT_00437634[3];
        DAT_0043762c = DAT_0043762c + -1;
      }
      DAT_00437634 = (int *)DAT_00437634[3];
    }
  }
  return;
}

