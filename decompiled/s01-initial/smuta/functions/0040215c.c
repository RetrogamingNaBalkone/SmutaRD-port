/* Ghidra address: 0040215c; FUN_0040215c */

void FUN_0040215c(void)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  short *in_stack_00000008;
  short *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  short in_stack_00000014;
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
  
  if (2 < in_stack_00000014) {
    if (0x10 < in_stack_00000014) {
      in_stack_00000014 = 0x10;
    }
    DAT_00439cf8 = in_stack_00000014;
    DAT_00439d04 = in_stack_00000008;
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
    sVar1 = *in_stack_00000008;
    local_8 = 0;
    local_6 = sVar1;
    for (sVar2 = 1; sVar2 < DAT_00439cf8; sVar2 = sVar2 + 1) {
      if (*(int *)(in_stack_00000008 + sVar2 * 6) < (int)sVar1) {
        sVar1 = in_stack_00000008[sVar2 * 6];
        local_8 = sVar2;
      }
      if ((int)local_6 < *(int *)(in_stack_00000008 + sVar2 * 6)) {
        local_6 = in_stack_00000008[sVar2 * 6];
        DAT_00439cf4 = sVar2;
      }
    }
    if (DAT_0043409a < local_6) {
      local_6 = DAT_0043409a;
    }
    if (sVar1 < local_6) {
      DAT_00439da4 = (ushort)((*(byte *)(in_stack_0000000c + 2) & 1) != 0);
      DAT_00439da6 = (ushort)((*(byte *)(in_stack_0000000c + 2) & 8) != 0);
      DAT_00439cfa = *in_stack_0000000c;
      DAT_00439cfc = in_stack_0000000c[1];
      DAT_00439d00 = FUN_00409f70();
      if ((*(byte *)(in_stack_0000000c + 2) & 0x20) == 0) {
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
      for (DAT_00439d8e = sVar1; DAT_00439d8e <= local_6; DAT_00439d8e = DAT_00439d8e + 1) {
        if ((local_20 == 0) && (DAT_00439d8e < local_6)) {
          do {
            sVar1 = local_8;
            local_8 = sVar1 + local_1e;
            if (local_8 < DAT_00439cf8) {
              if (local_8 < 0) {
                local_8 = DAT_00439cf8 + -1;
              }
            }
            else {
              local_8 = 0;
            }
            local_20 = DAT_00439d04[local_8 * 6] - DAT_00439d04[sVar1 * 6];
          } while (local_20 == 0);
          local_24 = DAT_00439d08[sVar1 * 2] * 0x10000;
          local_28 = DAT_00439d08[sVar1 * 2 + 1] * 0x10000;
          local_34 = *(int *)(DAT_00439d04 + sVar1 * 6 + 2) * 0x10000;
          local_2c = (DAT_00439d08[local_8 * 2] * 0x10000 + DAT_00439d08[sVar1 * 2] * -0x10000) /
                     (int)local_20;
          local_30 = (DAT_00439d08[local_8 * 2 + 1] * 0x10000 +
                     DAT_00439d08[sVar1 * 2 + 1] * -0x10000) / (int)local_20;
          local_38 = (*(int *)(DAT_00439d04 + local_8 * 6 + 2) * 0x10000 +
                     *(int *)(DAT_00439d04 + sVar1 * 6 + 2) * -0x10000) / (int)local_20;
          local_c = *(int *)(DAT_00439d04 + sVar1 * 6 + 4);
        }
        if ((local_3c == 0) && (DAT_00439d8e < local_6)) {
          do {
            sVar1 = sVar2;
            sVar2 = sVar1 + local_3a;
            if (sVar2 < DAT_00439cf8) {
              if (sVar2 < 0) {
                sVar2 = DAT_00439cf8 + -1;
              }
            }
            else {
              sVar2 = 0;
            }
            local_3c = DAT_00439d04[sVar2 * 6] - DAT_00439d04[sVar1 * 6];
          } while (local_3c == 0);
          local_40 = DAT_00439d08[sVar1 * 2 + 1] * 0x10000;
          local_4c = *(int *)(DAT_00439d04 + sVar1 * 6 + 2) * 0x10000;
          local_48 = (DAT_00439d08[sVar2 * 2 + 1] * 0x10000 + DAT_00439d08[sVar1 * 2 + 1] * -0x10000
                     ) / (int)local_3c;
          local_50 = (*(int *)(DAT_00439d04 + sVar2 * 6 + 2) * 0x10000 +
                     *(int *)(DAT_00439d04 + sVar1 * 6 + 2) * -0x10000) / (int)local_3c;
          local_14 = ((*(int *)(DAT_00439d04 + sVar2 * 6 + 4) - local_c) * 0x10000) / (int)local_3c;
          local_c = local_c << 0x10;
        }
        if (DAT_00434098 <= DAT_00439d8e) {
          sVar1 = (short)((uint)local_c >> 0x10);
          DAT_004449b4 = (int)sVar1;
          sVar1 = sVar1 - (short)DAT_0043408c;
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
          DAT_004390d0 = *(int *)(DAT_00434094 + 4) + uVar4 * 0x100;
          DAT_00439d8c = (short)((uint)local_34 >> 0x10);
          DAT_00439d92 = (short)((uint)local_4c >> 0x10);
          if (((DAT_0043409c <= DAT_00439d92) && (DAT_00439d8c <= DAT_0043409e)) &&
             (DAT_00439d8c < DAT_00439d92)) {
            DAT_00439d94 = local_24;
            DAT_00439d98 = local_28;
            DAT_00439da0 = (local_40 - local_28) / ((int)DAT_00439d92 - (int)DAT_00439d8c);
            if (DAT_0043409e < DAT_00439d92) {
              DAT_00439d92 = DAT_0043409e;
            }
            if (DAT_00439d8c < DAT_0043409c) {
              DAT_00439d98 = local_28 + ((int)DAT_0043409c - (int)DAT_00439d8c) * DAT_00439da0;
              DAT_00439d8c = DAT_0043409c;
            }
            FUN_00407180();
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

