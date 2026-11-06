/* Ghidra address: 004026e4; FUN_004026e4 */

void FUN_004026e4(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  short *in_stack_00000008;
  short *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  short in_stack_00000014;
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
  int local_18;
  int local_10;
  short local_a;
  short local_8;
  short local_6;
  
  if (2 < in_stack_00000014) {
    if (0x10 < in_stack_00000014) {
      in_stack_00000014 = 0x10;
    }
    DAT_00439cf8 = in_stack_00000014;
    DAT_00439d04 = in_stack_00000008;
    sVar2 = *in_stack_00000008;
    sVar3 = *in_stack_00000008;
    local_a = 0;
    local_8 = sVar2;
    local_6 = sVar2;
    for (sVar1 = 1; sVar1 < in_stack_00000014; sVar1 = sVar1 + 1) {
      iVar4 = (int)sVar1;
      if (*(int *)(in_stack_00000008 + iVar4 * 6) < (int)local_6) {
        local_6 = in_stack_00000008[iVar4 * 6];
        local_a = sVar1;
      }
      if ((int)local_8 < *(int *)(in_stack_00000008 + sVar1 * 6)) {
        local_8 = in_stack_00000008[iVar4 * 6];
        DAT_00439cf4 = sVar1;
      }
      if (*(int *)(in_stack_00000008 + iVar4 * 6 + 2) < (int)sVar3) {
        sVar3 = in_stack_00000008[iVar4 * 6 + 2];
      }
      if ((int)sVar2 < *(int *)(in_stack_00000008 + sVar1 * 6 + 2)) {
        sVar2 = in_stack_00000008[iVar4 * 6 + 2];
      }
    }
    if ((((DAT_00434098 <= local_8) && (local_6 <= DAT_0043409a)) && (DAT_0043409c <= sVar2)) &&
       (sVar3 <= DAT_0043409e)) {
      if (DAT_0043409a < local_8) {
        local_8 = DAT_0043409a;
      }
      if (local_6 < local_8) {
        if (in_stack_00000010 == (undefined4 *)0x0) {
          DAT_00439d08 = &DAT_00439d0c;
          DAT_00439d18 = 0;
          DAT_00439d10 = 0;
          DAT_00439d24 = 0;
          DAT_00439d0c = 0;
          DAT_00439d14 = *in_stack_0000000c + -1;
          DAT_00439d20 = in_stack_0000000c[1] + -1;
          DAT_00439cf8 = 4;
          DAT_00439d1c = DAT_00439d14;
          DAT_00439d28 = DAT_00439d20;
        }
        else {
          DAT_00439d08 = in_stack_00000010;
        }
        DAT_00439da4 = (ushort)((*(byte *)(in_stack_0000000c + 2) & 1) != 0);
        DAT_00439da6 = (ushort)((*(byte *)(in_stack_0000000c + 2) & 8) != 0);
        DAT_00439cfa = *in_stack_0000000c;
        DAT_00439cfc = in_stack_0000000c[1];
        DAT_00439d00 = FUN_00409f70();
        if ((*(byte *)(in_stack_0000000c + 2) & 0x20) == 0) {
          local_22 = 1;
          local_3e = -1;
        }
        else {
          local_22 = -1;
          local_3e = 1;
        }
        local_24 = 0;
        local_40 = 0;
        sVar2 = local_a;
        for (DAT_00439d8e = local_6; DAT_00439d8e <= local_8; DAT_00439d8e = DAT_00439d8e + 1) {
          if ((local_24 == 0) && (DAT_00439d8e < local_8)) {
            do {
              sVar3 = local_a;
              local_a = sVar3 + local_22;
              if (local_a < DAT_00439cf8) {
                if (local_a < 0) {
                  local_a = DAT_00439cf8 + -1;
                }
              }
              else {
                local_a = 0;
              }
              local_24 = DAT_00439d04[local_a * 6] - DAT_00439d04[sVar3 * 6];
            } while (local_24 == 0);
            local_28 = DAT_00439d08[sVar3 * 2] * 0x10000;
            local_2c = DAT_00439d08[sVar3 * 2 + 1] * 0x10000;
            local_38 = *(int *)(DAT_00439d04 + sVar3 * 6 + 2) * 0x10000;
            local_30 = (DAT_00439d08[local_a * 2] * 0x10000 + DAT_00439d08[sVar3 * 2] * -0x10000) /
                       (int)local_24;
            local_34 = (DAT_00439d08[local_a * 2 + 1] * 0x10000 +
                       DAT_00439d08[sVar3 * 2 + 1] * -0x10000) / (int)local_24;
            local_3c = (*(int *)(DAT_00439d04 + local_a * 6 + 2) * 0x10000 +
                       *(int *)(DAT_00439d04 + sVar3 * 6 + 2) * -0x10000) / (int)local_24;
            local_10 = *(int *)(DAT_00439d04 + sVar3 * 6 + 4);
          }
          if ((local_40 == 0) && (DAT_00439d8e < local_8)) {
            do {
              sVar3 = sVar2;
              sVar2 = sVar3 + local_3e;
              if (sVar2 < DAT_00439cf8) {
                if (sVar2 < 0) {
                  sVar2 = DAT_00439cf8 + -1;
                }
              }
              else {
                sVar2 = 0;
              }
              local_40 = DAT_00439d04[sVar2 * 6] - DAT_00439d04[sVar3 * 6];
            } while (local_40 == 0);
            local_44 = DAT_00439d08[sVar3 * 2 + 1] * 0x10000;
            local_50 = *(int *)(DAT_00439d04 + sVar3 * 6 + 2) * 0x10000;
            local_4c = (DAT_00439d08[sVar2 * 2 + 1] * 0x10000 +
                       DAT_00439d08[sVar3 * 2 + 1] * -0x10000) / (int)local_40;
            local_54 = (*(int *)(DAT_00439d04 + sVar2 * 6 + 2) * 0x10000 +
                       *(int *)(DAT_00439d04 + sVar3 * 6 + 2) * -0x10000) / (int)local_40;
            local_18 = ((*(int *)(DAT_00439d04 + sVar2 * 6 + 4) - local_10) * 0x10000) /
                       (int)local_40;
            local_10 = local_10 << 0x10;
          }
          if (DAT_00434098 <= DAT_00439d8e) {
            sVar3 = (short)((uint)local_10 >> 0x10);
            DAT_004449b4 = (int)sVar3;
            sVar3 = sVar3 - (short)DAT_0043408c;
            if (sVar3 < 0) {
              sVar3 = 0;
            }
            if (DAT_00435924 == 0) {
              if ((ushort)((int)sVar3 / DAT_00434090) < 0x20) {
                uVar5 = (int)sVar3 / DAT_00434090 & 0xffff;
              }
              else {
                uVar5 = 0x1f;
              }
              DAT_004390d0 = *(int *)(DAT_00434094 + 4) + uVar5 * 0x100;
            }
            else {
              if ((ushort)((int)sVar3 / DAT_00434090) < 0x20) {
                uVar5 = (int)sVar3 / DAT_00434090 & 0xffff;
              }
              else {
                uVar5 = 0x1f;
              }
              DAT_004390d0 = uVar5 * 0x200 + DAT_00434094 + 8;
            }
            DAT_00439d8c = (short)((uint)local_38 >> 0x10) + -1;
            DAT_00439d92 = (short)((uint)local_50 >> 0x10) + 1;
            if (((DAT_0043409c <= DAT_00439d92) && (DAT_00439d8c <= DAT_0043409e)) &&
               (DAT_00439d8c < DAT_00439d92)) {
              DAT_00439d98 = local_2c;
              DAT_00439da0 = (local_44 - local_2c) / ((int)DAT_00439d92 - (int)DAT_00439d8c);
              if (DAT_0043409e < DAT_00439d92) {
                DAT_00439d92 = DAT_0043409e;
              }
              if (DAT_00439d8c < DAT_0043409c) {
                DAT_00439d98 = local_2c + ((int)DAT_0043409c - (int)DAT_00439d8c) * DAT_00439da0;
                DAT_00439d8c = DAT_0043409c;
              }
              DAT_00439d94 = local_28 + 0x8000;
              DAT_00439d98 = DAT_00439d98 + 0x8000;
              FUN_00406e38();
            }
          }
          local_24 = local_24 + -1;
          local_40 = local_40 + -1;
          local_10 = local_10 + local_18;
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

