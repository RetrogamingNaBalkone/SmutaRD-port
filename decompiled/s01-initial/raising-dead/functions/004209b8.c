/* Ghidra address: 004209b8; FUN_004209b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004209b8(short *param_1,int *param_2,undefined4 *param_3)

{
  ushort *puVar1;
  uint uVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  undefined2 uVar11;
  int local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  undefined4 local_290;
  int local_28c;
  int local_288;
  undefined4 local_284;
  int local_280;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  undefined4 local_244 [13];
  uint *local_210;
  undefined4 *local_20c;
  uint *local_208;
  undefined4 *local_204;
  short local_200;
  short local_1fe;
  undefined4 local_1fc;
  undefined2 local_1f6;
  short local_1f4;
  short local_1f2;
  int local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  byte local_1e3;
  short local_1e2;
  undefined4 *local_1e0;
  uint *local_1dc;
  undefined4 *local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  undefined4 *local_1c8;
  uint *local_1c4;
  undefined4 *local_1c0;
  int local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 *local_1b0;
  uint *local_1ac;
  undefined4 *local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 *local_198;
  uint *local_194;
  undefined4 *local_190;
  int local_18c;
  undefined4 local_188;
  undefined4 local_184;
  int local_180;
  short local_17a;
  int local_178;
  short local_174;
  short local_172;
  short local_170;
  undefined2 local_16e;
  undefined4 local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int *local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int *local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  short local_9e;
  uint *local_9c;
  uint *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  short local_7a;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_3c;
  short local_36;
  int local_34;
  int local_30;
  short local_2a;
  undefined4 local_28;
  
  bVar10 = 0;
  FUN_0042c8f0(0x439f34);
  DAT_00501670 = 0;
  local_2a = (short)param_2[3];
  local_60 = *param_2;
  local_64 = param_2[2];
  local_36 = param_1[0x3a8];
  local_3c = (int)param_1[0x3a7];
  local_68 = 2;
  local_6c = 3;
  local_70 = (&DAT_0053cfc0)[0x168 - local_2a];
  local_74 = (&DAT_0053ca1c)[0x168 - local_2a];
  local_50 = ((local_3c * 2 * local_70 - local_3c * 3 * local_74 >> 0xf) + local_64) / local_3c;
  local_44 = ((local_3c * 3 * local_70 + local_3c * 2 * local_74 >> 0xf) + local_60) / local_3c;
  local_58 = local_3c * -3;
  local_5c = local_3c * 2;
  local_54 = ((local_5c * local_70 - local_58 * local_74 >> 0xf) + local_64) / local_3c;
  local_48 = ((local_58 * local_70 + local_5c * local_74 >> 0xf) + local_60) / local_3c;
  local_34 = local_64;
  local_30 = local_60;
  FUN_00429fc4((undefined4 *)&DAT_004fc670,0,0x1000);
  local_78 = 0x4b;
  local_7a = 0;
  FUN_0040f8c4(&local_7a,0x11d - (short)param_2[3]);
  local_80 = (int)local_7a;
  local_78 = local_78 << 1;
  local_8c = local_60 / (int)param_1[0x3a7];
  local_90 = local_64 / (int)param_1[0x3a7];
  if (DAT_004f142c < 0x40) {
    FUN_00420870(param_1,local_8c,local_90);
  }
  local_94 = 0;
  if (0 < local_78) {
    do {
      if (0x167 < local_80) {
        local_80 = 0;
      }
      FUN_004206f4(param_1,local_60,local_64,&local_84,&local_88,local_80);
      if ((local_84 != local_8c) || (local_88 != local_90)) {
        FUN_0042051c(param_1,local_84,local_88,local_8c,local_90);
      }
      local_8c = local_84;
      local_90 = local_88;
      local_94 = local_94 + 1;
      local_80 = local_80 + 1;
    } while (local_94 < local_78);
  }
  *(undefined2 *)((int)param_3 + 0x1a) = 0xe10;
  *(short *)((int)param_3 + 0x2a) = param_1[4];
  *(short *)(param_3 + 0xb) = param_1[3];
  param_3[7] = *param_2;
  param_3[8] = param_2[1];
  param_3[9] = param_2[2];
  *(short *)(param_3 + 10) = (short)param_2[3];
  *param_3 = 0x80;
  local_9c = FUN_00435120(4);
  if (local_9c != (uint *)0x0) {
    puVar7 = local_244;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *param_3;
      param_3 = param_3 + (uint)bVar10 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
    }
    iVar5 = 0xc;
    do {
      puVar7 = local_244 + iVar5;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    FUN_00429850(local_9c,param_1,*puVar7);
  }
  *(uint **)(param_1 + 0x389) = local_9c;
  _DAT_004f1430 =
       (((short)local_48 - (short)local_44) + 1) * (((short)local_54 - (short)local_50) + 1);
  local_98 = local_9c;
  FUN_004243a4();
  DAT_004f92c4 = 0;
  DAT_004fa72c = 0;
  DAT_004f92a8 = FUN_004235d4(32000);
  DAT_004f92c0 = param_2[2];
  DAT_004f92bc = param_2[1];
  DAT_004f92b8 = *param_2;
  local_210 = &DAT_004fd670;
  DAT_004f92ac = DAT_004f92a8;
  local_ac = DAT_004f92b8;
  local_a8 = DAT_004f92bc;
  local_a4 = DAT_004f92c0;
  for (local_9e = 0; local_9e < DAT_00501670; local_9e = local_9e + 1) {
    if (*(int *)(param_1 + *local_210 * 2 + 0x3ac) != 0) {
      for (local_b0 = *(int **)(param_1 + *local_210 * 2 + 0x3ac); *local_b0 != 0;
          local_b0 = local_b0 + 1) {
        iVar5 = *local_b0;
        if (*(int *)(iVar5 + 0x12) < 2) {
          iVar8 = *(short *)(iVar5 + 0x55) - DAT_0053d6f4;
          iVar6 = *(short *)(iVar5 + 0x5b) - DAT_0053d6f4;
          local_bc = *(short *)(iVar5 + 0x59) - DAT_0053d6fc;
          local_c0 = *(short *)(iVar5 + 0x5f) - DAT_0053d6fc;
          local_b4 = local_bc * DAT_0053d6f0 - iVar8 * DAT_0053d6ec >> 0xf;
          local_b8 = local_c0 * DAT_0053d6f0 - iVar6 * DAT_0053d6ec >> 0xf;
          *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) | 1;
          if ((DAT_0053d6c4 < local_b4) || (DAT_0053d6c4 < local_b8)) {
            iVar9 = iVar8 * DAT_0053d6f0 + local_bc * DAT_0053d6ec >> 0xf;
            iVar8 = iVar6 * DAT_0053d6f0 + local_c0 * DAT_0053d6ec >> 0xf;
            local_c4 = *(short *)(iVar5 + 0x57) - DAT_0053d6f8;
            local_c8 = *(short *)(iVar5 + 0x5d) - DAT_0053d6f8;
            *(undefined2 *)(iVar5 + 0x51) = 0;
            *(short *)(iVar5 + 0x53) = **(short **)(iVar5 + 0x19) + -1;
            if (local_b4 < DAT_0053d6c4) {
              local_cc = ((DAT_0053d6c4 - local_b4) * 0x10000) / (local_b8 - local_b4);
              iVar9 = iVar9 + ((iVar8 - iVar9) * local_cc >> 0x10);
              *(short *)(iVar5 + 0x51) =
                   (short)((uint)(*(short *)(iVar5 + 0x53) * local_cc) >> 0x10);
              local_b4 = DAT_0053d6c4;
            }
            else if (local_b8 < DAT_0053d6c4) {
              local_d0 = ((DAT_0053d6c4 - local_b4) * 0x10000) / (local_b8 - local_b4);
              iVar8 = ((iVar8 - iVar9) * local_d0 >> 0x10) + iVar9;
              *(short *)(iVar5 + 0x53) =
                   (short)((uint)(*(short *)(iVar5 + 0x53) * local_d0) >> 0x10);
              local_b8 = DAT_0053d6c4;
            }
            local_bc = DAT_0053c914 / local_b4;
            local_c0 = DAT_0053c914 / local_b8;
            iVar6 = (local_bc * iVar9 >> 0xf) + (int)DAT_0053d6cc;
            iVar8 = (local_c0 * iVar8 >> 0xf) + (int)DAT_0053d6cc;
            if (iVar8 == iVar6) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if (iVar8 < iVar6) {
              if ((DAT_0053d6d8 < iVar8) || (iVar6 < DAT_0053d6d0)) {
                *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
            else if ((DAT_0053d6d8 < iVar6) || (iVar8 < DAT_0053d6d0)) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if ((iVar8 - iVar6) * (local_c8 - local_c4) < 0) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
              *(int *)(iVar5 + 0x45) = iVar6;
              *(int *)(iVar5 + 0x21) = iVar6;
              *(int *)(iVar5 + 0x25) = (local_bc * local_c4 >> 0xf) + (int)DAT_0053d6ce;
              *(int *)(iVar5 + 0x49) = (local_bc * local_c8 >> 0xf) + (int)DAT_0053d6ce;
              *(int *)(iVar5 + 0x4d) = local_b4;
              *(int *)(iVar5 + 0x29) = local_b4;
              *(int *)(iVar5 + 0x39) = iVar8;
              *(int *)(iVar5 + 0x2d) = iVar8;
              *(int *)(iVar5 + 0x31) = (local_c0 * local_c4 >> 0xf) + (int)DAT_0053d6ce;
              *(int *)(iVar5 + 0x3d) = (local_c0 * local_c8 >> 0xf) + (int)DAT_0053d6ce;
              *(int *)(iVar5 + 0x41) = local_b8;
              *(int *)(iVar5 + 0x35) = local_b8;
              if (iVar8 < iVar6) {
                *(short *)(iVar5 + 0x67) = (short)iVar6;
                *(short *)(iVar5 + 0x65) = (short)iVar8;
              }
              else {
                *(short *)(iVar5 + 0x67) = (short)iVar8;
                *(short *)(iVar5 + 0x65) = (short)iVar6;
              }
              if (*(int *)(iVar5 + 0x1d) != 0) {
                *(undefined4 *)(iVar5 + 0x19) = **(undefined4 **)(iVar5 + 0x1d);
                puVar1 = (ushort *)(*(int *)(iVar5 + 0x19) + 4);
                *puVar1 = *puVar1 & 0xfff6;
              }
              *(short *)(iVar5 + 0x17) = (short)(local_b4 + local_b8 >> 1);
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
            FUN_0041ff10(iVar5);
          }
        }
      }
    }
    local_210 = local_210 + 1;
  }
  local_210 = &DAT_004fd670;
  for (local_9e = 0; local_9e < DAT_00501670; local_9e = local_9e + 1) {
    if (*(int *)(param_1 + *local_210 * 2 + 0x3ac) != 0) {
      for (local_d4 = *(int **)(param_1 + *local_210 * 2 + 0x3ac); *local_d4 != 0;
          local_d4 = local_d4 + 1) {
        iVar5 = *local_d4;
        if (*(int *)(iVar5 + 0x12) == 2) {
          local_e4 = *(short *)(iVar5 + 0x85) - DAT_0053d6f4;
          local_e0 = DAT_0053c910 + local_e4;
          local_100 = *(short *)(iVar5 + 0x89) - DAT_0053d6fc;
          local_f8 = DAT_0053c910 + local_100;
          local_e8 = local_f8 * DAT_0053d6f0 - local_e4 * DAT_0053d6ec >> 0xf;
          local_ec = local_f8 * DAT_0053d6f0 - local_e0 * DAT_0053d6ec >> 0xf;
          local_f0 = local_100 * DAT_0053d6f0 - local_e4 * DAT_0053d6ec >> 0xf;
          iVar8 = local_100 * DAT_0053d6f0 - local_e0 * DAT_0053d6ec >> 0xf;
          local_fc = local_100;
          local_f4 = local_f8;
          if ((((DAT_0053d6c4 < local_e8) || (DAT_0053d6c4 < local_ec)) || (DAT_0053d6c4 < iVar8))
             || (DAT_0053d6c4 < local_f0)) {
            local_250 = local_e4 * DAT_0053d6f0 + local_f8 * DAT_0053d6ec >> 0xf;
            local_25c = local_e0 * DAT_0053d6f0 + local_f8 * DAT_0053d6ec >> 0xf;
            local_268 = local_e0 * DAT_0053d6f0 + local_100 * DAT_0053d6ec >> 0xf;
            local_274 = local_e4 * DAT_0053d6f0 + local_100 * DAT_0053d6ec >> 0xf;
            local_270 = *(short *)(iVar5 + 0x87) - DAT_0053d6f8;
            local_108 = local_270 - *(short *)(iVar5 + 0x8b);
            *(int *)(iVar5 + 0x49) = local_250;
            *(int *)(iVar5 + 0x4d) = local_270;
            *(int *)(iVar5 + 0x51) = local_e8;
            *(int *)(iVar5 + 0x55) = local_25c;
            *(int *)(iVar5 + 0x59) = local_270;
            *(int *)(iVar5 + 0x5d) = local_ec;
            *(int *)(iVar5 + 0x61) = local_268;
            *(int *)(iVar5 + 0x65) = local_270;
            *(int *)(iVar5 + 0x69) = iVar8;
            *(int *)(iVar5 + 0x6d) = local_274;
            *(int *)(iVar5 + 0x71) = local_270;
            *(int *)(iVar5 + 0x75) = local_f0;
            local_26c = local_f0;
            local_264 = local_270;
            local_260 = iVar8;
            local_258 = local_270;
            local_254 = local_ec;
            local_24c = local_270;
            local_248 = local_e8;
            local_138 = local_274;
            local_134 = local_270;
            local_130 = local_f0;
            local_12c = local_268;
            local_128 = local_270;
            local_124 = iVar8;
            local_120 = local_25c;
            local_11c = local_270;
            local_118 = local_ec;
            local_114 = local_250;
            local_110 = local_270;
            local_10c = local_e8;
            local_104 = local_270;
            local_e4 = local_274;
            local_e0 = local_268;
            local_dc = local_25c;
            local_d8 = local_250;
            FUN_00429f54((undefined4 *)(iVar5 + 0x19),(undefined4 *)(iVar5 + 0x49),0x30);
            *(int *)(iVar5 + 0x41) = local_108;
            *(int *)(iVar5 + 0x35) = local_108;
            *(int *)(iVar5 + 0x29) = local_108;
            *(int *)(iVar5 + 0x1d) = local_108;
            if (local_e8 < DAT_0053d6c4) {
              local_e8 = DAT_0053d6c4;
            }
            if (local_ec < DAT_0053d6c4) {
              local_ec = DAT_0053d6c4;
            }
            if (iVar8 < DAT_0053d6c4) {
              iVar8 = DAT_0053d6c4;
            }
            if (local_f0 < DAT_0053d6c4) {
              local_f0 = DAT_0053d6c4;
            }
            local_d8 = ((DAT_0053c914 / local_e8) * local_d8 >> 0xf) + (int)DAT_0053d6cc;
            local_dc = ((DAT_0053c914 / local_ec) * local_dc >> 0xf) + (int)DAT_0053d6cc;
            local_e0 = ((DAT_0053c914 / iVar8) * local_e0 >> 0xf) + (int)DAT_0053d6cc;
            local_e4 = ((DAT_0053c914 / local_f0) * local_e4 >> 0xf) + (int)DAT_0053d6cc;
            local_140 = local_d8;
            local_13c = local_dc;
            if ((local_d8 <= local_dc) && (local_13c = local_d8, local_d8 < local_dc)) {
              local_140 = local_dc;
            }
            iVar6 = local_e0;
            if ((local_13c <= local_e0) && (iVar6 = local_13c, local_140 < local_e0)) {
              local_140 = local_e0;
            }
            local_13c = iVar6;
            iVar6 = local_e4;
            if ((local_13c <= local_e4) && (iVar6 = local_13c, local_140 < local_e4)) {
              local_140 = local_e4;
            }
            local_13c = iVar6;
            if ((DAT_0053d6d8 < local_13c) || (local_140 < DAT_0053d6d0)) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            else {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) | 1;
              *(undefined2 *)(iVar5 + 0x81) = (undefined2)local_13c;
              *(undefined2 *)(iVar5 + 0x83) = (undefined2)local_140;
              *(short *)(iVar5 + 0x17) = (short)(iVar8 + local_e8 + local_ec + local_f0 >> 2);
              if (*(short *)(iVar5 + 0x17) < 0) {
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
          }
          else {
            *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
            *(undefined2 *)(iVar5 + 0x17) = 0;
            local_dc = local_e0;
            local_d8 = local_e4;
          }
          if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
            FUN_0041ff10(iVar5);
          }
        }
        else if (*(int *)(iVar5 + 0x12) == 3) {
          local_144 = *(short *)(iVar5 + 0x57) - DAT_0053d6f4;
          iVar9 = *(short *)(iVar5 + 0x51) - DAT_0053d6f4;
          local_14c = *(short *)(iVar5 + 0x55) - DAT_0053d6fc;
          local_150 = *(short *)(iVar5 + 0x5b) - DAT_0053d6fc;
          iVar6 = iVar9 * DAT_0053d6ec;
          iVar8 = local_14c * DAT_0053d6f0;
          local_148 = local_150 * DAT_0053d6f0 - local_144 * DAT_0053d6ec >> 0xf;
          *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) | 1;
          iVar8 = iVar8 - iVar6 >> 0xf;
          if ((DAT_0053d6c4 < iVar8) || (DAT_0053d6c4 < local_148)) {
            iVar6 = iVar9 * DAT_0053d6f0 + local_14c * DAT_0053d6ec >> 0xf;
            local_144 = local_144 * DAT_0053d6f0 + local_150 * DAT_0053d6ec >> 0xf;
            *(undefined2 *)(iVar5 + 0x4d) = 0;
            *(short *)(iVar5 + 0x4f) = **(short **)(iVar5 + 0x19) + -1;
            if (iVar8 < DAT_0053d6c4) {
              local_154 = ((DAT_0053d6c4 - iVar8) * 0x10000) / (local_148 - iVar8);
              iVar6 = iVar6 + ((local_144 - iVar6) * local_154 >> 0x10);
              *(short *)(iVar5 + 0x4d) =
                   (short)((uint)(*(short *)(iVar5 + 0x4f) * local_154) >> 0x10);
              iVar8 = DAT_0053d6c4;
            }
            else if (local_148 < DAT_0053d6c4) {
              local_158 = ((DAT_0053d6c4 - iVar8) * 0x10000) / (local_148 - iVar8);
              local_144 = ((local_144 - iVar6) * local_158 >> 0x10) + iVar6;
              *(short *)(iVar5 + 0x4f) =
                   (short)((uint)(*(short *)(iVar5 + 0x4f) * local_158) >> 0x10);
              local_148 = DAT_0053d6c4;
            }
            local_14c = DAT_0053c914 / iVar8;
            local_150 = DAT_0053c914 / local_148;
            iVar6 = (local_14c * iVar6 >> 0xf) + (int)DAT_0053d6cc;
            local_144 = (local_150 * local_144 >> 0xf) + (int)DAT_0053d6cc;
            if (local_144 < iVar6) {
              if ((DAT_0053d6d8 < local_144) || (iVar6 < DAT_0053d6d0)) {
                *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
            else if ((DAT_0053d6d8 < iVar6) || (local_144 < DAT_0053d6d0)) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
              local_15c = *(short *)(iVar5 + 0x53) - DAT_0053d6f8;
              local_160 = *(short *)(iVar5 + 0x59) - DAT_0053d6f8;
              if (*(short *)(iVar5 + 0x5d) == 1) {
                *(int *)(iVar5 + 0x41) = local_144;
                *(int *)(iVar5 + 0x1d) = local_144;
                *(int *)(iVar5 + 0x35) = iVar6;
                *(int *)(iVar5 + 0x29) = iVar6;
                *(int *)(iVar5 + 0x21) = (local_150 * local_15c >> 0xf) + (int)DAT_0053d6ce;
                *(int *)(iVar5 + 0x45) = (local_150 * local_160 >> 0xf) + (int)DAT_0053d6ce;
                *(int *)(iVar5 + 0x2d) = (local_14c * local_15c >> 0xf) + (int)DAT_0053d6ce;
                *(int *)(iVar5 + 0x39) = (local_14c * local_160 >> 0xf) + (int)DAT_0053d6ce;
              }
              else {
                *(int *)(iVar5 + 0x41) = iVar6;
                *(int *)(iVar5 + 0x1d) = iVar6;
                *(int *)(iVar5 + 0x35) = local_144;
                *(int *)(iVar5 + 0x29) = local_144;
                *(int *)(iVar5 + 0x21) = (local_14c * local_15c >> 0xf) + (int)DAT_0053d6ce;
                *(int *)(iVar5 + 0x45) = (local_14c * local_160 >> 0xf) + (int)DAT_0053d6ce;
                *(int *)(iVar5 + 0x2d) = (local_150 * local_15c >> 0xf) + (int)DAT_0053d6ce;
                *(int *)(iVar5 + 0x39) = (local_150 * local_160 >> 0xf) + (int)DAT_0053d6ce;
              }
              iVar6 = iVar8 + -0xfa;
              if (iVar8 + -0xfa < DAT_0053d6c4) {
                iVar6 = DAT_0053d6c4;
              }
              local_148 = local_148 + -0xfa;
              if (local_148 < DAT_0053d6c4) {
                local_148 = DAT_0053d6c4;
              }
              *(int *)(iVar5 + 0x49) = iVar6;
              *(int *)(iVar5 + 0x25) = iVar6;
              *(int *)(iVar5 + 0x3d) = local_148;
              *(int *)(iVar5 + 0x31) = local_148;
              *(short *)(iVar5 + 0x17) = (short)(iVar6 + local_148 >> 1) - (DAT_0053c910 >> 2);
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
            FUN_0041ff10(iVar5);
          }
        }
      }
    }
    local_210 = local_210 + 1;
  }
  local_210 = &DAT_004fd670;
  for (local_9e = 0; local_9e < DAT_00501670; local_9e = local_9e + 1) {
    uVar2 = *local_210;
    local_164 = (uVar2 & 0x3f) * (int)param_1[0x3a7];
    local_168 = ((int)uVar2 >> 6) * (int)param_1[0x3a7];
    iVar5 = *(int *)(param_1 + (uint)(byte)(&DAT_004f5f9c)[uVar2] * 2 + 0x187);
    local_174 = *(short *)(iVar5 + 0x18);
    local_16c = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))();
    local_178 = *(int *)(param_1 + (uint)(byte)(&DAT_004f70a0)[uVar2] * 2 + 0x187);
    local_17a = *(short *)(local_178 + 0x1f);
    if (*(short *)(local_178 + 0x18) == 0xc) {
      local_180 = 5000;
    }
    else {
      local_180 = -5;
    }
    uVar11 = (undefined2)uVar2;
    if (((local_174 == 3) || (local_174 == 10)) || (local_174 == 6)) {
      *(int *)(iVar5 + 0x31) = (local_3c >> 1) + local_164;
      *(int *)(iVar5 + 0x35) = local_180 - local_17a;
      *(int *)(iVar5 + 0x39) = (local_3c >> 1) + local_168;
      local_278 = *(undefined4 *)(iVar5 + 0x39);
      local_27c = *(undefined4 *)(iVar5 + 0x35);
      local_280 = *(int *)(iVar5 + 0x31);
      local_18c = local_280;
      local_188 = local_27c;
      local_184 = local_278;
      local_16c = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))();
      local_16e = *(undefined2 *)(iVar5 + 0x1b);
      local_172 = **(short **)(iVar5 + 0x65) * *(short *)(iVar5 + 0x1d);
      local_170 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      local_194 = FUN_00435120(0x4d);
      if (local_194 == (uint *)0x0) {
        local_190 = (undefined4 *)0x0;
      }
      else {
        local_190 = FUN_00424a88(local_194,&local_280,local_170,local_172,(char)local_16e,local_16c,
                                 uVar11);
      }
      if ((*(byte *)((int)local_190 + 0x16) & 1) == 0) {
        if (local_190 != (undefined4 *)0x0) {
          (**(code **)*local_190)();
        }
      }
      else {
        (&DAT_004fa730)[DAT_004fa72c] = local_190;
        DAT_004fa72c = DAT_004fa72c + 1;
        local_198 = local_190;
      }
    }
    else if (local_174 == 9) {
      local_16e = *(undefined2 *)(iVar5 + 0x1b);
      local_170 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      local_172 = **(short **)(iVar5 + 0x65) * *(short *)(iVar5 + 0x1d);
      local_284 = *(undefined4 *)(iVar5 + 0x39);
      local_288 = local_180 - local_17a;
      local_28c = *(int *)(iVar5 + 0x31);
      local_1a4 = local_28c;
      local_1a0 = local_288;
      local_19c = local_284;
      local_1ac = FUN_00435120(0x4d);
      if (local_1ac == (uint *)0x0) {
        local_1a8 = (undefined4 *)0x0;
      }
      else {
        local_1a8 = FUN_00424a88(local_1ac,&local_28c,local_170,local_172,(char)local_16e,local_16c,
                                 uVar11);
      }
      if ((*(byte *)((int)local_1a8 + 0x16) & 1) == 0) {
        if (local_1a8 != (undefined4 *)0x0) {
          (**(code **)*local_1a8)();
        }
      }
      else {
        (&DAT_004fa730)[DAT_004fa72c] = local_1a8;
        DAT_004fa72c = DAT_004fa72c + 1;
        local_1b0 = local_1a8;
      }
    }
    iVar5 = *(int *)(param_1 + (uint)(byte)(&DAT_004f4e98)[uVar2] * 2 + 0x187);
    local_174 = *(short *)(iVar5 + 0x18);
    if (local_174 != 0) {
      local_16c = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))();
      local_16e = *(undefined2 *)(iVar5 + 0x1b);
      local_170 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      local_172 = **(short **)(iVar5 + 0x65) * *(short *)(iVar5 + 0x1d);
      if (local_174 == 9) {
        local_290 = *(undefined4 *)(iVar5 + 0x39);
        local_294 = *(int *)(iVar5 + 0x35) + (int)*(short *)(iVar5 + 0x1f);
        local_298 = *(int *)(iVar5 + 0x31);
        local_1bc = local_298;
        local_1b8 = local_294;
        local_1b4 = local_290;
        local_1c4 = FUN_00435120(0x4d);
        if (local_1c4 == (uint *)0x0) {
          local_1c0 = (undefined4 *)0x0;
        }
        else {
          local_1c0 = FUN_00424a88(local_1c4,&local_298,local_170,local_172,(char)local_16e,
                                   local_16c,uVar11);
        }
        if ((*(byte *)((int)local_1c0 + 0x16) & 1) == 0) {
          if (local_1c0 != (undefined4 *)0x0) {
            (**(code **)*local_1c0)();
          }
        }
        else {
          (&DAT_004fa730)[DAT_004fa72c] = local_1c0;
          DAT_004fa72c = DAT_004fa72c + 1;
          local_1c8 = local_1c0;
        }
      }
      else if (local_174 == 3) {
        local_29c = (local_3c >> 1) + local_168;
        local_2a0 = local_180 - local_17a;
        local_2a4 = (local_3c >> 1) + local_164;
        local_1d4 = local_2a4;
        local_1d0 = local_2a0;
        local_1cc = local_29c;
        local_1dc = FUN_00435120(0x4d);
        if (local_1dc == (uint *)0x0) {
          local_1d8 = (undefined4 *)0x0;
        }
        else {
          local_1d8 = FUN_00424a88(local_1dc,&local_2a4,local_170,local_172,(char)local_16e,
                                   local_16c,uVar11);
        }
        if ((*(byte *)((int)local_1d8 + 0x16) & 1) == 0) {
          if (local_1d8 != (undefined4 *)0x0) {
            (**(code **)*local_1d8)();
          }
        }
        else {
          (&DAT_004fa730)[DAT_004fa72c] = local_1d8;
          DAT_004fa72c = DAT_004fa72c + 1;
          local_1e0 = local_1d8;
        }
      }
    }
    local_210 = local_210 + 1;
  }
  local_1e2 = param_1[0x3a9];
  for (local_1e3 = 0; (0 < local_1e2 && (local_1e3 != 0xff)); local_1e3 = local_1e3 + 1) {
    iVar5 = *(int *)(param_1 + (uint)local_1e3 * 2 + 0x187);
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x1c) & 0x10) != 0)) {
      local_1e2 = local_1e2 + -1;
      local_2a8 = *(undefined4 *)(iVar5 + 0x39);
      local_2ac = *(undefined4 *)(iVar5 + 0x35);
      local_2b0 = *(int *)(iVar5 + 0x31);
      local_1f0 = local_2b0;
      local_1ec = local_2ac;
      local_1e8 = local_2a8;
      local_1f2 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      lVar3 = (longlong)(int)**(short **)(iVar5 + 0x65) * (longlong)(int)*(short *)(iVar5 + 0x1d);
      local_1f4 = (short)lVar3;
      local_1f6 = *(undefined2 *)(iVar5 + 0x1b);
      local_1fc = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))
                            (*(int *)(iVar5 + 0x14),(int)((ulonglong)lVar3 >> 0x20),
                             CONCAT22((short)((uint)*(short **)(iVar5 + 0x65) >> 0x10),local_1f6),
                             iVar5);
      sVar4 = *(short *)(iVar5 + 0x39);
      local_200 = *(short *)(iVar5 + 0x31);
      if (local_200 < 0) {
        local_200 = 0;
      }
      if (*param_1 + -1 < (int)local_200) {
        local_200 = *param_1 + -1;
      }
      if (sVar4 < 0) {
        sVar4 = 0;
      }
      if (param_1[2] + -1 < (int)sVar4) {
        sVar4 = param_1[2] + -1;
      }
      local_1fe = sVar4 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_200;
      local_208 = FUN_00435120(0x4d);
      if (local_208 == (uint *)0x0) {
        local_204 = (undefined4 *)0x0;
      }
      else {
        local_204 = FUN_00424a88(local_208,&local_2b0,local_1f2,local_1f4,(char)local_1f6,local_1fc,
                                 local_1fe);
      }
      if ((*(byte *)((int)local_204 + 0x16) & 1) == 0) {
        if (local_204 != (undefined4 *)0x0) {
          (**(code **)*local_204)();
        }
      }
      else {
        (&DAT_004fa730)[DAT_004fa72c] = local_204;
        DAT_004fa72c = DAT_004fa72c + 1;
        local_20c = local_204;
      }
    }
  }
  FUN_004200d4();
  *in_FS_OFFSET = local_28;
  return;
}

