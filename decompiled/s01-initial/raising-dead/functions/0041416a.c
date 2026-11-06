/* Ghidra address: 0041416a; FUN_0041416a */

void __stdcall FUN_0041416a(void)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  puVar2 = *(uint **)(unaff_EBP + 0xc);
  iVar3 = *(int *)(unaff_EBP + 8);
  if ((*puVar2 & 0x40000) != 0) {
    puVar7 = (undefined4 *)(*(int *)(unaff_EBP + 0x10) + 0x31);
    puVar8 = (undefined4 *)(unaff_EBP + -0x34);
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar5 = FUN_00416644(DAT_004f1434,(int *)(unaff_EBP + -0x34),2,1);
    iVar6 = *(int *)(unaff_EBP + -0x30);
    sVar1 = *(short *)(iVar5 + 0x1f);
    sVar4 = (**(code **)(*(int *)(iVar3 + 0x14) + 0xc))();
    iVar5 = (int)sVar4 >> 1;
    if (iVar5 < 100) {
      iVar5 = 100;
    }
    if (((-(int)sVar1 - iVar6 < iVar5) && (*(short *)(iVar3 + 0x75) == 0)) &&
       (*(short *)(iVar3 + 0x77) < 0)) {
      puVar7 = (undefined4 *)(*(int *)(unaff_EBP + 0x10) + 0x31);
      puVar8 = (undefined4 *)(iVar3 + 0x31);
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      *puVar2 = *puVar2 & 0xfffbffff;
      FUN_0040ffb4(iVar3,0x20,1);
    }
  }
  return;
}

