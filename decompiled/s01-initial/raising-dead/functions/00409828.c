/* Ghidra address: 00409828; FUN_00409828 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00409828(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  short sVar6;
  int iVar7;
  undefined2 *puVar8;
  short sVar9;
  short local_30;
  short local_2e;
  int local_28;
  int local_24;
  int *local_18;
  ushort *local_14;
  
  local_30 = DAT_004cd1be;
  local_14 = &DAT_004cd1f4;
  local_18 = &DAT_004cbf80;
  for (local_2e = 0; local_2e < DAT_004cd1bc; local_2e = local_2e + 1) {
    iVar1 = *local_18;
    iVar2 = local_2e * 10;
    iVar3 = local_2e * 10;
    sVar6 = *(short *)(&DAT_004c337e + iVar2);
    sVar9 = *(short *)(&DAT_004c517e + iVar3);
    if (((DAT_00438ea4 <= sVar9) && (sVar6 <= DAT_00438ea6)) && (sVar6 < sVar9)) {
      iVar4 = (int)(0x10000 / (longlong)((int)sVar9 - (int)sVar6));
      iVar7 = (*(int *)(&DAT_004c5180 + iVar3) - *(int *)(&DAT_004c3380 + iVar2)) * iVar4;
      iVar4 = (*(int *)(&DAT_004c5184 + iVar3) - *(int *)(&DAT_004c3384 + iVar2)) * iVar4;
      local_28 = *(int *)(&DAT_004c3380 + iVar2) * 0x10000;
      local_24 = *(int *)(&DAT_004c3384 + iVar2) * 0x10000;
      if (DAT_00438ea6 < sVar9) {
        sVar9 = DAT_00438ea6;
      }
      if (sVar6 < DAT_00438ea4) {
        local_28 = local_28 + ((int)DAT_00438ea4 - (int)sVar6) * iVar7;
        local_24 = local_24 + ((int)DAT_00438ea4 - (int)sVar6) * iVar4;
        sVar6 = DAT_00438ea4;
      }
      iVar2 = (&DAT_004c2690)[local_30];
      _DAT_004cde74 = (uint)*local_14;
      puVar8 = (undefined2 *)((&DAT_004cde78)[(int)local_30 >> 1] + sVar6 * 2);
      iVar3 = (&DAT_004cde78)[(int)local_30 >> 1];
      for (puVar5 = (undefined1 *)(iVar2 + sVar6 * 2);
          puVar5 != (undefined1 *)(iVar2 + sVar9 * 2 + 2); puVar5 = puVar5 + 2) {
        *puVar5 = *(undefined1 *)
                   (iVar1 + (uint)*(byte *)(DAT_004c32d4 +
                                           ((local_24 >> 0x10) * 0x40 + (local_28 >> 0x10)) * 2));
        local_24 = local_24 + iVar4;
        local_28 = local_28 + iVar7;
      }
      for (; (undefined2 *)(iVar3 + sVar9 * 2 + 2) != puVar8; puVar8 = puVar8 + 1) {
        *puVar8 = DAT_004cde74;
      }
    }
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
    local_30 = local_30 + DAT_004cd1c0;
  }
  return;
}

