/* Ghidra address: 00408114; FUN_00408114 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00408114(undefined4 param_1,short *param_2,short *param_3,undefined4 *param_4,short param_5)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  short local_3c;
  short local_3a;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  short local_20;
  short local_1e;
  int local_14;
  int local_c;
  short local_8;
  short local_6;
  
  if (2 < param_5) {
    if (0x10 < param_5) {
      param_5 = 0x10;
    }
    DAT_004c32ce = param_5;
    DAT_004c32d8 = param_2;
    if (param_4 == (undefined4 *)0x0) {
      DAT_004c32dc = &DAT_004c32e0;
      DAT_004c32ec = 0;
      DAT_004c32e4 = 0;
      DAT_004c32f8 = 0;
      DAT_004c32e0 = 0;
      DAT_004c32e8 = *param_3 + -1;
      DAT_004c32f4 = param_3[1] + -1;
      DAT_004c32ce = 4;
      DAT_004c32f0 = DAT_004c32e8;
      DAT_004c32fc = DAT_004c32f4;
    }
    else {
      DAT_004c32dc = param_4;
    }
    sVar1 = *param_2;
    local_8 = 0;
    local_6 = sVar1;
    for (sVar2 = 1; sVar2 < DAT_004c32ce; sVar2 = sVar2 + 1) {
      if (*(int *)(param_2 + sVar2 * 6) < (int)sVar1) {
        sVar1 = param_2[sVar2 * 6];
        local_8 = sVar2;
      }
      if ((int)local_6 < *(int *)(param_2 + sVar2 * 6)) {
        local_6 = param_2[sVar2 * 6];
        DAT_004c32ca = sVar2;
      }
    }
    if (DAT_00438ea6 < local_6) {
      local_6 = DAT_00438ea6;
    }
    if (sVar1 < local_6) {
      DAT_004c3378 = (ushort)((*(byte *)(param_3 + 2) & 1) != 0);
      DAT_004c337a = (ushort)((*(byte *)(param_3 + 2) & 8) != 0);
      DAT_004c32d0 = *param_3;
      DAT_004c32d2 = param_3[1];
      DAT_004c32d4 = FUN_00406c68(param_3);
      if ((*(byte *)(param_3 + 2) & 0x20) == 0) {
        local_1e = 1;
        local_3a = -1;
      }
      else {
        local_1e = -1;
        local_3a = 1;
      }
      local_20 = 0;
      local_3c = 0;
      sVar2 = local_8;
      for (DAT_004c3362 = sVar1; DAT_004c3362 <= local_6; DAT_004c3362 = DAT_004c3362 + 1) {
        if ((local_20 == 0) && (DAT_004c3362 < local_6)) {
          do {
            sVar1 = local_8;
            local_8 = sVar1 + local_1e;
            if (local_8 < DAT_004c32ce) {
              if (local_8 < 0) {
                local_8 = DAT_004c32ce + -1;
              }
            }
            else {
              local_8 = 0;
            }
            local_20 = DAT_004c32d8[local_8 * 6] - DAT_004c32d8[sVar1 * 6];
          } while (local_20 == 0);
          local_24 = DAT_004c32dc[sVar1 * 2] * 0x10000;
          local_28 = DAT_004c32dc[sVar1 * 2 + 1] * 0x10000;
          local_34 = *(int *)(DAT_004c32d8 + sVar1 * 6 + 2) * 0x10000;
          local_2c = (DAT_004c32dc[local_8 * 2] * 0x10000 + DAT_004c32dc[sVar1 * 2] * -0x10000) /
                     (int)local_20;
          local_30 = (DAT_004c32dc[local_8 * 2 + 1] * 0x10000 +
                     DAT_004c32dc[sVar1 * 2 + 1] * -0x10000) / (int)local_20;
          local_38 = (*(int *)(DAT_004c32d8 + local_8 * 6 + 2) * 0x10000 +
                     *(int *)(DAT_004c32d8 + sVar1 * 6 + 2) * -0x10000) / (int)local_20;
          local_c = *(int *)(DAT_004c32d8 + sVar1 * 6 + 4);
        }
        if ((local_3c == 0) && (DAT_004c3362 < local_6)) {
          do {
            sVar1 = sVar2;
            sVar2 = sVar1 + local_3a;
            if (sVar2 < DAT_004c32ce) {
              if (sVar2 < 0) {
                sVar2 = DAT_004c32ce + -1;
              }
            }
            else {
              sVar2 = 0;
            }
            local_3c = DAT_004c32d8[sVar2 * 6] - DAT_004c32d8[sVar1 * 6];
          } while (local_3c == 0);
          local_40 = DAT_004c32dc[sVar1 * 2 + 1] * 0x10000;
          local_4c = *(int *)(DAT_004c32d8 + sVar1 * 6 + 2) * 0x10000;
          local_48 = (DAT_004c32dc[sVar2 * 2 + 1] * 0x10000 + DAT_004c32dc[sVar1 * 2 + 1] * -0x10000
                     ) / (int)local_3c;
          local_50 = (*(int *)(DAT_004c32d8 + sVar2 * 6 + 2) * 0x10000 +
                     *(int *)(DAT_004c32d8 + sVar1 * 6 + 2) * -0x10000) / (int)local_3c;
          local_14 = ((*(int *)(DAT_004c32d8 + sVar2 * 6 + 4) - local_c) * 0x10000) / (int)local_3c;
          local_c = local_c << 0x10;
        }
        if (DAT_00438ea4 <= DAT_004c3362) {
          sVar1 = (short)((uint)local_c >> 0x10);
          _DAT_004cde74 = (int)sVar1;
          sVar1 = sVar1 - (short)DAT_00438e98;
          if (sVar1 < 0) {
            sVar1 = 0;
          }
          uVar3 = (ushort)(char)((ushort)sVar1 >> 8);
          if (uVar3 < 0x20) {
            uVar4 = (uint)uVar3;
          }
          else {
            uVar4 = 0x1f;
          }
          DAT_004c2670 = *(int *)(DAT_00438ea0 + 4) + uVar4 * 0x100;
          DAT_004c3360 = (short)((uint)local_34 >> 0x10);
          DAT_004c3366 = (short)((uint)local_4c >> 0x10);
          if (((DAT_00438ea8 <= DAT_004c3366) && (DAT_004c3360 <= DAT_00438eaa)) &&
             (DAT_004c3360 < DAT_004c3366)) {
            DAT_004c3368 = local_24;
            DAT_004c336c = local_28;
            DAT_004c3374 = (local_40 - local_28) / ((int)DAT_004c3366 - (int)DAT_004c3360);
            if (DAT_00438eaa < DAT_004c3366) {
              DAT_004c3366 = DAT_00438eaa;
            }
            if (DAT_004c3360 < DAT_00438ea8) {
              DAT_004c336c = local_28 + ((int)DAT_00438ea8 - (int)DAT_004c3360) * DAT_004c3374;
              DAT_004c3360 = DAT_00438ea8;
            }
            FUN_0040b350();
          }
        }
        local_20 = local_20 + -1;
        local_3c = local_3c + -1;
        local_c = local_c + local_14;
        local_24 = local_24 + local_2c;
        local_28 = local_28 + local_30;
        local_34 = local_34 + local_38;
        local_40 = local_40 + local_48;
        local_4c = local_4c + local_50;
      }
    }
  }
  return;
}

