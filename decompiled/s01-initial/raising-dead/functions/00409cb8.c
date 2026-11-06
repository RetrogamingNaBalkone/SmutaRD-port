/* Ghidra address: 00409cb8; FUN_00409cb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00409cb8(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  int iVar12;
  int local_58;
  int local_54;
  int local_4c;
  undefined2 local_40;
  int local_3c;
  int local_38;
  ushort local_2c;
  ushort local_24;
  ushort local_20;
  ushort local_18;
  ushort local_14;
  
  local_58 = (int)DAT_004cd1be;
  for (local_54 = 0; iVar1 = DAT_004c32d4, local_54 < DAT_004cd1bc; local_54 = local_54 + 1) {
    DAT_004cd1f0 = (uint)*(ushort *)(&DAT_004ccb80 + local_54 * 2);
    iVar9 = local_54 * 10;
    iVar4 = local_54 * 10;
    iVar12 = (int)*(short *)(&DAT_004c337e + iVar4);
    local_4c = (int)*(short *)(&DAT_004c517e + iVar9);
    if (((DAT_00438ea4 <= local_4c) && (iVar12 <= DAT_00438ea6)) && (iVar12 < local_4c)) {
      iVar5 = (int)(0x10000 / (longlong)(local_4c - iVar12));
      iVar8 = (*(int *)(&DAT_004c5180 + iVar9) - *(int *)(&DAT_004c3380 + iVar4)) * iVar5;
      iVar5 = (*(int *)(&DAT_004c5184 + iVar9) - *(int *)(&DAT_004c3384 + iVar4)) * iVar5;
      local_3c = *(int *)(&DAT_004c3380 + iVar4) * 0x10000;
      local_38 = *(int *)(&DAT_004c3384 + iVar4) * 0x10000;
      if (DAT_00438ea6 < local_4c) {
        local_4c = (int)DAT_00438ea6;
      }
      if (iVar12 < DAT_00438ea4) {
        local_3c = local_3c + (DAT_00438ea4 - iVar12) * iVar8;
        iVar9 = DAT_00438ea4 - iVar12;
        iVar12 = (int)DAT_00438ea4;
        local_38 = local_38 + iVar9 * iVar5;
      }
      puVar10 = (ushort *)((&DAT_004c2690)[local_58] + iVar12 * 2);
      puVar6 = (ushort *)((&DAT_004c2690)[local_58] + local_4c * 2);
      if (DAT_004cd1f0 == 0) {
        for (; puVar6 != puVar10; puVar10 = puVar10 + 1) {
          *puVar10 = 0;
        }
      }
      else if (DAT_004c32d0 == 0x100) {
        if (DAT_004cd1f0 == 0x20) {
          iVar9 = (local_4c - iVar12) + 1;
          local_38._0_2_ = (undefined2)((uint)local_38 >> 8);
          uVar11 = CONCAT22((short)((uint)local_3c >> 8),(undefined2)local_38);
          local_40 = (undefined2)((uint)iVar5 >> 8);
          while (iVar9 = iVar9 + -1, -1 < iVar9) {
            uVar2 = uVar11 >> 8;
            uVar3 = uVar11 >> 0x17;
            uVar11 = uVar11 + CONCAT22((short)((uint)iVar8 >> 8),local_40);
            *puVar10 = *(ushort *)(((uVar2 << 9 | uVar3) & 0x1fffe) + iVar1);
            puVar10 = puVar10 + 1;
          }
        }
        else if (DAT_00439f58 == 2) {
          for (; puVar6 != puVar10; puVar10 = puVar10 + 1) {
            uVar11 = (uint)*(ushort *)
                            (DAT_004c32d4 + ((local_38 >> 0x10) * 0x100 + (local_3c >> 0x10)) * 2);
            local_2c = (ushort)((uVar11 & 0x7e0) * DAT_004cd1f0 >> 5) & 0x7e0;
            *puVar10 = (ushort)((uVar11 & 0xfffff81f) * DAT_004cd1f0 >> 5) & 0xf81f | local_2c;
            local_38 = local_38 + iVar5;
            local_3c = local_3c + iVar8;
          }
        }
        else {
          for (; puVar6 != puVar10; puVar10 = puVar10 + 1) {
            uVar11 = (uint)*(ushort *)
                            (DAT_004c32d4 + ((local_38 >> 0x10) * 0x100 + (local_3c >> 0x10)) * 2);
            *puVar10 = (ushort)((uVar11 & 0xfffffc1f) * DAT_004cd1f0 >> 5) & 0xfc1f |
                       (ushort)((uVar11 & 0x3e0) * DAT_004cd1f0 >> 5) & 0x3e0;
            local_38 = local_38 + iVar5;
            local_3c = local_3c + iVar8;
          }
        }
      }
      else if (DAT_004c32d0 == 0x80) {
        if (DAT_004cd1f0 == 0x20) {
          iVar9 = (local_4c - iVar12) + 1;
          local_38._0_2_ = (undefined2)(local_38 >> 7);
          uVar11 = CONCAT22((short)(local_3c >> 7),(undefined2)local_38);
          local_40 = (undefined2)(iVar5 >> 7);
          while (iVar9 = iVar9 + -1, -1 < iVar9) {
            uVar2 = uVar11 >> 9;
            uVar3 = uVar11 >> 0x18;
            uVar11 = uVar11 + CONCAT22((short)(iVar8 >> 7),local_40);
            *puVar10 = *(ushort *)(((uVar2 << 8 | uVar3) & 0x7ffe) + iVar1);
            puVar10 = puVar10 + 1;
          }
        }
        else if (DAT_00439f58 == 2) {
          for (; puVar6 != puVar10; puVar10 = puVar10 + 1) {
            uVar11 = (uint)*(ushort *)
                            (DAT_004c32d4 + ((local_38 >> 0x10) * 0x80 + (local_3c >> 0x10)) * 2);
            local_24 = (ushort)((uVar11 & 0xfffff81f) * DAT_004cd1f0 >> 5) & 0xf81f;
            local_20 = (ushort)((uVar11 & 0x7e0) * DAT_004cd1f0 >> 5) & 0x7e0;
            *puVar10 = local_24 | local_20;
            local_38 = local_38 + iVar5;
            local_3c = local_3c + iVar8;
          }
        }
        else {
          for (; puVar6 != puVar10; puVar10 = puVar10 + 1) {
            uVar11 = (uint)*(ushort *)
                            (DAT_004c32d4 + ((local_38 >> 0x10) * 0x80 + (local_3c >> 0x10)) * 2);
            *puVar10 = (ushort)((uVar11 & 0xfffffc1f) * DAT_004cd1f0 >> 5) & 0xfc1f |
                       (ushort)((uVar11 & 0x3e0) * DAT_004cd1f0 >> 5) & 0x3e0;
            local_38 = local_38 + iVar5;
            local_3c = local_3c + iVar8;
          }
        }
      }
      else if (DAT_004c32d0 == 0x40) {
        if (DAT_004cd1f0 == 0x20) {
          iVar9 = (local_4c - iVar12) + 1;
          local_38._0_2_ = (undefined2)(local_38 >> 6);
          uVar11 = CONCAT22((short)(local_3c >> 6),(undefined2)local_38);
          local_40 = (undefined2)(iVar5 >> 6);
          while (iVar9 = iVar9 + -1, -1 < iVar9) {
            uVar2 = uVar11 >> 10;
            uVar3 = uVar11 >> 0x19;
            uVar11 = uVar11 + CONCAT22((short)(iVar8 >> 6),local_40);
            *puVar10 = *(ushort *)(((uVar2 << 7 | uVar3) & 0x1ffe) + iVar1);
            puVar10 = puVar10 + 1;
          }
        }
        else if (DAT_00439f58 == 2) {
          for (; puVar6 != puVar10; puVar10 = puVar10 + 1) {
            uVar11 = (uint)*(ushort *)
                            (DAT_004c32d4 + ((local_38 >> 0x10) * 0x40 + (local_3c >> 0x10)) * 2);
            local_18 = (ushort)((uVar11 & 0xfffff81f) * DAT_004cd1f0 >> 5) & 0xf81f;
            local_14 = (ushort)((uVar11 & 0x7e0) * DAT_004cd1f0 >> 5) & 0x7e0;
            *puVar10 = local_18 | local_14;
            local_38 = local_38 + iVar5;
            local_3c = local_3c + iVar8;
          }
        }
        else {
          for (; puVar6 != puVar10; puVar10 = puVar10 + 1) {
            uVar11 = (uint)*(ushort *)
                            (DAT_004c32d4 + ((local_38 >> 0x10) * 0x40 + (local_3c >> 0x10)) * 2);
            *puVar10 = (ushort)((uVar11 & 0xfffffc1f) * DAT_004cd1f0 >> 5) & 0xfc1f |
                       (ushort)((uVar11 & 0x3e0) * DAT_004cd1f0 >> 5) & 0x3e0;
            local_38 = local_38 + iVar5;
            local_3c = local_3c + iVar8;
          }
        }
      }
      _DAT_004cde74 = (uint)(ushort)(&DAT_004cd1f4)[local_54];
      iVar1 = (&DAT_004cde78)[local_58 >> 1];
      for (puVar7 = (undefined2 *)((&DAT_004cde78)[local_58 >> 1] + iVar12 * 2);
          (undefined2 *)(iVar1 + local_4c * 2 + 2) != puVar7; puVar7 = puVar7 + 1) {
        *puVar7 = DAT_004cde74;
      }
    }
    local_58 = local_58 + DAT_004cd1c0;
  }
  return;
}

