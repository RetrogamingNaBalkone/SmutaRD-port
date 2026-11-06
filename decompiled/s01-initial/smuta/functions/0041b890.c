/* Ghidra address: 0041b890; FUN_0041b890 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041b890(void)

{
  ushort *puVar1;
  uint uVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  short *in_stack_00000004;
  int *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 local_2b4 [13];
  uint *local_280;
  uint *local_27c;
  uint *local_278;
  short local_274;
  short local_272;
  undefined4 local_270;
  undefined2 local_26a;
  undefined2 local_268;
  undefined2 local_266;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  byte local_257;
  short local_256;
  uint *local_254;
  uint *local_250;
  int local_24c;
  int local_248;
  int local_244;
  uint *local_240;
  uint *local_23c;
  undefined4 local_238;
  int local_234;
  undefined4 local_230;
  uint *local_22c;
  uint *local_228;
  undefined4 local_224;
  int local_220;
  undefined4 local_21c;
  uint *local_218;
  uint *local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  int local_204;
  short local_1fe;
  int local_1fc;
  short local_1f8;
  short local_1f6;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined4 local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int *local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int *local_134;
  int local_130;
  int local_12c;
  int local_128;
  short local_122;
  uint *local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  short local_102;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_70;
  int local_6c;
  int local_64;
  short local_5e;
  int local_5c;
  int local_58;
  short local_52;
  undefined4 local_50;
  undefined2 local_40;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  
  bVar11 = 0;
  FUN_0042b4b4(0x435eb0);
  DAT_00499d50 = 0;
  local_52 = (short)in_stack_00000008[3];
  local_88 = *in_stack_00000008;
  local_8c = in_stack_00000008[2];
  local_5e = in_stack_00000004[0x3a8];
  local_64 = (int)in_stack_00000004[0x3a7];
  local_90 = 2;
  local_94 = 3;
  local_98 = *(int *)(&DAT_00446554 + (0x168 - local_52) * 4);
  local_9c = *(int *)(&DAT_00445fb0 + (0x168 - local_52) * 4);
  local_78 = ((local_64 * 2 * local_98 - local_64 * 3 * local_9c >> 0xf) + local_8c) / local_64;
  local_6c = ((local_64 * 3 * local_98 + local_64 * 2 * local_9c >> 0xf) + local_88) / local_64;
  local_80 = local_64 * -3;
  local_84 = local_64 * 2;
  local_7c = ((local_84 * local_98 - local_80 * local_9c >> 0xf) + local_8c) / local_64;
  local_70 = ((local_80 * local_98 + local_84 * local_9c >> 0xf) + local_88) / local_64;
  local_5c = local_8c;
  local_58 = local_88;
  FUN_00429054();
  local_a0 = 0x4b;
  local_102 = 0;
  FUN_0041da94();
  local_108 = (int)local_102;
  local_a0 = local_a0 << 1;
  local_114 = local_88 / (int)in_stack_00000004[0x3a7];
  local_118 = local_8c / (int)in_stack_00000004[0x3a7];
  if (DAT_0048aaac < 0x40) {
    FUN_0041b748();
  }
  local_11c = 0;
  if (0 < local_a0) {
    do {
      if (0x167 < local_108) {
        local_108 = 0;
      }
      FUN_0041b5cc();
      if ((local_10c != local_114) || (local_110 != local_118)) {
        FUN_0041b3f4();
      }
      local_114 = local_10c;
      local_118 = local_110;
      local_11c = local_11c + 1;
      local_108 = local_108 + 1;
    } while (local_11c < local_a0);
  }
  *(undefined2 *)((int)in_stack_0000000c + 0x1a) = 0xe10;
  *(short *)((int)in_stack_0000000c + 0x2a) = in_stack_00000004[4];
  *(short *)(in_stack_0000000c + 0xb) = in_stack_00000004[3];
  in_stack_0000000c[7] = *in_stack_00000008;
  in_stack_0000000c[8] = in_stack_00000008[1];
  in_stack_0000000c[9] = in_stack_00000008[2];
  *(short *)(in_stack_0000000c + 10) = (short)in_stack_00000008[3];
  *in_stack_0000000c = 0x80;
  local_8 = FUN_00431988();
  if (local_8 != (uint *)0x0) {
    local_40 = 0x14;
    puVar8 = local_2b4;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *in_stack_0000000c;
      in_stack_0000000c = in_stack_0000000c + (uint)bVar11 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    }
    iVar5 = 0xc;
    do {
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    FUN_0040a940();
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    local_40 = 8;
  }
  *(uint **)(in_stack_00000004 + 0x389) = local_8;
  _DAT_0048aab0 =
       (((short)local_70 - (short)local_6c) + 1) * (((short)local_7c - (short)local_78) + 1);
  local_120 = local_8;
  FUN_0040d8b0();
  DAT_00492944 = 0;
  DAT_00493dac = 0;
  DAT_00492928 = FUN_00410304();
  DAT_00492940 = in_stack_00000008[2];
  DAT_0049293c = in_stack_00000008[1];
  DAT_00492938 = *in_stack_00000008;
  local_280 = &DAT_00495d50;
  DAT_0049292c = DAT_00492928;
  local_130 = DAT_00492938;
  local_12c = DAT_0049293c;
  local_128 = DAT_00492940;
  for (local_122 = 0; local_122 < DAT_00499d50; local_122 = local_122 + 1) {
    if (*(int *)(in_stack_00000004 + *local_280 * 2 + 0x3ac) != 0) {
      for (local_134 = *(int **)(in_stack_00000004 + *local_280 * 2 + 0x3ac); *local_134 != 0;
          local_134 = local_134 + 1) {
        iVar5 = *local_134;
        if (*(int *)(iVar5 + 0x12) < 2) {
          iVar9 = *(short *)(iVar5 + 0x55) - DAT_0044ebf8;
          iVar10 = *(short *)(iVar5 + 0x5b) - DAT_0044ebf8;
          local_140 = *(short *)(iVar5 + 0x59) - DAT_0044ec00;
          local_144 = *(short *)(iVar5 + 0x5f) - DAT_0044ec00;
          local_138 = local_140 * DAT_0044ebf4 - iVar9 * DAT_0044ebf0 >> 0xf;
          local_13c = local_144 * DAT_0044ebf4 - iVar10 * DAT_0044ebf0 >> 0xf;
          *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) | 1;
          if ((DAT_0044ebc8 < local_138) || (DAT_0044ebc8 < local_13c)) {
            iVar6 = iVar9 * DAT_0044ebf4 + local_140 * DAT_0044ebf0 >> 0xf;
            iVar9 = iVar10 * DAT_0044ebf4 + local_144 * DAT_0044ebf0 >> 0xf;
            local_148 = *(short *)(iVar5 + 0x57) - DAT_0044ebfc;
            local_14c = *(short *)(iVar5 + 0x5d) - DAT_0044ebfc;
            *(undefined2 *)(iVar5 + 0x51) = 0;
            *(short *)(iVar5 + 0x53) = **(short **)(iVar5 + 0x19) + -1;
            if (local_138 < DAT_0044ebc8) {
              local_150 = ((DAT_0044ebc8 - local_138) * 0x10000) / (local_13c - local_138);
              iVar6 = iVar6 + ((iVar9 - iVar6) * local_150 >> 0x10);
              *(short *)(iVar5 + 0x51) =
                   (short)((uint)(*(short *)(iVar5 + 0x53) * local_150) >> 0x10);
              local_138 = DAT_0044ebc8;
            }
            else if (local_13c < DAT_0044ebc8) {
              local_154 = ((DAT_0044ebc8 - local_138) * 0x10000) / (local_13c - local_138);
              iVar9 = ((iVar9 - iVar6) * local_154 >> 0x10) + iVar6;
              *(short *)(iVar5 + 0x53) =
                   (short)((uint)(*(short *)(iVar5 + 0x53) * local_154) >> 0x10);
              local_13c = DAT_0044ebc8;
            }
            local_140 = DAT_0044f6cc / local_138;
            local_144 = DAT_0044f6cc / local_13c;
            iVar10 = (local_140 * iVar6 >> 0xf) + (int)DAT_0044ebd0;
            iVar9 = (local_144 * iVar9 >> 0xf) + (int)DAT_0044ebd0;
            if (iVar9 == iVar10) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if (iVar9 < iVar10) {
              if ((DAT_0044ebdc < iVar9) || (iVar10 < DAT_0044ebd4)) {
                *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
            else if ((DAT_0044ebdc < iVar10) || (iVar9 < DAT_0044ebd4)) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if ((iVar9 - iVar10) * (local_14c - local_148) < 0) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
              *(int *)(iVar5 + 0x45) = iVar10;
              *(int *)(iVar5 + 0x21) = iVar10;
              *(int *)(iVar5 + 0x25) = (local_140 * local_148 >> 0xf) + (int)DAT_0044ebd2;
              *(int *)(iVar5 + 0x49) = (local_140 * local_14c >> 0xf) + (int)DAT_0044ebd2;
              *(int *)(iVar5 + 0x4d) = local_138;
              *(int *)(iVar5 + 0x29) = local_138;
              *(int *)(iVar5 + 0x39) = iVar9;
              *(int *)(iVar5 + 0x2d) = iVar9;
              *(int *)(iVar5 + 0x31) = (local_144 * local_148 >> 0xf) + (int)DAT_0044ebd2;
              *(int *)(iVar5 + 0x3d) = (local_144 * local_14c >> 0xf) + (int)DAT_0044ebd2;
              *(int *)(iVar5 + 0x41) = local_13c;
              *(int *)(iVar5 + 0x35) = local_13c;
              if (iVar9 < iVar10) {
                *(short *)(iVar5 + 0x67) = (short)iVar10;
                *(short *)(iVar5 + 0x65) = (short)iVar9;
              }
              else {
                *(short *)(iVar5 + 0x67) = (short)iVar9;
                *(short *)(iVar5 + 0x65) = (short)iVar10;
              }
              if (*(int *)(iVar5 + 0x1d) != 0) {
                *(undefined4 *)(iVar5 + 0x19) = **(undefined4 **)(iVar5 + 0x1d);
                puVar1 = (ushort *)(*(int *)(iVar5 + 0x19) + 4);
                *puVar1 = *puVar1 & 0xfff6;
              }
              *(short *)(iVar5 + 0x17) = (short)(local_138 + local_13c >> 1);
              if (*(short *)(iVar5 + 0x17) < 0) {
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
          }
          else {
            *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
            *(undefined2 *)(iVar5 + 0x17) = 0;
          }
          if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
            FUN_0041ad88();
          }
        }
      }
    }
    local_280 = local_280 + 1;
  }
  local_280 = &DAT_00495d50;
  for (local_122 = 0; local_122 < DAT_00499d50; local_122 = local_122 + 1) {
    if (*(int *)(in_stack_00000004 + *local_280 * 2 + 0x3ac) != 0) {
      for (local_158 = *(int **)(in_stack_00000004 + *local_280 * 2 + 0x3ac); *local_158 != 0;
          local_158 = local_158 + 1) {
        iVar5 = *local_158;
        if (*(int *)(iVar5 + 0x12) == 2) {
          local_168 = *(short *)(iVar5 + 0x85) - DAT_0044ebf8;
          local_164 = DAT_0044f6c8 + local_168;
          local_184 = *(short *)(iVar5 + 0x89) - DAT_0044ec00;
          local_17c = DAT_0044f6c8 + local_184;
          local_16c = local_17c * DAT_0044ebf4 - local_168 * DAT_0044ebf0 >> 0xf;
          local_170 = local_17c * DAT_0044ebf4 - local_164 * DAT_0044ebf0 >> 0xf;
          local_174 = local_184 * DAT_0044ebf4 - local_168 * DAT_0044ebf0 >> 0xf;
          iVar9 = local_184 * DAT_0044ebf4 - local_164 * DAT_0044ebf0 >> 0xf;
          local_180 = local_184;
          local_178 = local_17c;
          if ((((DAT_0044ebc8 < local_16c) || (DAT_0044ebc8 < local_170)) || (DAT_0044ebc8 < iVar9))
             || (DAT_0044ebc8 < local_174)) {
            local_198 = local_168 * DAT_0044ebf4 + local_17c * DAT_0044ebf0 >> 0xf;
            local_1a4 = local_164 * DAT_0044ebf4 + local_17c * DAT_0044ebf0 >> 0xf;
            local_1b0 = local_164 * DAT_0044ebf4 + local_184 * DAT_0044ebf0 >> 0xf;
            local_1bc = local_168 * DAT_0044ebf4 + local_184 * DAT_0044ebf0 >> 0xf;
            local_1b8 = *(short *)(iVar5 + 0x87) - DAT_0044ebfc;
            local_18c = local_1b8 - *(short *)(iVar5 + 0x8b);
            *(int *)(iVar5 + 0x49) = local_198;
            *(int *)(iVar5 + 0x4d) = local_1b8;
            *(int *)(iVar5 + 0x51) = local_16c;
            *(int *)(iVar5 + 0x55) = local_1a4;
            *(int *)(iVar5 + 0x59) = local_1b8;
            *(int *)(iVar5 + 0x5d) = local_170;
            *(int *)(iVar5 + 0x61) = local_1b0;
            *(int *)(iVar5 + 0x65) = local_1b8;
            *(int *)(iVar5 + 0x69) = iVar9;
            *(int *)(iVar5 + 0x6d) = local_1bc;
            *(int *)(iVar5 + 0x71) = local_1b8;
            *(int *)(iVar5 + 0x75) = local_174;
            local_1b4 = local_174;
            local_1ac = local_1b8;
            local_1a8 = iVar9;
            local_1a0 = local_1b8;
            local_19c = local_170;
            local_194 = local_1b8;
            local_190 = local_16c;
            local_188 = local_1b8;
            local_168 = local_1bc;
            local_164 = local_1b0;
            local_160 = local_1a4;
            local_15c = local_198;
            FUN_00428fe4();
            *(int *)(iVar5 + 0x41) = local_18c;
            *(int *)(iVar5 + 0x35) = local_18c;
            *(int *)(iVar5 + 0x29) = local_18c;
            *(int *)(iVar5 + 0x1d) = local_18c;
            if (local_16c < DAT_0044ebc8) {
              local_16c = DAT_0044ebc8;
            }
            if (local_170 < DAT_0044ebc8) {
              local_170 = DAT_0044ebc8;
            }
            if (iVar9 < DAT_0044ebc8) {
              iVar9 = DAT_0044ebc8;
            }
            if (local_174 < DAT_0044ebc8) {
              local_174 = DAT_0044ebc8;
            }
            local_15c = ((DAT_0044f6cc / local_16c) * local_15c >> 0xf) + (int)DAT_0044ebd0;
            local_160 = ((DAT_0044f6cc / local_170) * local_160 >> 0xf) + (int)DAT_0044ebd0;
            local_164 = ((DAT_0044f6cc / iVar9) * local_164 >> 0xf) + (int)DAT_0044ebd0;
            local_168 = ((DAT_0044f6cc / local_174) * local_168 >> 0xf) + (int)DAT_0044ebd0;
            local_1c4 = local_15c;
            local_1c0 = local_160;
            if ((local_15c <= local_160) && (local_1c0 = local_15c, local_15c < local_160)) {
              local_1c4 = local_160;
            }
            iVar10 = local_164;
            if ((local_1c0 <= local_164) && (iVar10 = local_1c0, local_1c4 < local_164)) {
              local_1c4 = local_164;
            }
            local_1c0 = iVar10;
            iVar10 = local_168;
            if ((local_1c0 <= local_168) && (iVar10 = local_1c0, local_1c4 < local_168)) {
              local_1c4 = local_168;
            }
            local_1c0 = iVar10;
            if ((DAT_0044ebdc < local_1c0) || (local_1c4 < DAT_0044ebd4)) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            else {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) | 1;
              *(undefined2 *)(iVar5 + 0x81) = (undefined2)local_1c0;
              *(undefined2 *)(iVar5 + 0x83) = (undefined2)local_1c4;
              *(short *)(iVar5 + 0x17) = (short)(iVar9 + local_16c + local_170 + local_174 >> 2);
              if (*(short *)(iVar5 + 0x17) < 0) {
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
          }
          else {
            *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
            *(undefined2 *)(iVar5 + 0x17) = 0;
            local_160 = local_164;
            local_15c = local_168;
          }
          if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
            FUN_0041ad88();
          }
        }
        else if (*(int *)(iVar5 + 0x12) == 3) {
          local_1c8 = *(short *)(iVar5 + 0x51) - DAT_0044ebf8;
          local_1cc = *(short *)(iVar5 + 0x57) - DAT_0044ebf8;
          local_1d0 = *(short *)(iVar5 + 0x55) - DAT_0044ec00;
          local_1d4 = *(short *)(iVar5 + 0x5b) - DAT_0044ec00;
          iVar7 = local_1c8 * DAT_0044ebf0;
          iVar6 = local_1d0 * DAT_0044ebf4;
          iVar10 = local_1d4 * DAT_0044ebf4;
          iVar9 = local_1cc * DAT_0044ebf0;
          *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) | 1;
          iVar10 = iVar10 - iVar9 >> 0xf;
          iVar9 = iVar6 - iVar7 >> 0xf;
          if ((DAT_0044ebc8 < iVar9) || (DAT_0044ebc8 < iVar10)) {
            local_1c8 = local_1c8 * DAT_0044ebf4 + local_1d0 * DAT_0044ebf0 >> 0xf;
            local_1cc = local_1cc * DAT_0044ebf4 + local_1d4 * DAT_0044ebf0 >> 0xf;
            *(undefined2 *)(iVar5 + 0x4d) = 0;
            *(short *)(iVar5 + 0x4f) = **(short **)(iVar5 + 0x19) + -1;
            if (iVar9 < DAT_0044ebc8) {
              local_1d8 = ((DAT_0044ebc8 - iVar9) * 0x10000) / (iVar10 - iVar9);
              local_1c8 = local_1c8 + ((local_1cc - local_1c8) * local_1d8 >> 0x10);
              *(short *)(iVar5 + 0x4d) =
                   (short)((uint)(*(short *)(iVar5 + 0x4f) * local_1d8) >> 0x10);
              iVar9 = DAT_0044ebc8;
            }
            if (iVar10 < DAT_0044ebc8) {
              local_1dc = ((DAT_0044ebc8 - iVar10) * 0x10000) / (iVar9 - iVar10);
              local_1cc = local_1cc + ((local_1c8 - local_1cc) * local_1dc >> 0x10);
              *(short *)(iVar5 + 0x4f) =
                   *(short *)(iVar5 + 0x4f) -
                   (short)((uint)(*(short *)(iVar5 + 0x4f) * local_1dc) >> 0x10);
              iVar10 = DAT_0044ebc8;
            }
            local_1d0 = DAT_0044f6cc / iVar9;
            local_1d4 = DAT_0044f6cc / iVar10;
            local_1c8 = (local_1d0 * local_1c8 >> 0xf) + (int)DAT_0044ebd0;
            local_1cc = (local_1d4 * local_1cc >> 0xf) + (int)DAT_0044ebd0;
            if (local_1cc < local_1c8) {
              if ((DAT_0044ebdc < local_1cc) || (local_1c8 < DAT_0044ebd4)) {
                *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
            else if ((DAT_0044ebdc < local_1c8) || (local_1cc < DAT_0044ebd4)) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
              local_1e0 = *(short *)(iVar5 + 0x53) - DAT_0044ebfc;
              local_1e4 = *(short *)(iVar5 + 0x59) - DAT_0044ebfc;
              if (*(short *)(iVar5 + 0x5d) == 1) {
                *(int *)(iVar5 + 0x41) = local_1cc;
                *(int *)(iVar5 + 0x1d) = local_1cc;
                *(int *)(iVar5 + 0x35) = local_1c8;
                *(int *)(iVar5 + 0x29) = local_1c8;
                *(int *)(iVar5 + 0x21) = (local_1d4 * local_1e0 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x45) = (local_1d4 * local_1e4 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x2d) = (local_1d0 * local_1e0 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x39) = (local_1d0 * local_1e4 >> 0xf) + (int)DAT_0044ebd2;
              }
              else {
                *(int *)(iVar5 + 0x41) = local_1c8;
                *(int *)(iVar5 + 0x1d) = local_1c8;
                *(int *)(iVar5 + 0x35) = local_1cc;
                *(int *)(iVar5 + 0x29) = local_1cc;
                *(int *)(iVar5 + 0x21) = (local_1d0 * local_1e0 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x45) = (local_1d0 * local_1e4 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x2d) = (local_1d4 * local_1e0 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x39) = (local_1d4 * local_1e4 >> 0xf) + (int)DAT_0044ebd2;
              }
              iVar6 = iVar9 + -100;
              if (iVar9 + -100 < DAT_0044ebc8) {
                iVar6 = DAT_0044ebc8;
              }
              iVar9 = iVar10 + -100;
              if (iVar10 + -100 < DAT_0044ebc8) {
                iVar9 = DAT_0044ebc8;
              }
              *(int *)(iVar5 + 0x49) = iVar6;
              *(int *)(iVar5 + 0x25) = iVar6;
              *(int *)(iVar5 + 0x3d) = iVar9;
              *(int *)(iVar5 + 0x31) = iVar9;
              *(short *)(iVar5 + 0x17) = (short)(iVar9 + iVar6 >> 1) - (DAT_0044f6c8 >> 2);
              if (*(short *)(iVar5 + 0x17) < 0) {
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
          }
          else {
            *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
            *(undefined2 *)(iVar5 + 0x17) = 0;
          }
          if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
            FUN_0041ad88();
          }
        }
      }
    }
    local_280 = local_280 + 1;
  }
  local_280 = &DAT_00495d50;
  for (local_122 = 0; local_122 < DAT_00499d50; local_122 = local_122 + 1) {
    uVar2 = *local_280;
    local_1e8 = (uVar2 & 0x3f) * (int)in_stack_00000004[0x3a7];
    local_1ec = ((int)uVar2 >> 6) * (int)in_stack_00000004[0x3a7];
    iVar5 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[uVar2] * 2 + 0x187);
    local_1f8 = *(short *)(iVar5 + 0x18);
    local_1f0 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))();
    local_1fc = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_00490720)[uVar2] * 2 + 0x187);
    local_1fe = *(short *)(local_1fc + 0x1f);
    if (*(short *)(local_1fc + 0x18) == 0xc) {
      local_204 = 5000;
    }
    else {
      local_204 = -5;
    }
    if (((local_1f8 == 3) || (local_1f8 == 10)) || (local_1f8 == 6)) {
      *(int *)(iVar5 + 0x30) = (local_64 >> 1) + local_1e8;
      *(int *)(iVar5 + 0x34) = local_204 - local_1fe;
      *(int *)(iVar5 + 0x38) = (local_64 >> 1) + local_1ec;
      local_208 = *(undefined4 *)(iVar5 + 0x38);
      local_20c = *(undefined4 *)(iVar5 + 0x34);
      local_210 = *(undefined4 *)(iVar5 + 0x30);
      local_1f0 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))();
      local_1f2 = *(undefined2 *)(iVar5 + 0x1b);
      local_1f6 = **(short **)(iVar5 + 100) * *(short *)(iVar5 + 0x1d);
      local_1f4 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      local_c = FUN_00431988();
      if (local_c != (uint *)0x0) {
        local_40 = 0x2c;
        FUN_0040df9c();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
        local_40 = 0x20;
      }
      local_214 = local_c;
      if ((*(byte *)((int)local_c + 0x16) & 1) == 0) {
        local_10 = local_c;
        if (local_c != (uint *)0x0) {
          iVar5 = FUN_0042b677();
          *DAT_0049aa2c = *DAT_0049aa2c + iVar5;
          local_40 = 0x44;
          (**(code **)*local_10)();
          local_40 = 0x38;
        }
      }
      else {
        (&DAT_00493db0)[DAT_00493dac] = local_c;
        DAT_00493dac = DAT_00493dac + 1;
        local_218 = local_c;
      }
    }
    else if (local_1f8 == 9) {
      local_1f2 = *(undefined2 *)(iVar5 + 0x1b);
      local_1f4 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      local_1f6 = **(short **)(iVar5 + 100) * *(short *)(iVar5 + 0x1d);
      local_21c = *(undefined4 *)(iVar5 + 0x38);
      local_220 = local_204 - local_1fe;
      local_224 = *(undefined4 *)(iVar5 + 0x30);
      local_14 = FUN_00431988();
      if (local_14 != (uint *)0x0) {
        local_40 = 0x5c;
        FUN_0040df9c();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
        local_40 = 0x50;
      }
      local_228 = local_14;
      if ((*(byte *)((int)local_14 + 0x16) & 1) == 0) {
        local_18 = local_14;
        if (local_14 != (uint *)0x0) {
          iVar5 = FUN_0042b677();
          *DAT_0049aa2c = *DAT_0049aa2c + iVar5;
          local_40 = 0x74;
          (**(code **)*local_18)();
          local_40 = 0x68;
        }
      }
      else {
        (&DAT_00493db0)[DAT_00493dac] = local_14;
        DAT_00493dac = DAT_00493dac + 1;
        local_22c = local_14;
      }
    }
    iVar5 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048e518)[uVar2] * 2 + 0x187);
    local_1f8 = *(short *)(iVar5 + 0x18);
    if (local_1f8 != 0) {
      local_1f0 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))();
      local_1f2 = *(undefined2 *)(iVar5 + 0x1b);
      local_1f4 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      local_1f6 = **(short **)(iVar5 + 100) * *(short *)(iVar5 + 0x1d);
      if (local_1f8 == 9) {
        local_230 = *(undefined4 *)(iVar5 + 0x38);
        local_234 = *(int *)(iVar5 + 0x34) + (int)*(short *)(iVar5 + 0x1f);
        local_238 = *(undefined4 *)(iVar5 + 0x30);
        local_1c = FUN_00431988();
        if (local_1c != (uint *)0x0) {
          local_40 = 0x8c;
          FUN_0040df9c();
          *DAT_0049aa2c = *DAT_0049aa2c + -2;
          local_40 = 0x80;
        }
        local_23c = local_1c;
        if ((*(byte *)((int)local_1c + 0x16) & 1) == 0) {
          local_20 = local_1c;
          if (local_1c != (uint *)0x0) {
            iVar5 = FUN_0042b677();
            *DAT_0049aa2c = *DAT_0049aa2c + iVar5;
            local_40 = 0xa4;
            (**(code **)*local_20)();
            local_40 = 0x98;
          }
        }
        else {
          (&DAT_00493db0)[DAT_00493dac] = local_1c;
          DAT_00493dac = DAT_00493dac + 1;
          local_240 = local_1c;
        }
      }
      else if (local_1f8 == 3) {
        local_244 = (local_64 >> 1) + local_1ec;
        local_248 = local_204 - local_1fe;
        local_24c = (local_64 >> 1) + local_1e8;
        local_24 = FUN_00431988();
        if (local_24 != (uint *)0x0) {
          local_40 = 0xbc;
          FUN_0040df9c();
          *DAT_0049aa2c = *DAT_0049aa2c + -2;
          local_40 = 0xb0;
        }
        local_250 = local_24;
        if ((*(byte *)((int)local_24 + 0x16) & 1) == 0) {
          local_28 = local_24;
          if (local_24 != (uint *)0x0) {
            iVar5 = FUN_0042b677();
            *DAT_0049aa2c = *DAT_0049aa2c + iVar5;
            local_40 = 0xd4;
            (**(code **)*local_28)();
            local_40 = 200;
          }
        }
        else {
          (&DAT_00493db0)[DAT_00493dac] = local_24;
          DAT_00493dac = DAT_00493dac + 1;
          local_254 = local_24;
        }
      }
    }
    local_280 = local_280 + 1;
  }
  local_256 = in_stack_00000004[0x3a9];
  for (local_257 = 0; (0 < local_256 && (local_257 != 0xff)); local_257 = local_257 + 1) {
    iVar5 = *(int *)(in_stack_00000004 + (uint)local_257 * 2 + 0x187);
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x1c) & 0x10) != 0)) {
      local_256 = local_256 + -1;
      local_25c = *(undefined4 *)(iVar5 + 0x38);
      local_260 = *(undefined4 *)(iVar5 + 0x34);
      local_264 = *(undefined4 *)(iVar5 + 0x30);
      local_266 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      lVar3 = (longlong)(int)**(short **)(iVar5 + 100) * (longlong)(int)*(short *)(iVar5 + 0x1d);
      local_268 = (undefined2)lVar3;
      local_26a = *(undefined2 *)(iVar5 + 0x1b);
      local_270 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))
                            (*(int *)(iVar5 + 0x14),(int)((ulonglong)lVar3 >> 0x20),
                             CONCAT22((short)((uint)*(short **)(iVar5 + 100) >> 0x10),local_26a),
                             iVar5);
      sVar4 = *(short *)(iVar5 + 0x38);
      local_274 = *(short *)(iVar5 + 0x30);
      if (local_274 < 0) {
        local_274 = 0;
      }
      if (*in_stack_00000004 + -1 < (int)local_274) {
        local_274 = *in_stack_00000004 + -1;
      }
      if (sVar4 < 0) {
        sVar4 = 0;
      }
      if (in_stack_00000004[2] + -1 < (int)sVar4) {
        sVar4 = in_stack_00000004[2] + -1;
      }
      local_272 = sVar4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_274;
      local_2c = FUN_00431988();
      if (local_2c != (uint *)0x0) {
        local_40 = 0xec;
        FUN_0040df9c();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
        local_40 = 0xe0;
      }
      local_278 = local_2c;
      if ((*(byte *)((int)local_2c + 0x16) & 1) == 0) {
        local_30 = local_2c;
        if (local_2c != (uint *)0x0) {
          iVar5 = FUN_0042b677();
          *DAT_0049aa2c = *DAT_0049aa2c + iVar5;
          local_40 = 0x104;
          (**(code **)*local_30)();
          local_40 = 0xf8;
        }
      }
      else {
        (&DAT_00493db0)[DAT_00493dac] = local_2c;
        DAT_00493dac = DAT_00493dac + 1;
        local_27c = local_2c;
      }
    }
  }
  FUN_0041afc0();
  *in_FS_OFFSET = local_50;
  return;
}

