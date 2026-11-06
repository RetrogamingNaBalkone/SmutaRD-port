/* Ghidra address: 0040e3dc; FUN_0040e3dc */

void __stdcall FUN_0040e3dc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  byte bVar8;
  int local_14;
  
  bVar8 = 0;
  if (DAT_004399a4 != 0) {
    for (local_14 = 0; local_14 < DAT_004399a0; local_14 = local_14 + 1) {
      DAT_004399ac = DAT_004399a8[2];
      iVar6 = 0;
      for (iVar4 = 0; iVar2 = DAT_004399ac, piVar1 = DAT_004399a8, iVar4 < *DAT_004399a8;
          iVar4 = iVar4 + 1) {
        puVar5 = (undefined4 *)(DAT_004399ac + iVar4 * 0x14);
        puVar7 = (undefined4 *)(DAT_004399ac + iVar6 * 0x14);
        for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        DAT_004399b0 = '\x01';
        iVar3 = *(int *)(iVar2 + iVar4 * 0x14);
        piVar1 = (int *)(iVar2 + iVar4 * 0x14);
        *piVar1 = *piVar1 + -1;
        piVar1 = DAT_004399a8;
        if (iVar3 < 1) {
          (**(code **)(DAT_004399ac + 8 + iVar4 * 0x14))();
          DAT_004399a8 = piVar1;
          *(undefined4 *)(DAT_004399ac + iVar4 * 0x14) =
               *(undefined4 *)(DAT_004399ac + 4 + iVar4 * 0x14);
        }
        if (DAT_004399b0 != '\0') {
          iVar6 = iVar6 + 1;
        }
      }
      DAT_004399a4 = DAT_004399a4 - (*DAT_004399a8 - iVar6);
      *DAT_004399a8 = iVar6;
      if (iVar6 == 0) {
        iVar4 = piVar1[3];
        *(int *)(iVar4 + 0x10) = piVar1[4];
        *(int *)(piVar1[4] + 0xc) = iVar4;
        DAT_004399a0 = DAT_004399a0 + -1;
      }
      DAT_004399a8 = (int *)DAT_004399a8[3];
    }
  }
  return;
}

