/* Ghidra address: 00417d38; FUN_00417d38 */

void __stdcall FUN_00417d38(short *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  short *psVar12;
  undefined4 *puVar13;
  int local_768;
  int local_764;
  int local_760;
  int local_75c;
  int local_758;
  int local_754;
  int local_750;
  int local_74c;
  int local_748;
  int local_744;
  int local_740;
  int local_73c;
  int local_738;
  int local_734;
  int local_730;
  int local_72c;
  int local_728;
  int local_724;
  int local_720;
  int local_71c;
  int local_718;
  int local_714;
  int local_710;
  int local_70c;
  int local_708;
  int local_704;
  int local_700;
  undefined4 *local_6fc [320];
  byte *local_1fc;
  byte *local_1f8;
  undefined *local_1f4;
  undefined *local_1f0;
  undefined4 *local_1ec;
  uint *local_1e8;
  uint *local_1e4;
  short local_1de;
  short local_1dc;
  byte local_1d9;
  int local_1d8;
  short local_1d4;
  short local_1d2;
  byte local_1cf;
  short local_1ce;
  short local_1cc;
  byte local_1c9;
  int local_1c8;
  short local_1c4;
  short local_1c2;
  byte local_1bf;
  short local_1be;
  short local_1bc;
  byte local_1b9;
  uint *local_1b8;
  uint *local_1b4;
  short local_1ae;
  short local_1ac;
  byte local_1a9;
  int local_1a8;
  short local_1a4;
  short local_1a2;
  byte local_19f;
  short local_19e;
  short local_19c;
  byte local_199;
  int local_198;
  short local_194;
  short local_192;
  byte local_18f;
  short local_18e;
  short local_18c;
  byte local_189;
  int local_188;
  int local_184;
  int local_180;
  uint *local_17c;
  int local_178;
  int local_174;
  int local_170;
  uint *local_16c;
  short local_166;
  int local_164;
  int local_160;
  int local_15c;
  short local_158;
  byte local_155;
  uint *local_154;
  short local_14e;
  int local_14c;
  int local_148;
  int local_144;
  short local_140;
  byte local_13d;
  uint *local_13c;
  short local_136;
  int local_134;
  int local_130;
  int local_12c;
  short local_128;
  byte local_125;
  uint *local_124;
  short local_11e;
  int local_11c;
  int local_118;
  int local_114;
  short local_10e;
  byte local_10b;
  short local_10a;
  uint *local_108;
  short local_102;
  short local_100;
  byte local_fd;
  uint *local_fc;
  short local_f6;
  short local_f4;
  byte local_f1;
  uint *local_f0;
  short local_ea;
  short local_e8;
  byte local_e5;
  uint *local_e4;
  short local_de;
  short local_dc;
  byte local_d9;
  short local_d8;
  undefined2 local_d6;
  int local_d4;
  int local_d0;
  int local_cc;
  short local_c8;
  short local_c6;
  uint *local_c4;
  short local_c0;
  short local_be;
  short local_bc;
  byte local_b9;
  uint *local_b8;
  short local_b4;
  short local_b2;
  short local_b0;
  byte local_ad;
  uint *local_ac;
  short local_a8;
  short local_a6;
  short local_a4;
  byte local_a1;
  uint *local_a0;
  short local_9a;
  short local_98;
  short local_96;
  byte local_93;
  short local_92;
  int local_90;
  int local_8c;
  int local_88;
  short local_82;
  int local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  ushort local_66;
  int local_64;
  int local_60;
  int local_5c;
  short local_56;
  short local_54;
  short local_52;
  int local_50;
  int local_4c;
  short local_46;
  int local_44;
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  ushort local_36;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  byte local_21;
  int local_20;
  int local_1c;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  byte local_d;
  int local_c;
  short local_8;
  short local_6;
  
  local_6 = param_1[2];
  local_8 = *param_1;
  local_c = (int)param_1[0x3a7];
  local_10 = local_8 + -1;
  FUN_00429fc4((undefined4 *)&DAT_004f81a4,0,0x1104);
  FUN_00429fc4((undefined4 *)&DAT_004f4e98,0x20,0x1104);
  for (sVar10 = 0; sVar10 < local_6 >> 1; sVar10 = sVar10 + 1) {
    local_12 = sVar10 * local_8;
    local_14 = (local_10 - sVar10) * local_8;
    sVar9 = 0;
    local_1fc = &DAT_004f70a0 + local_14;
    local_1f8 = &DAT_004f70a0 + local_12;
    local_1f4 = &DAT_004f5f9c + local_14;
    local_1f0 = &DAT_004f5f9c + local_12;
    if (0 < local_8) {
      do {
        sVar9 = sVar9 + 1;
        uVar1 = *local_1f0;
        *local_1f0 = *local_1f4;
        *local_1f4 = uVar1;
        local_d = *local_1f8;
        *local_1f8 = *local_1fc;
        *local_1fc = local_d;
        local_1fc = local_1fc + 1;
        local_1f8 = local_1f8 + 1;
        local_1f4 = local_1f4 + 1;
        local_1f0 = local_1f0 + 1;
      } while (sVar9 < local_8);
    }
  }
  sVar10 = 0;
  if (0 < local_6) {
    do {
      sVar9 = 0;
      if (0 < local_8) {
        do {
          local_16 = sVar9;
          if (sVar9 < 0) {
            local_16 = 0;
          }
          if (*param_1 + -1 < (int)local_16) {
            local_16 = *param_1 + -1;
          }
          sVar3 = sVar10;
          if (sVar10 < 0) {
            sVar3 = 0;
          }
          if (param_1[2] + -1 < (int)sVar3) {
            sVar3 = param_1[2] + -1;
          }
          local_16 = local_16 + sVar3 * (short)*(undefined4 *)(param_1 + 0x25b6);
          local_d = (&DAT_004f5f9c)[local_16];
          if (*(int *)(param_1 + (uint)local_d * 2 + 0x187) == 0) {
            pcVar5 = FUN_00404d88(0x31);
            FUN_0040e524(pcVar5);
          }
          local_d = (&DAT_004f70a0)[local_16];
          if (*(int *)(param_1 + (uint)local_d * 2 + 0x187) == 0) {
            pcVar5 = FUN_00404d88(0x32);
            FUN_0040e524(pcVar5);
          }
          iVar6 = *(int *)(param_1 + (uint)(byte)(&DAT_004f5f9c)[local_16] * 2 + 0x187);
          sVar3 = *(short *)(iVar6 + 0x18);
          if ((sVar3 == 3) && (*(short *)(iVar6 + 0x75) == 99)) {
            param_1[0x388] = param_1[0x388] + *(short *)(iVar6 + 0x77);
          }
          iVar11 = local_c >> 1;
          if ((sVar3 == 1) || (sVar3 == 9)) {
            if (sVar3 == 9) {
              if ((*(short *)(iVar6 + 0xfb) == 0) &&
                 ((&DAT_004f4e98)[local_16] = (&DAT_004f5f9c)[local_16],
                 *(short *)(iVar6 + 0xfd) == 0)) {
                DAT_00439c00 = DAT_00439c00 + 1;
              }
            }
            else {
              (&DAT_004f4e98)[local_16] = (&DAT_004f5f9c)[local_16];
            }
            (&DAT_004f5f9c)[local_16] = 0x20;
            local_1c = *(int *)(param_1 + (uint)(byte)(&DAT_004f70a0)[local_16] * 2 + 0x187);
            *(int *)(iVar6 + 0x31) = sVar9 * local_c + iVar11;
            *(int *)(iVar6 + 0x35) =
                 -((int)*(short *)(local_1c + 0x1f) + (int)*(short *)(iVar6 + 0x1f));
            *(int *)(iVar6 + 0x39) = sVar10 * local_c + iVar11;
            if (sVar3 == 1) {
              *(short *)(iVar6 + 0xbd) = *(short *)(iVar6 + 0x35) + -0x1a;
              *(short *)(iVar6 + 0xbb) = *(short *)(iVar6 + 0x35) + 0x1a;
              puVar7 = (undefined4 *)(iVar6 + 0x31);
              psVar12 = param_1 + 0x38b;
              for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
                *(undefined4 *)psVar12 = *puVar7;
                puVar7 = puVar7 + 1;
                psVar12 = psVar12 + 2;
              }
              *(int *)(param_1 + 0x3a5) = iVar6;
            }
            else if (sVar3 == 9) {
              *(undefined2 *)(iVar6 + 0xbd) = *(undefined2 *)(iVar6 + 0x35);
              *(undefined2 *)(iVar6 + 0xbb) = *(undefined2 *)(iVar6 + 0x35);
              puVar7 = (undefined4 *)(iVar6 + 0x31);
              puVar13 = (undefined4 *)(iVar6 + 0xc1);
              for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar13 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar13 = puVar13 + 1;
              }
            }
          }
          if (*(short *)(*(int *)(param_1 + (uint)(byte)(&DAT_004f70a0)[local_16] * 2 + 0x187) +
                        0x18) == 0xd) {
            local_20 = *(int *)(param_1 + (uint)(byte)(&DAT_004f70a0)[local_16] * 2 + 0x187);
            *(int *)(local_20 + 0x31) = sVar9 * local_c + iVar11;
            *(int *)(local_20 + 0x35) = -(int)*(short *)(local_20 + 0x1f);
            *(int *)(local_20 + 0x39) = sVar10 * local_c + iVar11;
          }
          sVar9 = sVar9 + 1;
        } while (sVar9 < local_8);
      }
      sVar10 = sVar10 + 1;
    } while (sVar10 < local_6);
  }
  local_21 = 0;
  do {
    local_28 = *(int *)(param_1 + (uint)local_21 * 2 + 0x187);
    if ((local_28 != 0) && (*(short *)(local_28 + 0x18) == 0xd)) {
      iVar6 = FUN_00410584(local_28);
      DAT_00439c00 = DAT_00439c00 + (short)iVar6;
    }
    local_21 = local_21 + 1;
  } while (local_21 != 0xff);
  sVar10 = 0;
  *(undefined4 *)(param_1 + 0x3aa) = *(undefined4 *)(param_1 + 0x221);
  local_30 = 0;
  local_21 = 0xff;
  if (0 < local_6) {
    do {
      local_2c = 0;
      sVar9 = 0;
      if (0 < local_8) {
        do {
          sVar3 = 0;
          local_3e = sVar9;
          if (sVar9 < 0) {
            local_3e = 0;
          }
          if (*param_1 + -1 < (int)local_3e) {
            local_3e = *param_1 + -1;
          }
          sVar4 = sVar10;
          if (sVar10 < 0) {
            sVar4 = 0;
          }
          if (param_1[2] + -1 < (int)sVar4) {
            sVar4 = param_1[2] + -1;
          }
          local_3c = (short)((int)sVar4 * *(int *)(param_1 + 0x25b6)) + local_3e;
          local_44 = *(int *)(param_1 + (uint)(byte)(&DAT_004f5f9c)[local_3c] * 2 + 0x187);
          local_46 = *(short *)(local_44 + 0x18);
          local_34 = (**(code **)(*(int *)(local_44 + 0x14) + 0x10))();
          local_36 = *(ushort *)(local_44 + 0x1b);
          local_38 = (**(code **)(*(int *)(local_44 + 0x14) + 0xc))();
          local_3a = **(short **)(local_44 + 0x65) * *(short *)(local_44 + 0x1d);
          if ((local_36 & 0x800) == 0) {
            local_4c = 0;
          }
          else {
            local_4c = local_44 + 0x65;
          }
          local_50 = *(int *)(param_1 + (uint)(byte)(&DAT_004f70a0)[local_3c] * 2 + 0x187);
          local_52 = *(short *)(local_50 + 0x1f);
          local_54 = *(short *)(local_50 + 0x75);
          local_56 = local_52 + local_54;
          local_5c = local_30;
          local_704 = -(int)local_52;
          local_64 = local_2c;
          local_708 = local_2c;
          local_700 = local_30;
          local_66 = *(ushort *)(local_50 + 0x1b);
          local_60 = local_704;
          local_6c = (**(code **)(*(int *)(local_50 + 0x14) + 0x28))();
          local_70 = (**(code **)(*(int *)(local_50 + 0x14) + 0x24))();
          if (*(short *)(local_50 + 0x18) == 0xc) {
            local_80 = local_50 + 0x83;
          }
          else if ((local_66 & 0x800) == 0) {
            local_80 = 0;
          }
          else {
            local_80 = local_50 + 0x65;
          }
          local_7c = 0;
          local_82 = local_38 / *(short *)(local_44 + 0x1d);
          if (-1 < *(short *)(local_50 + 0x75)) {
            local_88 = local_30;
            local_710 = -(int)local_56;
            local_90 = local_2c;
            local_714 = local_2c;
            local_70c = local_30;
            local_96 = sVar10 + -1;
            local_98 = sVar9;
            if (sVar9 < 0) {
              local_98 = 0;
            }
            if (*param_1 + -1 < (int)local_98) {
              local_98 = *param_1 + -1;
            }
            if (local_96 < 0) {
              local_96 = 0;
            }
            if (param_1[2] + -1 < (int)local_96) {
              local_96 = param_1[2] + -1;
            }
            local_93 = (&DAT_004f70a0)
                       [(short)(local_96 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_98)];
            local_92 = *(short *)(*(int *)(param_1 + (uint)local_93 * 2 + 0x187) + 0x75) +
                       *(short *)(*(int *)(param_1 + (uint)local_93 * 2 + 0x187) + 0x1f);
            local_8c = local_710;
            if (local_56 < local_92) {
              iVar6 = (int)*(short *)(local_50 + 0x1d);
              local_9a = (short)(((int)local_92 - (int)local_56) / iVar6);
              local_74 = (**(code **)(*(int *)(local_50 + 0x14) + 0x34))
                                   (*(int *)(local_50 + 0x14),
                                    ((int)local_92 - (int)local_56) % iVar6,iVar6,local_50,0);
              local_a0 = FUN_00435120(0x69);
              if (local_a0 == (uint *)0x0) {
                local_6fc[0] = (undefined4 *)0x0;
              }
              else {
                local_6fc[0] = FUN_00424748(local_a0,(short *)&local_714,(local_92 - local_56) + 1,
                                            (short)local_c + 2,0,(char)local_66,local_74,local_3c,0,
                                            local_9a,local_7c);
              }
              sVar3 = 1;
            }
            local_a6 = sVar9 + -1;
            if (local_a6 < 0) {
              local_a6 = 0;
            }
            if (*param_1 + -1 < (int)local_a6) {
              local_a6 = *param_1 + -1;
            }
            local_a4 = sVar10;
            if (sVar10 < 0) {
              local_a4 = 0;
            }
            if (param_1[2] + -1 < (int)local_a4) {
              local_a4 = param_1[2] + -1;
            }
            local_a1 = (&DAT_004f70a0)
                       [(short)(local_a4 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_a6)];
            local_92 = *(short *)(*(int *)(param_1 + (uint)local_a1 * 2 + 0x187) + 0x75) +
                       *(short *)(*(int *)(param_1 + (uint)local_a1 * 2 + 0x187) + 0x1f);
            if (local_56 < local_92) {
              local_74 = (**(code **)(*(int *)(local_50 + 0x14) + 0x34))();
              local_a8 = (short)(((int)local_92 - (int)local_56) / (int)*(short *)(local_50 + 0x1d))
              ;
              local_ac = FUN_00435120(0x69);
              if (local_ac == (uint *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = FUN_00424748(local_ac,(short *)&local_714,(local_92 - local_56) + 1,
                                      (short)local_c + 2,0x5a,(char)local_66,local_74,local_3c,0,
                                      local_a8,local_7c);
              }
              local_6fc[sVar3] = puVar7;
              sVar3 = sVar3 + 1;
            }
            local_b0 = sVar10 + 1;
            local_b2 = sVar9;
            if (sVar9 < 0) {
              local_b2 = 0;
            }
            if (*param_1 + -1 < (int)local_b2) {
              local_b2 = *param_1 + -1;
            }
            if (local_b0 < 0) {
              local_b0 = 0;
            }
            if (param_1[2] + -1 < (int)local_b0) {
              local_b0 = param_1[2] + -1;
            }
            local_ad = (&DAT_004f70a0)
                       [(short)(local_b0 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_b2)];
            local_92 = *(short *)(*(int *)(param_1 + (uint)local_ad * 2 + 0x187) + 0x75) +
                       *(short *)(*(int *)(param_1 + (uint)local_ad * 2 + 0x187) + 0x1f);
            if (local_56 < local_92) {
              iVar6 = (int)*(short *)(local_50 + 0x1d);
              local_b4 = (short)(((int)local_92 - (int)local_56) / iVar6);
              local_74 = (**(code **)(*(int *)(local_50 + 0x14) + 0x34))
                                   (*(int *)(local_50 + 0x14),
                                    ((int)local_92 - (int)local_56) % iVar6,iVar6,local_50,0);
              local_b8 = FUN_00435120(0x69);
              if (local_b8 == (uint *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = FUN_00424748(local_b8,(short *)&local_714,(local_92 - local_56) + 1,
                                      (short)local_c + 2,0xb4,(char)local_66,local_74,local_3c,0,
                                      local_b4,local_7c);
              }
              local_6fc[sVar3] = puVar7;
              sVar3 = sVar3 + 1;
            }
            local_be = sVar9 + 1;
            if (local_be < 0) {
              local_be = 0;
            }
            if (*param_1 + -1 < (int)local_be) {
              local_be = *param_1 + -1;
            }
            local_bc = sVar10;
            if (sVar10 < 0) {
              local_bc = 0;
            }
            if (param_1[2] + -1 < (int)local_bc) {
              local_bc = param_1[2] + -1;
            }
            local_b9 = (&DAT_004f70a0)
                       [(short)(local_bc * (short)*(undefined4 *)(param_1 + 0x25b6) + local_be)];
            local_92 = *(short *)(*(int *)(param_1 + (uint)local_b9 * 2 + 0x187) + 0x75) +
                       *(short *)(*(int *)(param_1 + (uint)local_b9 * 2 + 0x187) + 0x1f);
            if (local_56 < local_92) {
              iVar6 = (int)*(short *)(local_50 + 0x1d);
              local_c0 = (short)(((int)local_92 - (int)local_56) / iVar6);
              local_74 = (**(code **)(*(int *)(local_50 + 0x14) + 0x34))
                                   (*(int *)(local_50 + 0x14),
                                    ((int)local_92 - (int)local_56) % iVar6,iVar6,local_50,1);
              local_c4 = FUN_00435120(0x69);
              if (local_c4 == (uint *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = FUN_00424748(local_c4,(short *)&local_714,(local_92 - local_56) + 1,
                                      (short)local_c + 2,0x10e,(char)local_66,local_74,local_3c,0,
                                      local_c0,local_7c);
              }
              local_6fc[sVar3] = puVar7;
              sVar3 = sVar3 + 1;
            }
          }
          if (*(short *)(local_44 + 0x18) == 2) {
            local_c6 = local_54;
            local_c8 = local_54 / *(short *)(local_44 + 0x1d);
            local_cc = local_30;
            local_71c = -(int)local_52;
            local_d4 = local_2c;
            local_720 = local_2c;
            local_718 = local_30;
            local_d6 = 0;
            local_d8 = **(short **)(local_50 + 0x65) * *(short *)(local_50 + 0x1d);
            local_dc = sVar10 + -1;
            local_de = sVar9;
            if (sVar9 < 0) {
              local_de = 0;
            }
            if (*param_1 + -1 < (int)local_de) {
              local_de = *param_1 + -1;
            }
            if (local_dc < 0) {
              local_dc = 0;
            }
            if (param_1[2] + -1 < (int)local_dc) {
              local_dc = param_1[2] + -1;
            }
            local_d9 = (&DAT_004f5f9c)
                       [(short)(local_dc * (short)*(undefined4 *)(param_1 + 0x25b6) + local_de)];
            local_d0 = local_71c;
            if (*(short *)(*(int *)(param_1 + (uint)local_d9 * 2 + 0x187) + 0x18) != 2) {
              local_34 = (**(code **)(*(int *)(local_44 + 0x14) + 0x14))();
              local_e4 = FUN_00435120(0x69);
              if (local_e4 == (uint *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = FUN_00424748(local_e4,(short *)&local_720,local_c6,local_d8,0,
                                      (char)local_36,local_34,local_3c,local_d6,local_c8,local_4c);
              }
              local_6fc[sVar3] = puVar7;
              sVar3 = sVar3 + 1;
            }
            local_ea = sVar9 + -1;
            if (local_ea < 0) {
              local_ea = 0;
            }
            if (*param_1 + -1 < (int)local_ea) {
              local_ea = *param_1 + -1;
            }
            local_e8 = sVar10;
            if (sVar10 < 0) {
              local_e8 = 0;
            }
            if (param_1[2] + -1 < (int)local_e8) {
              local_e8 = param_1[2] + -1;
            }
            local_e5 = (&DAT_004f5f9c)
                       [(short)(local_e8 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_ea)];
            if (*(short *)(*(int *)(param_1 + (uint)local_e5 * 2 + 0x187) + 0x18) != 2) {
              local_34 = (**(code **)(*(int *)(local_44 + 0x14) + 0x14))();
              local_f0 = FUN_00435120(0x69);
              if (local_f0 == (uint *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = FUN_00424748(local_f0,(short *)&local_720,local_c6,local_d8,0x5a,
                                      (char)local_36,local_34,local_3c,local_d6,local_c8,local_4c);
              }
              local_6fc[sVar3] = puVar7;
              sVar3 = sVar3 + 1;
            }
            local_f4 = sVar10 + 1;
            local_f6 = sVar9;
            if (sVar9 < 0) {
              local_f6 = 0;
            }
            if (*param_1 + -1 < (int)local_f6) {
              local_f6 = *param_1 + -1;
            }
            if (local_f4 < 0) {
              local_f4 = 0;
            }
            if (param_1[2] + -1 < (int)local_f4) {
              local_f4 = param_1[2] + -1;
            }
            local_f1 = (&DAT_004f5f9c)
                       [(short)(local_f4 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_f6)];
            if (*(short *)(*(int *)(param_1 + (uint)local_f1 * 2 + 0x187) + 0x18) != 2) {
              local_34 = (**(code **)(*(int *)(local_44 + 0x14) + 0x14))();
              local_fc = FUN_00435120(0x69);
              if (local_fc == (uint *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = FUN_00424748(local_fc,(short *)&local_720,local_c6,local_d8,0xb4,
                                      (char)local_36,local_34,local_3c,local_d6,local_c8,local_4c);
              }
              local_6fc[sVar3] = puVar7;
              sVar3 = sVar3 + 1;
            }
            local_102 = sVar9 + 1;
            if (local_102 < 0) {
              local_102 = 0;
            }
            if (*param_1 + -1 < (int)local_102) {
              local_102 = *param_1 + -1;
            }
            local_100 = sVar10;
            if (sVar10 < 0) {
              local_100 = 0;
            }
            if (param_1[2] + -1 < (int)local_100) {
              local_100 = param_1[2] + -1;
            }
            local_fd = (&DAT_004f5f9c)
                       [(short)(local_100 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_102)];
            if (*(short *)(*(int *)(param_1 + (uint)local_fd * 2 + 0x187) + 0x18) != 2) {
              local_34 = (**(code **)(*(int *)(local_44 + 0x14) + 0x14))();
              local_108 = FUN_00435120(0x69);
              if (local_108 == (uint *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = FUN_00424748(local_108,(short *)&local_720,local_c6,local_d8,0x10e,
                                      (char)local_36,local_34,local_3c,local_d6,local_c8,local_4c);
              }
              local_6fc[sVar3] = puVar7;
              sVar3 = sVar3 + 1;
            }
          }
          sVar4 = sVar10 + -1;
          local_10e = sVar9;
          if (sVar9 < 0) {
            local_10e = 0;
          }
          if (*param_1 + -1 < (int)local_10e) {
            local_10e = *param_1 + -1;
          }
          if (sVar4 < 0) {
            sVar4 = 0;
          }
          if (param_1[2] + -1 < (int)sVar4) {
            sVar4 = param_1[2] + -1;
          }
          local_10b = (&DAT_004f70a0)
                      [(short)(sVar4 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_10e)];
          local_10a = *(short *)(*(int *)(param_1 + (uint)local_10b * 2 + 0x187) + 0x1f);
          if (local_10a < local_52) {
            local_724 = local_30 + -1;
            local_728 = -(int)local_10a;
            local_72c = local_2c + -1;
            iVar6 = (int)*(short *)(local_50 + 0x1d);
            local_11e = (short)(((int)local_52 - (int)local_10a) / iVar6);
            local_11c = local_72c;
            local_118 = local_728;
            local_114 = local_724;
            local_78 = (**(code **)(*(int *)(local_50 + 0x14) + 0x38))
                                 (*(int *)(local_50 + 0x14),((int)local_52 - (int)local_10a) % iVar6
                                  ,iVar6,local_50,0);
            local_124 = FUN_00435120(0x69);
            if (local_124 == (uint *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7 = FUN_00424748(local_124,(short *)&local_72c,(local_52 - local_10a) + 1,
                                    (short)local_c + 2,0,(char)local_66,local_78,local_3c,0,
                                    local_11e,local_80);
            }
            local_6fc[sVar3] = puVar7;
            sVar3 = sVar3 + 1;
          }
          local_128 = sVar9 + -1;
          if (local_128 < 0) {
            local_128 = 0;
          }
          if (*param_1 + -1 < (int)local_128) {
            local_128 = *param_1 + -1;
          }
          sVar4 = sVar10;
          if (sVar10 < 0) {
            sVar4 = 0;
          }
          if (param_1[2] + -1 < (int)sVar4) {
            sVar4 = param_1[2] + -1;
          }
          local_125 = (&DAT_004f70a0)
                      [(short)(sVar4 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_128)];
          local_10a = *(short *)(*(int *)(param_1 + (uint)local_125 * 2 + 0x187) + 0x1f);
          if (local_10a < local_52) {
            local_730 = local_30 + -1;
            local_734 = -(int)local_10a;
            local_738 = local_2c + -1;
            iVar6 = (int)*(short *)(local_50 + 0x1d);
            local_136 = (short)(((int)local_52 - (int)local_10a) / iVar6);
            local_134 = local_738;
            local_130 = local_734;
            local_12c = local_730;
            local_78 = (**(code **)(*(int *)(local_50 + 0x14) + 0x38))
                                 (*(int *)(local_50 + 0x14),((int)local_52 - (int)local_10a) % iVar6
                                  ,iVar6,local_50,1);
            local_13c = FUN_00435120(0x69);
            if (local_13c == (uint *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7 = FUN_00424748(local_13c,(short *)&local_738,(local_52 - local_10a) + 1,
                                    (short)local_c + 2,0x5a,(char)local_66,local_78,local_3c,0,
                                    local_136,local_80);
            }
            local_6fc[sVar3] = puVar7;
            sVar3 = sVar3 + 1;
          }
          sVar4 = sVar10 + 1;
          local_140 = sVar9;
          if (sVar9 < 0) {
            local_140 = 0;
          }
          if (*param_1 + -1 < (int)local_140) {
            local_140 = *param_1 + -1;
          }
          if (sVar4 < 0) {
            sVar4 = 0;
          }
          if (param_1[2] + -1 < (int)sVar4) {
            sVar4 = param_1[2] + -1;
          }
          local_13d = (&DAT_004f70a0)
                      [(short)(sVar4 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_140)];
          local_10a = *(short *)(*(int *)(param_1 + (uint)local_13d * 2 + 0x187) + 0x1f);
          if (local_10a < local_52) {
            local_73c = local_30 + -1;
            local_740 = -(int)local_10a;
            local_744 = local_2c + -1;
            local_14c = local_744;
            local_148 = local_740;
            local_144 = local_73c;
            local_78 = (**(code **)(*(int *)(local_50 + 0x14) + 0x38))();
            local_14e = (short)(((int)local_52 - (int)local_10a) / (int)*(short *)(local_50 + 0x1d))
            ;
            local_154 = FUN_00435120(0x69);
            if (local_154 == (uint *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7 = FUN_00424748(local_154,(short *)&local_744,(local_52 - local_10a) + 1,
                                    (short)local_c + 2,0xb4,(char)local_66,local_78,local_3c,0,
                                    local_14e,local_80);
            }
            local_6fc[sVar3] = puVar7;
            sVar3 = sVar3 + 1;
          }
          local_158 = sVar9 + 1;
          if (local_158 < 0) {
            local_158 = 0;
          }
          if (*param_1 + -1 < (int)local_158) {
            local_158 = *param_1 + -1;
          }
          sVar4 = sVar10;
          if (sVar10 < 0) {
            sVar4 = 0;
          }
          if (param_1[2] + -1 < (int)sVar4) {
            sVar4 = param_1[2] + -1;
          }
          local_155 = (&DAT_004f70a0)
                      [(short)(sVar4 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_158)];
          local_10a = *(short *)(*(int *)(param_1 + (uint)local_155 * 2 + 0x187) + 0x1f);
          if (local_10a < local_52) {
            local_748 = local_30 + -1;
            local_74c = -(int)local_10a;
            local_750 = local_2c + -1;
            iVar6 = (int)*(short *)(local_50 + 0x1d);
            local_166 = (short)(((int)local_52 - (int)local_10a) / iVar6);
            local_164 = local_750;
            local_160 = local_74c;
            local_15c = local_748;
            local_78 = (**(code **)(*(int *)(local_50 + 0x14) + 0x38))
                                 (*(int *)(local_50 + 0x14),((int)local_52 - (int)local_10a) % iVar6
                                  ,iVar6,local_50,1);
            local_16c = FUN_00435120(0x69);
            if (local_16c == (uint *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7 = FUN_00424748(local_16c,(short *)&local_750,(local_52 - local_10a) + 1,
                                    (short)local_c + 2,0x10e,(char)local_66,local_78,local_3c,0,
                                    local_166,local_80);
            }
            local_6fc[sVar3] = puVar7;
            sVar3 = sVar3 + 1;
          }
          local_170 = local_30;
          local_758 = -(int)local_52;
          local_178 = local_2c;
          local_75c = local_2c;
          local_754 = local_30;
          local_174 = local_758;
          if ((*(short *)(local_44 + 0x18) != 2) && (-1 < *(short *)(local_50 + 0x75))) {
            local_17c = FUN_00435120(0x8d);
            if (local_17c == (uint *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7 = FUN_00424d28(local_17c,(undefined2 *)&local_75c,local_54,(short)local_c,0x18,
                                    local_70,local_6c,local_3c);
            }
            local_6fc[sVar3] = puVar7;
            sVar3 = sVar3 + 1;
          }
          if ((local_46 == 4) || (local_46 == 7)) {
            local_180 = local_30;
            local_764 = -(int)local_52;
            local_188 = local_2c;
            local_768 = local_2c;
            local_760 = local_30;
            local_18c = sVar10 + -1;
            local_18e = sVar9;
            if (sVar9 < 0) {
              local_18e = 0;
            }
            if (*param_1 + -1 < (int)local_18e) {
              local_18e = *param_1 + -1;
            }
            if (local_18c < 0) {
              local_18c = 0;
            }
            if (param_1[2] + -1 < (int)local_18c) {
              local_18c = param_1[2] + -1;
            }
            local_189 = (&DAT_004f5f9c)
                        [(short)(local_18c * (short)*(undefined4 *)(param_1 + 0x25b6) + local_18e)];
            local_184 = local_764;
            if (*(short *)(*(int *)(param_1 + (uint)local_189 * 2 + 0x187) + 0x18) != 2) {
              local_192 = sVar10 + -1;
              local_194 = sVar9;
              if (sVar9 < 0) {
                local_194 = 0;
              }
              if (*param_1 + -1 < (int)local_194) {
                local_194 = *param_1 + -1;
              }
              if (local_192 < 0) {
                local_192 = 0;
              }
              if (param_1[2] + -1 < (int)local_192) {
                local_192 = param_1[2] + -1;
              }
              local_18f = (&DAT_004f5f9c)
                          [(short)(local_192 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_194)
                          ];
              local_198 = *(int *)(param_1 + (uint)local_18f * 2 + 0x187);
              if ((*(short *)(local_198 + 0x18) == 4) || (*(short *)(local_198 + 0x18) == 7)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (!bVar2) {
                local_19c = sVar10 + 1;
                local_19e = sVar9;
                if (sVar9 < 0) {
                  local_19e = 0;
                }
                if (*param_1 + -1 < (int)local_19e) {
                  local_19e = *param_1 + -1;
                }
                if (local_19c < 0) {
                  local_19c = 0;
                }
                if (param_1[2] + -1 < (int)local_19c) {
                  local_19c = param_1[2] + -1;
                }
                local_199 = (&DAT_004f5f9c)
                            [(short)(local_19c * (short)*(undefined4 *)(param_1 + 0x25b6) +
                                    local_19e)];
                if (*(short *)(*(int *)(param_1 + (uint)local_199 * 2 + 0x187) + 0x18) != 2) {
                  local_1a2 = sVar10 + 1;
                  local_1a4 = sVar9;
                  if (sVar9 < 0) {
                    local_1a4 = 0;
                  }
                  if (*param_1 + -1 < (int)local_1a4) {
                    local_1a4 = *param_1 + -1;
                  }
                  if (local_1a2 < 0) {
                    local_1a2 = 0;
                  }
                  if (param_1[2] + -1 < (int)local_1a2) {
                    local_1a2 = param_1[2] + -1;
                  }
                  local_19f = (&DAT_004f5f9c)
                              [(short)(local_1a2 * (short)*(undefined4 *)(param_1 + 0x25b6) +
                                      local_1a4)];
                  local_1a8 = *(int *)(param_1 + (uint)local_19f * 2 + 0x187);
                  if ((*(short *)(local_1a8 + 0x18) == 4) || (*(short *)(local_1a8 + 0x18) == 7)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (!bVar2) {
                    local_1ae = sVar9 + -1;
                    if (local_1ae < 0) {
                      local_1ae = 0;
                    }
                    if (*param_1 + -1 < (int)local_1ae) {
                      local_1ae = *param_1 + -1;
                    }
                    local_1ac = sVar10;
                    if (sVar10 < 0) {
                      local_1ac = 0;
                    }
                    if (param_1[2] + -1 < (int)local_1ac) {
                      local_1ac = param_1[2] + -1;
                    }
                    local_1a9 = (&DAT_004f5f9c)
                                [(short)(local_1ac * (short)*(undefined4 *)(param_1 + 0x25b6) +
                                        local_1ae)];
                    if (*(short *)(*(int *)(param_1 + (uint)local_1a9 * 2 + 0x187) + 0x18) == 2) {
                      local_1b4 = FUN_00435120(0x5f);
                      if (local_1b4 == (uint *)0x0) {
                        puVar7 = (undefined4 *)0x0;
                      }
                      else {
                        puVar7 = FUN_004243cc(local_1b4,(short *)&local_768,local_38,local_3a,0,
                                              (byte)local_36,local_34,local_3c,1);
                      }
                      local_6fc[sVar3] = puVar7;
                      sVar3 = sVar3 + 1;
                    }
                    else {
                      local_1b8 = FUN_00435120(0x5f);
                      if (local_1b8 == (uint *)0x0) {
                        puVar7 = (undefined4 *)0x0;
                      }
                      else {
                        puVar7 = FUN_004243cc(local_1b8,(short *)&local_768,local_38,local_3a,0,
                                              (byte)local_36,local_34,local_3c,0);
                      }
                      local_6fc[sVar3] = puVar7;
                      sVar3 = sVar3 + 1;
                    }
                  }
                }
              }
            }
            local_1be = sVar9 + -1;
            if (local_1be < 0) {
              local_1be = 0;
            }
            if (*param_1 + -1 < (int)local_1be) {
              local_1be = *param_1 + -1;
            }
            local_1bc = sVar10;
            if (sVar10 < 0) {
              local_1bc = 0;
            }
            if (param_1[2] + -1 < (int)local_1bc) {
              local_1bc = param_1[2] + -1;
            }
            local_1b9 = (&DAT_004f5f9c)
                        [(short)(local_1bc * (short)*(undefined4 *)(param_1 + 0x25b6) + local_1be)];
            if (*(short *)(*(int *)(param_1 + (uint)local_1b9 * 2 + 0x187) + 0x18) != 2) {
              local_1c4 = sVar9 + -1;
              if (local_1c4 < 0) {
                local_1c4 = 0;
              }
              if (*param_1 + -1 < (int)local_1c4) {
                local_1c4 = *param_1 + -1;
              }
              local_1c2 = sVar10;
              if (sVar10 < 0) {
                local_1c2 = 0;
              }
              if (param_1[2] + -1 < (int)local_1c2) {
                local_1c2 = param_1[2] + -1;
              }
              local_1bf = (&DAT_004f5f9c)
                          [(short)(local_1c2 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_1c4)
                          ];
              local_1c8 = *(int *)(param_1 + (uint)local_1bf * 2 + 0x187);
              if ((*(short *)(local_1c8 + 0x18) == 4) || (*(short *)(local_1c8 + 0x18) == 7)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (!bVar2) {
                local_1ce = sVar9 + 1;
                if (local_1ce < 0) {
                  local_1ce = 0;
                }
                if (*param_1 + -1 < (int)local_1ce) {
                  local_1ce = *param_1 + -1;
                }
                local_1cc = sVar10;
                if (sVar10 < 0) {
                  local_1cc = 0;
                }
                if (param_1[2] + -1 < (int)local_1cc) {
                  local_1cc = param_1[2] + -1;
                }
                local_1c9 = (&DAT_004f5f9c)
                            [(short)(local_1cc * (short)*(undefined4 *)(param_1 + 0x25b6) +
                                    local_1ce)];
                if (*(short *)(*(int *)(param_1 + (uint)local_1c9 * 2 + 0x187) + 0x18) != 2) {
                  local_1d4 = sVar9 + 1;
                  if (local_1d4 < 0) {
                    local_1d4 = 0;
                  }
                  if (*param_1 + -1 < (int)local_1d4) {
                    local_1d4 = *param_1 + -1;
                  }
                  local_1d2 = sVar10;
                  if (sVar10 < 0) {
                    local_1d2 = 0;
                  }
                  if (param_1[2] + -1 < (int)local_1d2) {
                    local_1d2 = param_1[2] + -1;
                  }
                  local_1cf = (&DAT_004f5f9c)
                              [(short)(local_1d2 * (short)*(undefined4 *)(param_1 + 0x25b6) +
                                      local_1d4)];
                  local_1d8 = *(int *)(param_1 + (uint)local_1cf * 2 + 0x187);
                  if ((*(short *)(local_1d8 + 0x18) == 4) || (*(short *)(local_1d8 + 0x18) == 7)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (!bVar2) {
                    local_1dc = sVar10 + -1;
                    local_1de = sVar9;
                    if (sVar9 < 0) {
                      local_1de = 0;
                    }
                    if (*param_1 + -1 < (int)local_1de) {
                      local_1de = *param_1 + -1;
                    }
                    if (local_1dc < 0) {
                      local_1dc = 0;
                    }
                    if (param_1[2] + -1 < (int)local_1dc) {
                      local_1dc = param_1[2] + -1;
                    }
                    local_1d9 = (&DAT_004f5f9c)
                                [(short)(local_1dc * (short)*(undefined4 *)(param_1 + 0x25b6) +
                                        local_1de)];
                    if (*(short *)(*(int *)(param_1 + (uint)local_1d9 * 2 + 0x187) + 0x18) == 2) {
                      local_1e4 = FUN_00435120(0x5f);
                      if (local_1e4 == (uint *)0x0) {
                        puVar7 = (undefined4 *)0x0;
                      }
                      else {
                        puVar7 = FUN_004243cc(local_1e4,(short *)&local_768,local_38,local_3a,0x5a,
                                              (byte)local_36,local_34,local_3c,1);
                      }
                      local_6fc[sVar3] = puVar7;
                      sVar3 = sVar3 + 1;
                    }
                    else {
                      local_1e8 = FUN_00435120(0x5f);
                      if (local_1e8 == (uint *)0x0) {
                        puVar7 = (undefined4 *)0x0;
                      }
                      else {
                        puVar7 = FUN_004243cc(local_1e8,(short *)&local_768,local_38,local_3a,0x5a,
                                              (byte)local_36,local_34,local_3c,0);
                      }
                      local_6fc[sVar3] = puVar7;
                      sVar3 = sVar3 + 1;
                    }
                  }
                }
              }
            }
          }
          local_44 = *(int *)(param_1 + (uint)(byte)(&DAT_004f4e98)[local_3c] * 2 + 0x187);
          local_46 = *(undefined2 *)(local_44 + 0x18);
          local_6fc[sVar3] = (undefined4 *)0x0;
          sVar3 = sVar3 + 1;
          if (0x140 < sVar3) {
            pcVar5 = FUN_00404d88(0x4e);
            FUN_0040e524(pcVar5);
          }
          local_1ec = (undefined4 *)FUN_00435154((int)sVar3 << 2);
          FUN_00429f54(local_1ec,local_6fc,(int)sVar3 << 2);
          *(undefined4 **)(param_1 + local_3c * 2 + 0x3ac) = local_1ec;
          local_2c = local_2c + local_c;
          sVar9 = sVar9 + 1;
        } while (sVar9 < local_8);
      }
      local_30 = local_30 + local_c;
      sVar10 = sVar10 + 1;
    } while (sVar10 < local_6);
  }
  return;
}

