/* Ghidra address: 0040a3a4; FUN_0040a3a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_0040a3a4(void)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ushort *local_bc;
  short local_b4;
  short local_b0;
  short local_a4;
  ushort local_78;
  ushort local_74;
  ushort local_70;
  ushort local_6c;
  ushort local_58;
  ushort local_54;
  ushort local_3c;
  ushort local_38;
  ushort local_20;
  ushort local_1c;
  ushort local_14;
  ushort local_10;
  
  iVar6 = DAT_004c3374;
  iVar12 = DAT_00438f14;
  if ((DAT_004cd1f0 != 0) || ((DAT_004c337a == 0 && (DAT_004c3378 == 0)))) {
    iVar13 = DAT_004c3368 >> 0x10;
    iVar14 = iVar13 * 2 + DAT_004c32d4;
    puVar8 = (ushort *)((&DAT_004c2690)[DAT_004c3360] + DAT_004c3362 * 2);
    puVar4 = (ushort *)((&DAT_004c2690)[DAT_004c3366] + DAT_004c3362 * 2);
    local_bc = (ushort *)((&DAT_004cde78)[(int)DAT_004c3360 >> 1] + DAT_004c3362 * 2);
    iVar7 = (&DAT_004cde78)[(int)DAT_004c3366 >> 1];
    iVar9 = (int)DAT_004c3362;
    bVar3 = false;
    if (DAT_004c3378 == 0) {
      if (DAT_004c337a == 0) {
        if (DAT_004cd1f0 == 0) {
          for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
            *puVar8 = 0;
          }
        }
        else if ((DAT_004c32d0 == 0x100) && (DAT_004c32d2 == 0x100)) {
          if (DAT_004cd1f0 == 0x20) {
            iVar13 = iVar13 * 0x200 + DAT_004c32d4;
            iVar14 = (int)DAT_004c3366 - (int)DAT_004c3360;
            uVar10 = DAT_004c336c;
            while (iVar14 = iVar14 + -1, -1 < iVar14) {
              uVar11 = uVar10 >> 0xf;
              uVar10 = uVar10 + iVar6;
              *puVar8 = *(ushort *)((uVar11 & 0x1fe) + iVar13);
              puVar8 = puVar8 + iVar12;
            }
          }
          else if (DAT_00439f58 == 2) {
            iVar12 = iVar13 * 0x200 + DAT_004c32d4;
            for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
              uVar10 = (uint)*(ushort *)(iVar12 + ((int)(DAT_004c336c & 0xff0000) >> 0x10) * 2);
              local_58 = (ushort)((uVar10 & 0xfffff81f) * DAT_004cd1f0 >> 5) & 0xf81f;
              local_54 = (ushort)((uVar10 & 0x7e0) * DAT_004cd1f0 >> 5) & 0x7e0;
              *puVar8 = local_58 | local_54;
              DAT_004c336c = DAT_004c336c + DAT_004c3374;
            }
          }
          else {
            iVar12 = iVar13 * 0x200 + DAT_004c32d4;
            for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
              uVar10 = (uint)*(ushort *)(iVar12 + ((int)(DAT_004c336c & 0xff0000) >> 0x10) * 2);
              *puVar8 = (ushort)((uVar10 & 0xfffffc1f) * DAT_004cd1f0 >> 5) & 0xfc1f |
                        (ushort)((uVar10 & 0x3e0) * DAT_004cd1f0 >> 5) & 0x3e0;
              DAT_004c336c = DAT_004c336c + DAT_004c3374;
            }
          }
        }
        else if ((DAT_004c32d0 == 0x80) && (DAT_004c32d2 == 0x80)) {
          if (DAT_004cd1f0 == 0x20) {
            iVar13 = iVar13 * 0x100 + DAT_004c32d4;
            iVar14 = (int)DAT_004c3366 - (int)DAT_004c3360;
            uVar10 = DAT_004c336c;
            while (iVar14 = iVar14 + -1, -1 < iVar14) {
              uVar11 = uVar10 >> 0xf;
              uVar10 = uVar10 + iVar6;
              *puVar8 = *(ushort *)((uVar11 & 0xfe) + iVar13);
              puVar8 = puVar8 + iVar12;
            }
          }
          else if (DAT_00439f58 == 2) {
            iVar12 = iVar13 * 0x100 + DAT_004c32d4;
            for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
              uVar10 = (uint)*(ushort *)(iVar12 + ((int)(DAT_004c336c & 0x7f0000) >> 0x10) * 2);
              local_3c = (ushort)((uVar10 & 0xfffff81f) * DAT_004cd1f0 >> 5) & 0xf81f;
              local_38 = (ushort)((uVar10 & 0x7e0) * DAT_004cd1f0 >> 5) & 0x7e0;
              *puVar8 = local_3c | local_38;
              DAT_004c336c = DAT_004c336c + DAT_004c3374;
            }
          }
          else {
            iVar12 = iVar13 * 0x100 + DAT_004c32d4;
            for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
              uVar10 = (uint)*(ushort *)(iVar12 + ((int)(DAT_004c336c & 0x7f0000) >> 0x10) * 2);
              *puVar8 = (ushort)((uVar10 & 0xfffffc1f) * DAT_004cd1f0 >> 5) & 0xfc1f |
                        (ushort)((uVar10 & 0x3e0) * DAT_004cd1f0 >> 5) & 0x3e0;
              DAT_004c336c = DAT_004c336c + DAT_004c3374;
            }
          }
        }
        else if ((DAT_004c32d0 == 0x40) && (DAT_004c32d2 == 0x40)) {
          if (DAT_004cd1f0 == 0x20) {
            iVar13 = iVar13 * 0x80 + DAT_004c32d4;
            iVar14 = (int)DAT_004c3366 - (int)DAT_004c3360;
            uVar10 = DAT_004c336c;
            while (iVar14 = iVar14 + -1, -1 < iVar14) {
              uVar11 = uVar10 >> 0xf;
              uVar10 = uVar10 + iVar6;
              *puVar8 = *(ushort *)((uVar11 & 0x7e) + iVar13);
              puVar8 = puVar8 + iVar12;
            }
          }
          else if (DAT_00439f58 == 2) {
            iVar12 = iVar13 * 0x80 + DAT_004c32d4;
            for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
              uVar10 = (uint)*(ushort *)(iVar12 + ((int)(DAT_004c336c & 0x3f0000) >> 0x10) * 2);
              local_20 = (ushort)((uVar10 & 0xfffff81f) * DAT_004cd1f0 >> 5) & 0xf81f;
              local_1c = (ushort)((uVar10 & 0x7e0) * DAT_004cd1f0 >> 5) & 0x7e0;
              *puVar8 = local_20 | local_1c;
              DAT_004c336c = DAT_004c336c + DAT_004c3374;
            }
          }
          else {
            iVar12 = iVar13 * 0x80 + DAT_004c32d4;
            for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
              uVar10 = (uint)*(ushort *)(iVar12 + ((int)(DAT_004c336c & 0x3f0000) >> 0x10) * 2);
              *puVar8 = (ushort)((uVar10 & 0xfffffc1f) * DAT_004cd1f0 >> 5) & 0xfc1f |
                        (ushort)((uVar10 & 0x3e0) * DAT_004cd1f0 >> 5) & 0x3e0;
              DAT_004c336c = DAT_004c336c + DAT_004c3374;
            }
          }
        }
        else if (DAT_004cd1f0 == 0x20) {
          for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
            *puVar8 = *(ushort *)(iVar14 + ((int)DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
            DAT_004c336c = DAT_004c336c + DAT_004c3374;
          }
        }
        else if (DAT_00439f58 == 2) {
          for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
            uVar10 = (uint)*(ushort *)(iVar14 + ((int)DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2)
            ;
            local_14 = (ushort)((uVar10 & 0xfffff81f) * DAT_004cd1f0 >> 5) & 0xf81f;
            local_10 = (ushort)((uVar10 & 0x7e0) * DAT_004cd1f0 >> 5) & 0x7e0;
            *puVar8 = local_14 | local_10;
            DAT_004c336c = DAT_004c336c + DAT_004c3374;
          }
        }
        else {
          for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
            uVar10 = (uint)*(ushort *)(iVar14 + ((int)DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2)
            ;
            *puVar8 = (ushort)((uVar10 & 0xfffffc1f) * DAT_004cd1f0 >> 5) & 0xfc1f |
                      (ushort)((uVar10 & 0x3e0) * DAT_004cd1f0 >> 5) & 0x3e0;
            DAT_004c336c = DAT_004c336c + DAT_004c3374;
          }
        }
        iVar12 = DAT_00438f20;
        uVar1 = DAT_004cde74;
        for (; local_bc != (ushort *)(iVar7 + iVar9 * 2);
            local_bc = (ushort *)((int)local_bc + iVar12)) {
          *local_bc = uVar1;
        }
      }
      else if (DAT_004cd1f0 == 0x20) {
        puVar5 = (ushort *)
                 (((int)DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2 + DAT_004c32d4 + iVar13 * 2);
        iVar6 = (DAT_004c3374 >> 0x10) * (int)DAT_004c32d0;
        uVar10 = DAT_004c3374 * 0x10000;
        uVar11 = DAT_004c336c << 0x10;
        iVar7 = (int)DAT_004c32d0;
        uVar1 = DAT_004cde74;
        for (; puVar8 != puVar4; puVar8 = puVar8 + iVar12) {
          uVar2 = *puVar5;
          if ((uVar2 != 0) && ((short)uVar1 <= (short)*local_bc)) {
            *local_bc = uVar1;
            *puVar8 = uVar2;
          }
          puVar5 = puVar5 + iVar6;
          uVar15 = uVar11 + uVar10;
          if (CARRY4(uVar11,uVar10)) {
            puVar5 = puVar5 + iVar7;
          }
          puVar8 = puVar8 + iVar12;
          if (puVar8 == puVar4) {
            return;
          }
          uVar2 = *puVar5;
          if ((uVar2 != 0) && ((short)uVar1 <= (short)*local_bc)) {
            *local_bc = uVar1;
            *puVar8 = uVar2;
          }
          puVar5 = puVar5 + iVar6;
          uVar11 = uVar15 + uVar10;
          if (CARRY4(uVar15,uVar10)) {
            puVar5 = puVar5 + iVar7;
          }
          local_bc = (ushort *)((int)local_bc + DAT_00438f20);
        }
      }
      else if (DAT_00439f58 == 1) {
        for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
          uVar10 = (uint)*(ushort *)(iVar14 + ((int)DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
          if ((uVar10 != 0) && (_DAT_004cde74 <= *local_bc)) {
            *local_bc = DAT_004cde74;
            local_78 = (ushort)((uVar10 & 0xfffffc1f) * DAT_004cd1f0 >> 5) & 0xfc1f;
            local_74 = (ushort)((uVar10 & 0x3e0) * DAT_004cd1f0 >> 5) & 0x3e0;
            *puVar8 = local_78 | local_74;
          }
          if (bVar3) {
            local_bc = local_bc + DAT_00438f18;
          }
          bVar3 = !bVar3;
          DAT_004c336c = DAT_004c336c + DAT_004c3374;
        }
      }
      else {
        for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
          uVar10 = (uint)*(ushort *)(iVar14 + ((int)DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
          if ((uVar10 != 0) && (_DAT_004cde74 <= *local_bc)) {
            *local_bc = DAT_004cde74;
            local_70 = (ushort)((uVar10 & 0xfffff81f) * DAT_004cd1f0 >> 5) & 0xf81f;
            local_6c = (ushort)((uVar10 & 0x7e0) * DAT_004cd1f0 >> 5) & 0x7e0;
            *puVar8 = local_70 | local_6c;
          }
          if (bVar3) {
            local_bc = local_bc + DAT_00438f18;
          }
          bVar3 = !bVar3;
          DAT_004c336c = DAT_004c336c + DAT_004c3374;
        }
      }
    }
    else if (DAT_00439f58 == 1) {
      if (DAT_004cd1f0 == 0x20) {
        for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
          uVar1 = *(ushort *)(iVar14 + ((int)DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
          if ((uVar1 != 0) && (_DAT_004cde74 <= *local_bc)) {
            *local_bc = DAT_004cde74;
            uVar10 = uVar1 >> 1 & 0x3def;
            local_b4 = (short)uVar10;
            *puVar8 = ((ushort)(((int)(uint)*puVar8 >> 1 & 0x3defU) + uVar10 >> 1) & 0x3def) +
                      local_b4;
          }
          if (bVar3) {
            local_bc = local_bc + DAT_00438f18;
          }
          bVar3 = !bVar3;
          DAT_004c336c = DAT_004c336c + DAT_004c3374;
        }
      }
      else {
        for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
          uVar10 = (uint)*(ushort *)(iVar14 + ((int)DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
          if ((uVar10 != 0) && (_DAT_004cde74 <= *local_bc)) {
            *local_bc = DAT_004cde74;
            uVar10 = ((uVar10 & 0xfffffc1f) * DAT_004cd1f0 >> 5 & 0xfffffc1f |
                     (uVar10 & 0x3e0) * DAT_004cd1f0 >> 5 & 0x3e0) >> 1 & 0x3def;
            local_b0 = (short)uVar10;
            *puVar8 = ((ushort)(((int)(uint)*puVar8 >> 1 & 0x3defU) + uVar10 >> 1) & 0x3def) +
                      local_b0;
          }
          if (bVar3) {
            local_bc = local_bc + DAT_00438f18;
          }
          bVar3 = !bVar3;
          DAT_004c336c = DAT_004c336c + DAT_004c3374;
        }
      }
    }
    else if (DAT_004cd1f0 == 0x20) {
      for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
        uVar1 = *(ushort *)(iVar14 + ((int)DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
        if ((uVar1 != 0) && (_DAT_004cde74 <= *local_bc)) {
          *local_bc = DAT_004cde74;
          uVar10 = uVar1 >> 1 & 0x7bef;
          local_a4 = (short)uVar10;
          *puVar8 = ((ushort)(((int)(uint)*puVar8 >> 1 & 0x7befU) + uVar10 >> 1) & 0x7bef) +
                    local_a4;
        }
        if (bVar3) {
          local_bc = local_bc + DAT_00438f18;
        }
        bVar3 = !bVar3;
        DAT_004c336c = DAT_004c336c + DAT_004c3374;
      }
    }
    else {
      for (; puVar8 != puVar4; puVar8 = puVar8 + DAT_00438f14) {
        uVar10 = (uint)*(ushort *)(iVar14 + ((int)DAT_004c336c >> 0x10) * (int)DAT_004c32d0 * 2);
        if ((uVar10 != 0) && (_DAT_004cde74 <= *local_bc)) {
          *local_bc = DAT_004cde74;
          uVar10 = ((uVar10 & 0xfffff81f) * DAT_004cd1f0 >> 5 & 0xfffff81f |
                   (uVar10 & 0x7e0) * DAT_004cd1f0 >> 5 & 0x7e0) >> 1 & 0x7bef;
          *puVar8 = ((ushort)(((int)(uint)*puVar8 >> 1 & 0x7befU) + uVar10 >> 1) & 0x7bef) +
                    (short)uVar10;
        }
        if (bVar3) {
          local_bc = local_bc + DAT_00438f18;
        }
        bVar3 = !bVar3;
        DAT_004c336c = DAT_004c336c + DAT_004c3374;
      }
    }
  }
  return;
}

