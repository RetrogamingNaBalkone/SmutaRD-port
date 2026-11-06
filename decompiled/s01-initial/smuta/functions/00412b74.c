/* Ghidra address: 00412b74; FUN_00412b74 */

void FUN_00412b74(void)

{
  undefined1 uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  undefined4 *puVar9;
  int iVar10;
  short *psVar11;
  undefined4 *puVar12;
  undefined4 *in_FS_OFFSET;
  byte bVar13;
  short *in_stack_00000004;
  uint *local_70c [320];
  undefined *local_20c;
  undefined *local_208;
  undefined *local_204;
  undefined *local_200;
  undefined4 local_1fc;
  short local_1f6;
  short local_1f4;
  byte local_1f1;
  int local_1f0;
  short local_1ec;
  short local_1ea;
  byte local_1e7;
  short local_1e6;
  short local_1e4;
  byte local_1e1;
  int local_1e0;
  short local_1da;
  short local_1d8;
  byte local_1d5;
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
  int local_1b8;
  short local_1b4;
  short local_1b2;
  byte local_1af;
  short local_1ae;
  short local_1ac;
  byte local_1a9;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  undefined2 local_18e;
  int local_18c;
  int local_188;
  int local_184;
  short local_17e;
  byte local_17b;
  undefined2 local_17a;
  int local_178;
  int local_174;
  int local_170;
  short local_16a;
  byte local_167;
  undefined2 local_166;
  int local_164;
  int local_160;
  int local_15c;
  short local_156;
  byte local_153;
  undefined2 local_152;
  int local_150;
  int local_14c;
  int local_148;
  short local_144;
  byte local_141;
  short local_140;
  short local_13e;
  short local_13c;
  byte local_139;
  short local_138;
  short local_136;
  byte local_133;
  short local_132;
  short local_130;
  byte local_12d;
  short local_12c;
  short local_12a;
  byte local_127;
  undefined2 local_126;
  int local_124;
  int local_120;
  int local_11c;
  short local_116;
  short local_114;
  undefined2 local_112;
  short local_110;
  short local_10e;
  byte local_10b;
  undefined2 local_10a;
  short local_108;
  short local_106;
  byte local_103;
  undefined2 local_102;
  short local_100;
  short local_fe;
  byte local_fb;
  undefined2 local_fa;
  short local_f8;
  short local_f6;
  byte local_f3;
  short local_f2;
  int local_f0;
  int local_ec;
  int local_e8;
  short local_e2;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  ushort local_c6;
  int local_c4;
  int local_c0;
  int local_bc;
  short local_b6;
  short local_b4;
  short local_b2;
  int local_b0;
  int local_ac;
  short local_a6;
  int local_a4;
  short local_9e;
  short local_9c;
  short local_9a;
  short local_98;
  ushort local_96;
  undefined4 local_94;
  int local_90;
  int local_8c;
  int local_88;
  byte local_81;
  int local_80;
  int local_7c;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  int local_70;
  short local_6c;
  short local_6a;
  undefined4 local_68;
  undefined2 local_58;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
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
  
  bVar13 = 0;
  FUN_0042b4b4(0x435ba8);
  local_6a = in_stack_00000004[2];
  local_6c = *in_stack_00000004;
  local_70 = (int)in_stack_00000004[0x3a7];
  local_72 = local_6c + -1;
  FUN_00429054();
  FUN_00429054();
  for (sVar8 = 0; sVar8 < local_6a >> 1; sVar8 = sVar8 + 1) {
    local_74 = sVar8 * local_6c;
    local_76 = (local_72 - sVar8) * local_6c;
    sVar7 = 0;
    local_20c = &DAT_00490720 + local_76;
    local_208 = &DAT_00490720 + local_74;
    local_204 = &DAT_0048f61c + local_76;
    local_200 = &DAT_0048f61c + local_74;
    if (0 < local_6c) {
      do {
        sVar7 = sVar7 + 1;
        uVar1 = *local_200;
        *local_200 = *local_204;
        *local_204 = uVar1;
        uVar1 = *local_208;
        *local_208 = *local_20c;
        *local_20c = uVar1;
        local_20c = local_20c + 1;
        local_208 = local_208 + 1;
        local_204 = local_204 + 1;
        local_200 = local_200 + 1;
      } while (sVar7 < local_6c);
    }
  }
  sVar8 = 0;
  if (0 < local_6a) {
    do {
      sVar7 = 0;
      if (0 < local_6c) {
        do {
          local_78 = sVar7;
          if (sVar7 < 0) {
            local_78 = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_78) {
            local_78 = *in_stack_00000004 + -1;
          }
          sVar3 = sVar8;
          if (sVar8 < 0) {
            sVar3 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar3) {
            sVar3 = in_stack_00000004[2] + -1;
          }
          local_78 = local_78 + sVar3 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6);
          if ((&DAT_0048f61c)[local_78] == '.') {
            (&DAT_0048f61c)[local_78] = 0x20;
          }
          if ((&DAT_00490720)[local_78] == '.') {
            (&DAT_00490720)[local_78] = 0x20;
          }
          if (*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[local_78] * 2 + 0x187) == 0)
          {
            FUN_00427b9f();
          }
          if (*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_00490720)[local_78] * 2 + 0x187) == 0)
          {
            FUN_00427b9f();
          }
          iVar5 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[local_78] * 2 + 0x187);
          sVar3 = *(short *)(iVar5 + 0x18);
          if ((sVar3 == 3) && (*(short *)(iVar5 + 0x74) == 99)) {
            in_stack_00000004[0x388] = in_stack_00000004[0x388] + *(short *)(iVar5 + 0x76);
          }
          iVar10 = local_70 >> 1;
          if ((sVar3 == 1) || (sVar3 == 9)) {
            if (sVar3 == 9) {
              if ((*(short *)(iVar5 + 0xfa) == 0) &&
                 ((&DAT_0048e518)[local_78] = (&DAT_0048f61c)[local_78],
                 *(short *)(iVar5 + 0xfc) == 0)) {
                DAT_0043649c = DAT_0043649c + 1;
              }
            }
            else {
              (&DAT_0048e518)[local_78] = (&DAT_0048f61c)[local_78];
            }
            (&DAT_0048f61c)[local_78] = 0x20;
            local_7c = *(int *)(in_stack_00000004 +
                               (uint)(byte)(&DAT_00490720)[local_78] * 2 + 0x187);
            *(int *)(iVar5 + 0x30) = sVar7 * local_70 + iVar10;
            *(int *)(iVar5 + 0x34) =
                 -((int)*(short *)(local_7c + 0x1f) + (int)*(short *)(iVar5 + 0x1f));
            *(int *)(iVar5 + 0x38) = sVar8 * local_70 + iVar10;
            if (sVar3 == 1) {
              *(short *)(iVar5 + 0xbc) = *(short *)(iVar5 + 0x34) + -0x1a;
              *(short *)(iVar5 + 0xba) = *(short *)(iVar5 + 0x34) + 0x1a;
              puVar9 = (undefined4 *)(iVar5 + 0x30);
              psVar11 = in_stack_00000004 + 0x38b;
              for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(undefined4 *)psVar11 = *puVar9;
                puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
                psVar11 = psVar11 + (uint)bVar13 * -4 + 2;
              }
              *(int *)(in_stack_00000004 + 0x3a5) = iVar5;
            }
            else if (sVar3 == 9) {
              *(undefined2 *)(iVar5 + 0xbc) = *(undefined2 *)(iVar5 + 0x34);
              *(undefined2 *)(iVar5 + 0xba) = *(undefined2 *)(iVar5 + 0x34);
              puVar9 = (undefined4 *)(iVar5 + 0x30);
              puVar12 = (undefined4 *)(iVar5 + 0xc0);
              for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar12 = *puVar9;
                puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
                puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
              }
            }
          }
          if (*(short *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_00490720)[local_78] * 2 + 0x187) + 0x18) == 0xd)
          {
            local_80 = *(int *)(in_stack_00000004 +
                               (uint)(byte)(&DAT_00490720)[local_78] * 2 + 0x187);
            *(int *)(local_80 + 0x30) = sVar7 * local_70 + iVar10;
            *(int *)(local_80 + 0x34) = -(int)*(short *)(local_80 + 0x1f);
            *(int *)(local_80 + 0x38) = sVar8 * local_70 + iVar10;
          }
          sVar7 = sVar7 + 1;
        } while (sVar7 < local_6c);
      }
      sVar8 = sVar8 + 1;
    } while (sVar8 < local_6a);
  }
  local_81 = 0;
  do {
    local_88 = *(int *)(in_stack_00000004 + (uint)local_81 * 2 + 0x187);
    if ((local_88 != 0) && (*(short *)(local_88 + 0x18) == 0xd)) {
      iVar5 = FUN_0041e98c();
      DAT_0043649c = DAT_0043649c + (short)iVar5;
    }
    local_81 = local_81 + 1;
  } while (local_81 != 0xff);
  sVar8 = 0;
  *(undefined4 *)(in_stack_00000004 + 0x3aa) = *(undefined4 *)(in_stack_00000004 + 0x221);
  local_90 = 0;
  local_81 = 0xff;
  if (0 < local_6a) {
    do {
      local_8c = 0;
      sVar7 = 0;
      if (0 < local_6c) {
        do {
          sVar3 = 0;
          local_9e = sVar7;
          if (sVar7 < 0) {
            local_9e = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_9e) {
            local_9e = *in_stack_00000004 + -1;
          }
          sVar4 = sVar8;
          if (sVar8 < 0) {
            sVar4 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar4) {
            sVar4 = in_stack_00000004[2] + -1;
          }
          local_9c = (short)((int)sVar4 * *(int *)(in_stack_00000004 + 0x25b6)) + local_9e;
          local_a4 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[local_9c] * 2 + 0x187)
          ;
          local_a6 = *(short *)(local_a4 + 0x18);
          local_94 = (**(code **)(*(int *)(local_a4 + 0x14) + 0x10))();
          local_96 = *(ushort *)(local_a4 + 0x1b);
          local_98 = (**(code **)(*(int *)(local_a4 + 0x14) + 0xc))();
          local_9a = **(short **)(local_a4 + 100) * *(short *)(local_a4 + 0x1d);
          if ((local_96 & 0x800) == 0) {
            local_ac = 0;
          }
          else {
            local_ac = local_a4 + 100;
          }
          local_b0 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_00490720)[local_9c] * 2 + 0x187)
          ;
          local_b2 = *(short *)(local_b0 + 0x1f);
          local_b4 = *(short *)(local_b0 + 0x74);
          local_b6 = local_b2 + local_b4;
          local_bc = local_90;
          local_c0 = -(int)local_b2;
          local_c4 = local_8c;
          local_c6 = *(ushort *)(local_b0 + 0x1b);
          local_cc = (**(code **)(*(int *)(local_b0 + 0x14) + 0x28))();
          local_d0 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x24))();
          if (*(short *)(local_b0 + 0x18) == 0xc) {
            local_e0 = local_b0 + 0x82;
          }
          else if ((local_c6 & 0x800) == 0) {
            local_e0 = 0;
          }
          else {
            local_e0 = local_b0 + 100;
          }
          local_dc = 0;
          local_e2 = local_98 / *(short *)(local_a4 + 0x1d);
          if (-1 < *(short *)(local_b0 + 0x74)) {
            local_e8 = local_90;
            local_ec = -(int)local_b6;
            local_f0 = local_8c;
            local_f6 = sVar8 + -1;
            local_f8 = sVar7;
            if (sVar7 < 0) {
              local_f8 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_f8) {
              local_f8 = *in_stack_00000004 + -1;
            }
            if (local_f6 < 0) {
              local_f6 = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_f6) {
              local_f6 = in_stack_00000004[2] + -1;
            }
            local_f3 = (&DAT_00490720)
                       [(short)(local_f6 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                               local_f8)];
            local_f2 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_f3 * 2 + 0x187) + 0x74) +
                       *(short *)(*(int *)(in_stack_00000004 + (uint)local_f3 * 2 + 0x187) + 0x1f);
            if (local_b6 < local_f2) {
              iVar5 = (int)*(short *)(local_b0 + 0x1d);
              local_fa = (undefined2)(((int)local_f2 - (int)local_b6) / iVar5);
              local_d4 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x34))
                                   (*(int *)(local_b0 + 0x14),
                                    ((int)local_f2 - (int)local_b6) % iVar5,iVar5,local_b0,0);
              local_8 = FUN_00431988();
              if (local_8 != (uint *)0x0) {
                local_58 = 0x14;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 8;
              }
              sVar3 = 1;
              local_70c[0] = local_8;
            }
            local_100 = sVar7 + -1;
            if (local_100 < 0) {
              local_100 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_100) {
              local_100 = *in_stack_00000004 + -1;
            }
            local_fe = sVar8;
            if (sVar8 < 0) {
              local_fe = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_fe) {
              local_fe = in_stack_00000004[2] + -1;
            }
            local_fb = (&DAT_00490720)
                       [(short)(local_fe * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                               local_100)];
            local_f2 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_fb * 2 + 0x187) + 0x74) +
                       *(short *)(*(int *)(in_stack_00000004 + (uint)local_fb * 2 + 0x187) + 0x1f);
            if (local_b6 < local_f2) {
              local_d4 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x34))();
              local_102 = (undefined2)
                          (((int)local_f2 - (int)local_b6) / (int)*(short *)(local_b0 + 0x1d));
              local_c = FUN_00431988();
              if (local_c != (uint *)0x0) {
                local_58 = 0x2c;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x20;
              }
              local_70c[sVar3] = local_c;
              sVar3 = sVar3 + 1;
            }
            local_106 = sVar8 + 1;
            local_108 = sVar7;
            if (sVar7 < 0) {
              local_108 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_108) {
              local_108 = *in_stack_00000004 + -1;
            }
            if (local_106 < 0) {
              local_106 = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_106) {
              local_106 = in_stack_00000004[2] + -1;
            }
            local_103 = (&DAT_00490720)
                        [(short)(local_106 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_108)];
            local_f2 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_103 * 2 + 0x187) + 0x74)
                       + *(short *)(*(int *)(in_stack_00000004 + (uint)local_103 * 2 + 0x187) + 0x1f
                                   );
            if (local_b6 < local_f2) {
              iVar5 = (int)*(short *)(local_b0 + 0x1d);
              local_10a = (undefined2)(((int)local_f2 - (int)local_b6) / iVar5);
              local_d4 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x34))
                                   (*(int *)(local_b0 + 0x14),
                                    ((int)local_f2 - (int)local_b6) % iVar5,iVar5,local_b0,0);
              local_10 = FUN_00431988();
              if (local_10 != (uint *)0x0) {
                local_58 = 0x44;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x38;
              }
              local_70c[sVar3] = local_10;
              sVar3 = sVar3 + 1;
            }
            local_110 = sVar7 + 1;
            if (local_110 < 0) {
              local_110 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_110) {
              local_110 = *in_stack_00000004 + -1;
            }
            local_10e = sVar8;
            if (sVar8 < 0) {
              local_10e = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_10e) {
              local_10e = in_stack_00000004[2] + -1;
            }
            local_10b = (&DAT_00490720)
                        [(short)(local_10e * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_110)];
            local_f2 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_10b * 2 + 0x187) + 0x74)
                       + *(short *)(*(int *)(in_stack_00000004 + (uint)local_10b * 2 + 0x187) + 0x1f
                                   );
            if (local_b6 < local_f2) {
              iVar5 = (int)*(short *)(local_b0 + 0x1d);
              local_112 = (undefined2)(((int)local_f2 - (int)local_b6) / iVar5);
              local_d4 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x34))
                                   (*(int *)(local_b0 + 0x14),
                                    ((int)local_f2 - (int)local_b6) % iVar5,iVar5,local_b0,1);
              local_14 = FUN_00431988();
              if (local_14 != (uint *)0x0) {
                local_58 = 0x5c;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x50;
              }
              local_70c[sVar3] = local_14;
              sVar3 = sVar3 + 1;
            }
          }
          if (*(short *)(local_a4 + 0x18) == 2) {
            local_114 = local_b4;
            local_116 = local_b4 / *(short *)(local_a4 + 0x1d);
            local_11c = local_90;
            local_120 = -(int)local_b2;
            local_124 = local_8c;
            local_12a = sVar8 + -1;
            local_126 = 0;
            local_12c = sVar7;
            if (sVar7 < 0) {
              local_12c = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_12c) {
              local_12c = *in_stack_00000004 + -1;
            }
            if (local_12a < 0) {
              local_12a = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_12a) {
              local_12a = in_stack_00000004[2] + -1;
            }
            local_127 = (&DAT_0048f61c)
                        [(short)(local_12a * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_12c)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_127 * 2 + 0x187) + 0x18) != 2) {
              local_94 = (**(code **)(*(int *)(local_a4 + 0x14) + 0x14))();
              local_18 = FUN_00431988();
              if (local_18 != (uint *)0x0) {
                local_58 = 0x74;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x68;
              }
              local_70c[sVar3] = local_18;
              sVar3 = sVar3 + 1;
            }
            local_132 = sVar7 + -1;
            if (local_132 < 0) {
              local_132 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_132) {
              local_132 = *in_stack_00000004 + -1;
            }
            local_130 = sVar8;
            if (sVar8 < 0) {
              local_130 = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_130) {
              local_130 = in_stack_00000004[2] + -1;
            }
            local_12d = (&DAT_0048f61c)
                        [(short)(local_130 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_132)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_12d * 2 + 0x187) + 0x18) != 2) {
              local_94 = (**(code **)(*(int *)(local_a4 + 0x14) + 0x14))();
              local_1c = FUN_00431988();
              if (local_1c != (uint *)0x0) {
                local_58 = 0x8c;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x80;
              }
              local_70c[sVar3] = local_1c;
              sVar3 = sVar3 + 1;
            }
            local_136 = sVar8 + 1;
            local_138 = sVar7;
            if (sVar7 < 0) {
              local_138 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_138) {
              local_138 = *in_stack_00000004 + -1;
            }
            if (local_136 < 0) {
              local_136 = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_136) {
              local_136 = in_stack_00000004[2] + -1;
            }
            local_133 = (&DAT_0048f61c)
                        [(short)(local_136 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_138)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_133 * 2 + 0x187) + 0x18) != 2) {
              local_94 = (**(code **)(*(int *)(local_a4 + 0x14) + 0x14))();
              local_20 = FUN_00431988();
              if (local_20 != (uint *)0x0) {
                local_58 = 0xa4;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x98;
              }
              local_70c[sVar3] = local_20;
              sVar3 = sVar3 + 1;
            }
            local_13e = sVar7 + 1;
            if (local_13e < 0) {
              local_13e = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_13e) {
              local_13e = *in_stack_00000004 + -1;
            }
            local_13c = sVar8;
            if (sVar8 < 0) {
              local_13c = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_13c) {
              local_13c = in_stack_00000004[2] + -1;
            }
            local_139 = (&DAT_0048f61c)
                        [(short)(local_13c * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_13e)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_139 * 2 + 0x187) + 0x18) != 2) {
              local_94 = (**(code **)(*(int *)(local_a4 + 0x14) + 0x14))();
              local_24 = FUN_00431988();
              if (local_24 != (uint *)0x0) {
                local_58 = 0xbc;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0xb0;
              }
              local_70c[sVar3] = local_24;
              sVar3 = sVar3 + 1;
            }
          }
          sVar4 = sVar8 + -1;
          local_144 = sVar7;
          if (sVar7 < 0) {
            local_144 = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_144) {
            local_144 = *in_stack_00000004 + -1;
          }
          if (sVar4 < 0) {
            sVar4 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar4) {
            sVar4 = in_stack_00000004[2] + -1;
          }
          local_141 = (&DAT_00490720)
                      [(short)(sVar4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                              local_144)];
          local_140 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_141 * 2 + 0x187) + 0x1f);
          if (local_140 < local_b2) {
            local_148 = local_90 + -1;
            local_14c = -(int)local_140;
            local_150 = local_8c + -1;
            iVar5 = (int)*(short *)(local_b0 + 0x1d);
            local_152 = (undefined2)(((int)local_b2 - (int)local_140) / iVar5);
            local_d8 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x38))
                                 (*(int *)(local_b0 + 0x14),((int)local_b2 - (int)local_140) % iVar5
                                  ,iVar5,local_b0,0);
            local_28 = FUN_00431988();
            if (local_28 != (uint *)0x0) {
              local_58 = 0xd4;
              FUN_0040dc54();
              *DAT_0049aa2c = *DAT_0049aa2c + -2;
              local_58 = 200;
            }
            local_70c[sVar3] = local_28;
            sVar3 = sVar3 + 1;
          }
          local_156 = sVar7 + -1;
          if (local_156 < 0) {
            local_156 = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_156) {
            local_156 = *in_stack_00000004 + -1;
          }
          sVar4 = sVar8;
          if (sVar8 < 0) {
            sVar4 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar4) {
            sVar4 = in_stack_00000004[2] + -1;
          }
          local_153 = (&DAT_00490720)
                      [(short)(sVar4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                              local_156)];
          local_140 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_153 * 2 + 0x187) + 0x1f);
          if (local_140 < local_b2) {
            local_15c = local_90 + -1;
            local_160 = -(int)local_140;
            local_164 = local_8c + -1;
            iVar5 = (int)*(short *)(local_b0 + 0x1d);
            local_166 = (undefined2)(((int)local_b2 - (int)local_140) / iVar5);
            local_d8 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x38))
                                 (*(int *)(local_b0 + 0x14),((int)local_b2 - (int)local_140) % iVar5
                                  ,iVar5,local_b0,1);
            local_2c = FUN_00431988();
            if (local_2c != (uint *)0x0) {
              local_58 = 0xec;
              FUN_0040dc54();
              *DAT_0049aa2c = *DAT_0049aa2c + -2;
              local_58 = 0xe0;
            }
            local_70c[sVar3] = local_2c;
            sVar3 = sVar3 + 1;
          }
          sVar4 = sVar8 + 1;
          local_16a = sVar7;
          if (sVar7 < 0) {
            local_16a = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_16a) {
            local_16a = *in_stack_00000004 + -1;
          }
          if (sVar4 < 0) {
            sVar4 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar4) {
            sVar4 = in_stack_00000004[2] + -1;
          }
          local_167 = (&DAT_00490720)
                      [(short)(sVar4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                              local_16a)];
          local_140 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_167 * 2 + 0x187) + 0x1f);
          if (local_140 < local_b2) {
            local_170 = local_90 + -1;
            local_174 = -(int)local_140;
            local_178 = local_8c + -1;
            local_d8 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x38))();
            local_17a = (undefined2)
                        (((int)local_b2 - (int)local_140) / (int)*(short *)(local_b0 + 0x1d));
            local_30 = FUN_00431988();
            if (local_30 != (uint *)0x0) {
              local_58 = 0x104;
              FUN_0040dc54();
              *DAT_0049aa2c = *DAT_0049aa2c + -2;
              local_58 = 0xf8;
            }
            local_70c[sVar3] = local_30;
            sVar3 = sVar3 + 1;
          }
          local_17e = sVar7 + 1;
          if (local_17e < 0) {
            local_17e = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_17e) {
            local_17e = *in_stack_00000004 + -1;
          }
          sVar4 = sVar8;
          if (sVar8 < 0) {
            sVar4 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar4) {
            sVar4 = in_stack_00000004[2] + -1;
          }
          local_17b = (&DAT_00490720)
                      [(short)(sVar4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                              local_17e)];
          local_140 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_17b * 2 + 0x187) + 0x1f);
          if (local_140 < local_b2) {
            local_184 = local_90 + -1;
            local_188 = -(int)local_140;
            local_18c = local_8c + -1;
            iVar5 = (int)*(short *)(local_b0 + 0x1d);
            local_18e = (undefined2)(((int)local_b2 - (int)local_140) / iVar5);
            local_d8 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x38))
                                 (*(int *)(local_b0 + 0x14),((int)local_b2 - (int)local_140) % iVar5
                                  ,iVar5,local_b0,1);
            local_34 = FUN_00431988();
            if (local_34 != (uint *)0x0) {
              local_58 = 0x11c;
              FUN_0040dc54();
              *DAT_0049aa2c = *DAT_0049aa2c + -2;
              local_58 = 0x110;
            }
            local_70c[sVar3] = local_34;
            sVar3 = sVar3 + 1;
          }
          local_194 = local_90;
          local_198 = -(int)local_b2;
          local_19c = local_8c;
          if (-1 < *(short *)(local_b0 + 0x74)) {
            local_38 = FUN_00431988();
            if (local_38 != (uint *)0x0) {
              local_58 = 0x134;
              FUN_0040e244();
              *DAT_0049aa2c = *DAT_0049aa2c + -2;
              local_58 = 0x128;
            }
            local_70c[sVar3] = local_38;
            sVar3 = sVar3 + 1;
          }
          if ((local_a6 == 4) || (local_a6 == 7)) {
            local_1a0 = local_90;
            local_1a4 = -(int)local_b2;
            local_1a8 = local_8c;
            local_1ac = sVar8 + -1;
            local_1ae = sVar7;
            if (sVar7 < 0) {
              local_1ae = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_1ae) {
              local_1ae = *in_stack_00000004 + -1;
            }
            if (local_1ac < 0) {
              local_1ac = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_1ac) {
              local_1ac = in_stack_00000004[2] + -1;
            }
            local_1a9 = (&DAT_0048f61c)
                        [(short)(local_1ac * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_1ae)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1a9 * 2 + 0x187) + 0x18) != 2) {
              local_1b2 = sVar8 + -1;
              local_1b4 = sVar7;
              if (sVar7 < 0) {
                local_1b4 = 0;
              }
              if (*in_stack_00000004 + -1 < (int)local_1b4) {
                local_1b4 = *in_stack_00000004 + -1;
              }
              if (local_1b2 < 0) {
                local_1b2 = 0;
              }
              if (in_stack_00000004[2] + -1 < (int)local_1b2) {
                local_1b2 = in_stack_00000004[2] + -1;
              }
              local_1af = (&DAT_0048f61c)
                          [(short)(local_1b2 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                  local_1b4)];
              local_1b8 = *(int *)(in_stack_00000004 + (uint)local_1af * 2 + 0x187);
              if ((*(short *)(local_1b8 + 0x18) == 4) || (*(short *)(local_1b8 + 0x18) == 7)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (!bVar2) {
                local_1bc = sVar8 + 1;
                local_1be = sVar7;
                if (sVar7 < 0) {
                  local_1be = 0;
                }
                if (*in_stack_00000004 + -1 < (int)local_1be) {
                  local_1be = *in_stack_00000004 + -1;
                }
                if (local_1bc < 0) {
                  local_1bc = 0;
                }
                if (in_stack_00000004[2] + -1 < (int)local_1bc) {
                  local_1bc = in_stack_00000004[2] + -1;
                }
                local_1b9 = (&DAT_0048f61c)
                            [(short)(local_1bc * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6)
                                    + local_1be)];
                if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1b9 * 2 + 0x187) + 0x18) !=
                    2) {
                  local_1c2 = sVar8 + 1;
                  local_1c4 = sVar7;
                  if (sVar7 < 0) {
                    local_1c4 = 0;
                  }
                  if (*in_stack_00000004 + -1 < (int)local_1c4) {
                    local_1c4 = *in_stack_00000004 + -1;
                  }
                  if (local_1c2 < 0) {
                    local_1c2 = 0;
                  }
                  if (in_stack_00000004[2] + -1 < (int)local_1c2) {
                    local_1c2 = in_stack_00000004[2] + -1;
                  }
                  local_1bf = (&DAT_0048f61c)
                              [(short)(local_1c2 *
                                       (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                      local_1c4)];
                  local_1c8 = *(int *)(in_stack_00000004 + (uint)local_1bf * 2 + 0x187);
                  if ((*(short *)(local_1c8 + 0x18) == 4) || (*(short *)(local_1c8 + 0x18) == 7)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (!bVar2) {
                    local_1ce = sVar7 + -1;
                    if (local_1ce < 0) {
                      local_1ce = 0;
                    }
                    if (*in_stack_00000004 + -1 < (int)local_1ce) {
                      local_1ce = *in_stack_00000004 + -1;
                    }
                    local_1cc = sVar8;
                    if (sVar8 < 0) {
                      local_1cc = 0;
                    }
                    if (in_stack_00000004[2] + -1 < (int)local_1cc) {
                      local_1cc = in_stack_00000004[2] + -1;
                    }
                    local_1c9 = (&DAT_0048f61c)
                                [(short)(local_1cc *
                                         (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                        local_1ce)];
                    if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1c9 * 2 + 0x187) + 0x18)
                        == 2) {
                      local_3c = FUN_00431988();
                      if (local_3c != (uint *)0x0) {
                        local_58 = 0x14c;
                        FUN_0040d8d4();
                        *DAT_0049aa2c = *DAT_0049aa2c + -2;
                        local_58 = 0x140;
                      }
                      local_70c[sVar3] = local_3c;
                      sVar3 = sVar3 + 1;
                    }
                    else {
                      local_40 = FUN_00431988();
                      if (local_40 != (uint *)0x0) {
                        local_58 = 0x164;
                        FUN_0040d8d4();
                        *DAT_0049aa2c = *DAT_0049aa2c + -2;
                        local_58 = 0x158;
                      }
                      local_70c[sVar3] = local_40;
                      sVar3 = sVar3 + 1;
                    }
                  }
                }
              }
            }
            local_1d4 = sVar7 + -1;
            if (local_1d4 < 0) {
              local_1d4 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_1d4) {
              local_1d4 = *in_stack_00000004 + -1;
            }
            local_1d2 = sVar8;
            if (sVar8 < 0) {
              local_1d2 = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_1d2) {
              local_1d2 = in_stack_00000004[2] + -1;
            }
            local_1cf = (&DAT_0048f61c)
                        [(short)(local_1d2 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_1d4)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1cf * 2 + 0x187) + 0x18) != 2) {
              local_1da = sVar7 + -1;
              if (local_1da < 0) {
                local_1da = 0;
              }
              if (*in_stack_00000004 + -1 < (int)local_1da) {
                local_1da = *in_stack_00000004 + -1;
              }
              local_1d8 = sVar8;
              if (sVar8 < 0) {
                local_1d8 = 0;
              }
              if (in_stack_00000004[2] + -1 < (int)local_1d8) {
                local_1d8 = in_stack_00000004[2] + -1;
              }
              local_1d5 = (&DAT_0048f61c)
                          [(short)(local_1d8 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                  local_1da)];
              local_1e0 = *(int *)(in_stack_00000004 + (uint)local_1d5 * 2 + 0x187);
              if ((*(short *)(local_1e0 + 0x18) == 4) || (*(short *)(local_1e0 + 0x18) == 7)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (!bVar2) {
                local_1e6 = sVar7 + 1;
                if (local_1e6 < 0) {
                  local_1e6 = 0;
                }
                if (*in_stack_00000004 + -1 < (int)local_1e6) {
                  local_1e6 = *in_stack_00000004 + -1;
                }
                local_1e4 = sVar8;
                if (sVar8 < 0) {
                  local_1e4 = 0;
                }
                if (in_stack_00000004[2] + -1 < (int)local_1e4) {
                  local_1e4 = in_stack_00000004[2] + -1;
                }
                local_1e1 = (&DAT_0048f61c)
                            [(short)(local_1e4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6)
                                    + local_1e6)];
                if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1e1 * 2 + 0x187) + 0x18) !=
                    2) {
                  local_1ec = sVar7 + 1;
                  if (local_1ec < 0) {
                    local_1ec = 0;
                  }
                  if (*in_stack_00000004 + -1 < (int)local_1ec) {
                    local_1ec = *in_stack_00000004 + -1;
                  }
                  local_1ea = sVar8;
                  if (sVar8 < 0) {
                    local_1ea = 0;
                  }
                  if (in_stack_00000004[2] + -1 < (int)local_1ea) {
                    local_1ea = in_stack_00000004[2] + -1;
                  }
                  local_1e7 = (&DAT_0048f61c)
                              [(short)(local_1ea *
                                       (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                      local_1ec)];
                  local_1f0 = *(int *)(in_stack_00000004 + (uint)local_1e7 * 2 + 0x187);
                  if ((*(short *)(local_1f0 + 0x18) == 4) || (*(short *)(local_1f0 + 0x18) == 7)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (!bVar2) {
                    local_1f4 = sVar8 + -1;
                    local_1f6 = sVar7;
                    if (sVar7 < 0) {
                      local_1f6 = 0;
                    }
                    if (*in_stack_00000004 + -1 < (int)local_1f6) {
                      local_1f6 = *in_stack_00000004 + -1;
                    }
                    if (local_1f4 < 0) {
                      local_1f4 = 0;
                    }
                    if (in_stack_00000004[2] + -1 < (int)local_1f4) {
                      local_1f4 = in_stack_00000004[2] + -1;
                    }
                    local_1f1 = (&DAT_0048f61c)
                                [(short)(local_1f4 *
                                         (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                        local_1f6)];
                    if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1f1 * 2 + 0x187) + 0x18)
                        == 2) {
                      local_44 = FUN_00431988();
                      if (local_44 != (uint *)0x0) {
                        local_58 = 0x17c;
                        FUN_0040d8d4();
                        *DAT_0049aa2c = *DAT_0049aa2c + -2;
                        local_58 = 0x170;
                      }
                      local_70c[sVar3] = local_44;
                      sVar3 = sVar3 + 1;
                    }
                    else {
                      local_48 = FUN_00431988();
                      if (local_48 != (uint *)0x0) {
                        local_58 = 0x194;
                        FUN_0040d8d4();
                        *DAT_0049aa2c = *DAT_0049aa2c + -2;
                        local_58 = 0x188;
                      }
                      local_70c[sVar3] = local_48;
                      sVar3 = sVar3 + 1;
                    }
                  }
                }
              }
            }
          }
          local_a4 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048e518)[local_9c] * 2 + 0x187)
          ;
          local_a6 = *(undefined2 *)(local_a4 + 0x18);
          local_70c[sVar3] = (uint *)0x0;
          local_1fc = FUN_004319bc();
          FUN_00428fe4();
          *(undefined4 *)(in_stack_00000004 + local_9c * 2 + 0x3ac) = local_1fc;
          local_8c = local_8c + local_70;
          sVar7 = sVar7 + 1;
        } while (sVar7 < local_6c);
      }
      local_90 = local_90 + local_70;
      sVar8 = sVar8 + 1;
    } while (sVar8 < local_6a);
  }
  *in_FS_OFFSET = local_68;
  return;
}

