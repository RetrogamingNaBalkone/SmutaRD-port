/* Ghidra address: 00409a24; FUN_00409a24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00409a24(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte *pbVar4;
  ushort *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  
  iVar2 = DAT_004c32d4;
  uVar8 = DAT_004c3368 >> 0x10;
  iVar9 = uVar8 * 2 + DAT_004c32d4;
  pbVar4 = (byte *)((&DAT_004c2690)[DAT_004c3360] + DAT_004c3362 * 2);
  pbVar7 = (byte *)((&DAT_004c2690)[DAT_004c3366] + DAT_004c3362 * 2 + DAT_00438f14);
  puVar5 = (ushort *)((&DAT_004cde78)[(int)DAT_004c3360 >> 1] + ((int)DAT_004c3362 >> 1) * 2);
  bVar3 = false;
  if (DAT_004c337a == 0) {
    if (DAT_004c3378 == 0) {
      if (DAT_004c32d2 == 0x40) {
        for (; pbVar7 != pbVar4; pbVar4 = pbVar4 + DAT_00438f14) {
          *pbVar4 = *(byte *)(DAT_004c2670 +
                             (uint)*(ushort *)
                                    (iVar2 + ((DAT_004c336c >> 0x10 & 0x3fU) * 0x40 + (uVar8 & 0x3f)
                                             ) * 2));
          DAT_004c336c = DAT_004c336c + DAT_004c3374;
        }
        iVar6 = (int)DAT_004c3362;
        iVar2 = (&DAT_004cde78)[(int)DAT_004c3366 >> 1];
        iVar9 = DAT_00438f18 * 2;
        for (; (ushort *)(iVar2 + (iVar6 >> 1) * 2 + iVar9) != puVar5;
            puVar5 = puVar5 + DAT_00438f18) {
          *puVar5 = DAT_004cde74;
        }
      }
      else {
        for (; pbVar7 != pbVar4; pbVar4 = pbVar4 + DAT_00438f14) {
          *pbVar4 = *(byte *)(iVar9 + (DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
          if (bVar3) {
            *puVar5 = DAT_004cde74;
            puVar5 = puVar5 + DAT_00438f18;
          }
          bVar3 = !bVar3;
          DAT_004c336c = DAT_004c336c + DAT_004c3374;
        }
      }
    }
    else {
      for (; pbVar7 != pbVar4; pbVar4 = pbVar4 + DAT_00438f14) {
        bVar1 = *(byte *)(iVar9 + (DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
        if ((bVar1 != 0) && (_DAT_004cde74 <= *puVar5)) {
          *puVar5 = DAT_004cde74;
          *pbVar4 = *(byte *)(DAT_00501674 + (uint)bVar1 * 0x100 + 0xa008 + (uint)*pbVar4);
        }
        if (bVar3) {
          puVar5 = puVar5 + DAT_00438f18;
        }
        bVar3 = !bVar3;
        DAT_004c336c = DAT_004c336c + DAT_004c3374;
      }
    }
  }
  else {
    for (; pbVar7 != pbVar4; pbVar4 = pbVar4 + DAT_00438f14) {
      bVar1 = *(byte *)(iVar9 + (DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
      if ((bVar1 != 0) && (_DAT_004cde74 <= *puVar5)) {
        *puVar5 = DAT_004cde74;
        *pbVar4 = *(byte *)(DAT_004c2670 + (uint)bVar1);
      }
      if (bVar3) {
        puVar5 = puVar5 + DAT_00438f18;
      }
      bVar3 = !bVar3;
      DAT_004c336c = DAT_004c336c + DAT_004c3374;
    }
  }
  return;
}

