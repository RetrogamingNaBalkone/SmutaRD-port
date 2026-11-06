/* Ghidra address: 0040b350; FUN_0040b350 */

void __stdcall FUN_0040b350(void)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  bool bVar12;
  
  iVar7 = DAT_004c32d4;
  iVar3 = DAT_00438f14;
  uVar4 = DAT_004c3368 >> 0x10;
  iVar5 = uVar4 * 2 + DAT_004c32d4;
  psVar9 = (short *)((&DAT_004c2690)[DAT_004c3360] + DAT_004c3362 * 2);
  if (DAT_00438eaa < DAT_004c3366) {
    DAT_004c3366 = DAT_00438eaa;
  }
  psVar11 = (short *)((&DAT_004c2690)[DAT_004c3366] + DAT_004c3362 * 2);
  if (DAT_004c337a == 0) {
    if (DAT_004c3378 == 0) {
      if (DAT_004c32d0 == 0x40) {
        for (; psVar9 != psVar11; psVar9 = psVar9 + DAT_00438f14) {
          *psVar9 = *(short *)(DAT_004c2670 +
                              (uint)*(ushort *)
                                     (iVar7 + ((DAT_004c336c >> 0x10 & 0x3fU) * 0x40 +
                                              (uVar4 & 0x3f)) * 2) * 2);
          DAT_004c336c = DAT_004c336c + DAT_004c3374;
        }
      }
      else {
        for (; psVar9 != psVar11; psVar9 = psVar9 + DAT_00438f14) {
          *psVar9 = *(short *)(DAT_004c2670 +
                              (uint)*(ushort *)
                                     (iVar5 + (DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2) * 2);
          DAT_004c336c = DAT_004c336c + DAT_004c3374;
        }
      }
    }
    else if (DAT_00439f58 == 1) {
      for (; psVar9 != psVar11; psVar9 = psVar9 + DAT_00438f14) {
        sVar2 = *(short *)(iVar5 + (DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
        if (sVar2 != 0) {
          *psVar9 = *psVar9 + sVar2;
        }
        DAT_004c336c = DAT_004c336c + DAT_004c3374;
      }
    }
    else {
      for (; psVar9 != psVar11; psVar9 = psVar9 + DAT_00438f14) {
        bVar1 = *(byte *)(iVar5 + (DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
        if (bVar1 != 0) {
          *psVar9 = *psVar9 + ((ushort)((int)(uint)*(ushort *)(DAT_004c2670 + (uint)bVar1 * 2) >> 1)
                              & 0x7bef);
        }
        DAT_004c336c = DAT_004c336c + DAT_004c3374;
      }
    }
  }
  else {
    psVar6 = (short *)((DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2 + DAT_004c32d4 + uVar4 * 2);
    iVar10 = (int)DAT_004c32d0;
    iVar7 = DAT_004c3374 >> 0x10;
    uVar4 = DAT_004c3374 * 0x10000;
    uVar8 = DAT_004c336c << 0x10;
    iVar5 = (int)DAT_004c32d0;
    while (psVar9 != psVar11) {
      if (*psVar6 != 0) {
        *psVar9 = *psVar6;
      }
      psVar9 = psVar9 + iVar3;
      psVar6 = psVar6 + iVar7 * iVar10;
      bVar12 = CARRY4(uVar8,uVar4);
      uVar8 = uVar8 + uVar4;
      if (bVar12) {
        psVar6 = psVar6 + iVar5;
      }
    }
  }
  return;
}

