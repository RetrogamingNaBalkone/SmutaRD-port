/* Ghidra address: 0040869c; FUN_0040869c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_0040869c(undefined4 param_1,short *param_2,short *param_3,undefined4 *param_4,short param_5)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int local_54;
  int local_50;
  int local_4c;
  int local_44;
  short local_40;
  short local_3e;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  short local_24;
  short local_22;
  int local_1c;
  int local_18;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if (2 < param_5) {
    if (0x10 < param_5) {
      param_5 = 0x10;
    }
    DAT_004c32ce = param_5;
    DAT_004c32d8 = param_2;
    local_a = *param_2;
    sVar3 = *param_2;
    local_c = 0;
    local_8 = local_a;
    local_6 = local_a;
    for (sVar1 = 1; sVar1 < param_5; sVar1 = sVar1 + 1) {
      iVar4 = (int)sVar1;
      if (*(int *)(param_2 + iVar4 * 6) < (int)local_6) {
        local_6 = param_2[iVar4 * 6];
        local_c = sVar1;
      }
      if ((int)local_8 < *(int *)(param_2 + sVar1 * 6)) {
        local_8 = param_2[iVar4 * 6];
        DAT_004c32ca = sVar1;
      }
      if (*(int *)(param_2 + iVar4 * 6 + 2) < (int)sVar3) {
        sVar3 = param_2[iVar4 * 6 + 2];
      }
      if ((int)local_a < *(int *)(param_2 + sVar1 * 6 + 2)) {
        local_a = param_2[iVar4 * 6 + 2];
      }
    }
    if ((((DAT_00438ea4 <= local_8) && (local_6 <= DAT_00438ea6)) && (DAT_00438ea8 <= local_a)) &&
       (sVar3 <= DAT_00438eaa)) {
      if (DAT_00438ea6 < local_8) {
        local_8 = DAT_00438ea6;
      }
      if (local_6 < local_8) {
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
        uVar2 = DAT_00438e9c * 0x20 + DAT_00438e98;
        DAT_004c3378 = (ushort)((*(byte *)(param_3 + 2) & 1) != 0);
        DAT_004c337a = (ushort)((*(byte *)(param_3 + 2) & 8) != 0);
        DAT_004c32d0 = *param_3;
        DAT_004c32d2 = param_3[1];
        DAT_004c32d4 = FUN_00406c68(param_3);
        if ((*(byte *)(param_3 + 2) & 0x20) == 0) {
          local_22 = 1;
          local_3e = -1;
        }
        else {
          local_22 = -1;
          local_3e = 1;
        }
        local_24 = 0;
        local_40 = 0;
        sVar3 = local_c;
        for (DAT_004c3362 = local_6; DAT_004c3362 <= local_8; DAT_004c3362 = DAT_004c3362 + 1) {
          if ((local_24 == 0) && (DAT_004c3362 < local_8)) {
            do {
              sVar1 = local_c;
              local_c = sVar1 + local_22;
              if (local_c < DAT_004c32ce) {
                if (local_c < 0) {
                  local_c = DAT_004c32ce + -1;
                }
              }
              else {
                local_c = 0;
              }
              local_24 = DAT_004c32d8[local_c * 6] - DAT_004c32d8[sVar1 * 6];
            } while (local_24 == 0);
            local_28 = DAT_004c32dc[sVar1 * 2] * 0x10000;
            local_2c = DAT_004c32dc[sVar1 * 2 + 1] * 0x10000;
            local_38 = *(int *)(DAT_004c32d8 + sVar1 * 6 + 2) * 0x10000;
            local_30 = (DAT_004c32dc[local_c * 2] * 0x10000 + DAT_004c32dc[sVar1 * 2] * -0x10000) /
                       (int)local_24;
            local_34 = (DAT_004c32dc[local_c * 2 + 1] * 0x10000 +
                       DAT_004c32dc[sVar1 * 2 + 1] * -0x10000) / (int)local_24;
            local_3c = (*(int *)(DAT_004c32d8 + local_c * 6 + 2) * 0x10000 +
                       *(int *)(DAT_004c32d8 + sVar1 * 6 + 2) * -0x10000) / (int)local_24;
            local_18 = *(int *)(DAT_004c32d8 + sVar1 * 6 + 4);
          }
          if ((local_40 == 0) && (DAT_004c3362 < local_8)) {
            do {
              sVar1 = sVar3;
              sVar3 = sVar1 + local_3e;
              if (sVar3 < DAT_004c32ce) {
                if (sVar3 < 0) {
                  sVar3 = DAT_004c32ce + -1;
                }
              }
              else {
                sVar3 = 0;
              }
              local_40 = DAT_004c32d8[sVar3 * 6] - DAT_004c32d8[sVar1 * 6];
            } while (local_40 == 0);
            local_44 = DAT_004c32dc[sVar1 * 2 + 1] * 0x10000;
            local_50 = *(int *)(DAT_004c32d8 + sVar1 * 6 + 2) * 0x10000;
            local_4c = (DAT_004c32dc[sVar3 * 2 + 1] * 0x10000 +
                       DAT_004c32dc[sVar1 * 2 + 1] * -0x10000) / (int)local_40;
            local_54 = (*(int *)(DAT_004c32d8 + sVar3 * 6 + 2) * 0x10000 +
                       *(int *)(DAT_004c32d8 + sVar1 * 6 + 2) * -0x10000) / (int)local_40;
            local_1c = ((*(int *)(DAT_004c32d8 + sVar3 * 6 + 4) - local_18) * 0x10000) /
                       (int)local_40;
            local_18 = local_18 << 0x10;
          }
          if (DAT_00438ea4 <= DAT_004c3362) {
            _DAT_004cde74 = local_18 >> 0x10;
            if (DAT_00438e98 < _DAT_004cde74) {
              if (_DAT_004cde74 < uVar2) {
                DAT_004cd1f0 = 0x1f - (_DAT_004cde74 - DAT_00438e98) / DAT_00438e9c;
              }
              else {
                DAT_004cd1f0 = 0;
              }
            }
            else {
              DAT_004cd1f0 = 0x20;
            }
            DAT_004c3360 = (short)((uint)local_38 >> 0x10) + -1;
            DAT_004c3366 = (short)((uint)local_50 >> 0x10) + 1;
            if (((DAT_00438ea8 <= DAT_004c3366) && (DAT_004c3360 <= DAT_00438eaa)) &&
               (DAT_004c3360 < DAT_004c3366)) {
              DAT_004c336c = local_2c;
              DAT_004c3374 = (local_44 - local_2c) / ((int)DAT_004c3366 - (int)DAT_004c3360);
              if (DAT_00438eaa < DAT_004c3366) {
                DAT_004c3366 = DAT_00438eaa;
              }
              if (DAT_004c3360 < DAT_00438ea8) {
                DAT_004c336c = local_2c + ((int)DAT_00438ea8 - (int)DAT_004c3360) * DAT_004c3374;
                DAT_004c3360 = DAT_00438ea8;
              }
              DAT_004c3368 = local_28 + 0x8000;
              DAT_004c336c = DAT_004c336c + 0x8000;
              if (DAT_00439f58 == 0) {
                FUN_00409a24();
              }
              else {
                FUN_0040a3a4();
              }
            }
          }
          local_24 = local_24 + -1;
          local_40 = local_40 + -1;
          local_18 = local_18 + local_1c;
          local_28 = local_28 + local_30;
          local_2c = local_2c + local_34;
          local_38 = local_38 + local_3c;
          local_44 = local_44 + local_4c;
          local_50 = local_50 + local_54;
        }
      }
    }
  }
  return;
}

