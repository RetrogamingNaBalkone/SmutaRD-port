/* Ghidra address: 0041821c; FUN_0041821c */

/* WARNING: Removing unreachable block (ram,0x004185f0) */
/* WARNING: Removing unreachable block (ram,0x00418488) */
/* WARNING: Removing unreachable block (ram,0x004184af) */
/* WARNING: Removing unreachable block (ram,0x00418617) */

void FUN_0041821c(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  bool bVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined4 uVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short sVar20;
  short sVar21;
  short *in_stack_00000004;
  int local_160;
  int local_fc;
  int local_a0;
  int local_74;
  int local_40;
  int local_38;
  short local_34;
  short local_32;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_1c;
  
  uVar13 = FUN_0042fc2c();
  sVar10 = (short)uVar13;
  uVar13 = FUN_0042fc2c();
  sVar11 = (short)uVar13;
  FUN_0040afbc();
  bVar4 = *(byte *)(*(int *)(in_stack_00000004 + 0x1c7) + 0x21);
  bVar5 = *(byte *)(*(int *)(in_stack_00000004 + 0x1c7) + 0x21);
  *(ushort *)(DAT_0044f640 + 4) = (ushort)*(byte *)(*(int *)(in_stack_00000004 + 0x1c7) + 0x21);
  (**(code **)(*DAT_0044f640 + 0x3c))();
  *(ushort *)(DAT_0044f640 + 4) =
       (ushort)*(byte *)(*(int *)(in_stack_00000004 + (uint)DAT_0048e518 * 2 + 0x187) + 0x21);
  sVar7 = *in_stack_00000004;
  sVar14 = sVar11 * in_stack_00000004[2];
  sVar8 = *in_stack_00000004;
  *(undefined2 *)(DAT_0044f640 + 4) = 0xa8;
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0040b7d8();
  for (local_22 = 1; (int)local_22 < in_stack_00000004[2] + -1; local_22 = local_22 + 1) {
    for (sVar20 = 1; (int)sVar20 < *in_stack_00000004 + -1; sVar20 = sVar20 + 1) {
      sVar16 = sVar20;
      if (sVar20 < 0) {
        sVar16 = 0;
      }
      if (*in_stack_00000004 + -1 < (int)sVar16) {
        sVar16 = *in_stack_00000004 + -1;
      }
      sVar12 = local_22;
      if (local_22 < 0) {
        sVar12 = 0;
      }
      if (in_stack_00000004[2] + -1 < (int)sVar12) {
        sVar12 = in_stack_00000004[2] + -1;
      }
      (&DAT_00491824)[(short)(sVar16 + sVar12 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6))]
           = 1;
    }
  }
  local_2a = 0;
  if (*in_stack_00000004 + -1 < 0) {
    local_2a = *in_stack_00000004 + -1;
  }
  local_28 = 0;
  if (in_stack_00000004[2] + -1 < 0) {
    local_28 = in_stack_00000004[2] + -1;
  }
  local_1c = local_28 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_2a;
  local_22 = 0;
  if (0 < sVar14) {
    do {
      pbVar1 = &DAT_00490720 + local_1c;
      pcVar2 = &DAT_00491824 + local_1c;
      for (sVar20 = sVar10 * sVar8; 0 < sVar20; sVar20 = sVar20 - sVar10) {
        if (((*pcVar2 != '\0') &&
            (bVar6 = *(byte *)(*(int *)(in_stack_00000004 + (uint)*pbVar1 * 2 + 0x187) + 0x21),
            bVar6 != bVar4)) && (bVar6 != bVar5)) {
          *(ushort *)(DAT_0044f640 + 4) = (ushort)bVar6;
          (**(code **)(*DAT_0044f640 + 0x3c))();
        }
        pcVar2 = pcVar2 + 1;
        pbVar1 = pbVar1 + 1;
        local_1c = local_1c + 1;
      }
      local_22 = local_22 + sVar11;
    } while (local_22 < sVar14);
  }
  local_34 = 0;
  if (*in_stack_00000004 + -1 < 0) {
    local_34 = *in_stack_00000004 + -1;
  }
  local_32 = 0;
  if (in_stack_00000004[2] + -1 < 0) {
    local_32 = in_stack_00000004[2] + -1;
  }
  local_1c = local_32 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_34;
  local_22 = 0;
  if (0 < sVar14) {
    do {
      pbVar1 = &DAT_0048f61c + local_1c;
      pcVar2 = &DAT_00491824 + local_1c;
      pbVar3 = &DAT_0048e518 + local_1c;
      for (sVar20 = sVar10 * sVar8; 0 < sVar20; sVar20 = sVar20 - sVar10) {
        local_38 = *(int *)(in_stack_00000004 + (uint)*pbVar3 * 2 + 0x187);
        sVar12 = local_22 + 4;
        sVar16 = *(short *)(local_38 + 0x18);
        sVar21 = sVar20 + 4;
        if (sVar16 == 1) {
          *pcVar2 = '\x01';
        }
        if (*pcVar2 != '\0') {
          if (sVar16 == 0) {
            local_38 = *(int *)(in_stack_00000004 + (uint)*pbVar1 * 2 + 0x187);
            sVar16 = *(short *)(local_38 + 0x18);
          }
          *(ushort *)(DAT_0044f640 + 4) = (ushort)*(byte *)(local_38 + 0x21);
          if (sVar16 == 2) {
            if ((pcVar2[-1] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) != 2))
            {
              local_40 = (int)sVar12;
              iVar15 = (int)sVar21;
              iVar17 = (int)sVar12 + (int)sVar11;
              if (iVar17 < local_40) {
                iVar18 = iVar17;
                if (local_40 < iVar17) {
                  iVar18 = local_40;
                  local_40 = iVar17;
                }
                if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                   ((local_40 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
              else {
                iVar18 = iVar17;
                if (iVar17 < local_40) {
                  iVar18 = local_40;
                  local_40 = iVar17;
                }
                if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                     (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                    (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                   (*(int *)((int)DAT_0044f640 + 0x46) < local_40)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
            }
            if (((&DAT_00491824)[(int)local_1c - (int)sVar7] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 +
                                   (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                   0x187) + 0x18) != 2)) {
              iVar17 = (int)sVar21;
              iVar15 = (int)sVar12;
              local_74 = (int)sVar21 - (int)sVar10;
              if (iVar17 < local_74) {
                iVar18 = iVar17;
                if (local_74 < iVar17) {
                  iVar18 = local_74;
                  local_74 = iVar17;
                }
                if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar15)) ||
                   ((local_74 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar18)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
              else {
                iVar18 = iVar17;
                if (iVar17 < local_74) {
                  iVar18 = local_74;
                  local_74 = iVar17;
                }
                if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                     (*(int *)((int)DAT_0044f640 + 0x46) < iVar15)) ||
                    (iVar18 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                   (*(int *)((int)DAT_0044f640 + 0x42) < local_74)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
            }
            if ((pcVar2[1] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18) != 2))
            {
              local_a0 = (int)sVar12;
              iVar17 = (int)sVar12 + (int)sVar11;
              iVar15 = (int)sVar21 - (int)sVar10;
              if (iVar17 < local_a0) {
                iVar18 = iVar17;
                if (local_a0 < iVar17) {
                  iVar18 = local_a0;
                  local_a0 = iVar17;
                }
                if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                   ((local_a0 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
              else {
                iVar18 = iVar17;
                if (iVar17 < local_a0) {
                  iVar18 = local_a0;
                  local_a0 = iVar17;
                }
                if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                     (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                    (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                   (*(int *)((int)DAT_0044f640 + 0x46) < local_a0)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
            }
            if ((pcVar2[sVar7] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) + 0x18) !=
                2)) {
              iVar18 = (int)sVar21;
              iVar17 = (int)sVar12 + (int)sVar11;
              iVar15 = (int)sVar21 - (int)sVar10;
              if (iVar18 < iVar15) {
                iVar19 = iVar18;
                if (iVar15 < iVar18) {
                  iVar19 = iVar15;
                  iVar15 = iVar18;
                }
                if (((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                   ((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar19)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
              else {
                iVar19 = iVar18;
                if (iVar18 < iVar15) {
                  iVar19 = iVar15;
                  iVar15 = iVar18;
                }
                if ((((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                     (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                    (iVar19 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                   (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
            }
          }
          else {
            if (((sVar16 == 3) || (sVar16 == 10)) ||
               ((sVar16 == 6 || ((sVar16 == 9 || (sVar16 == 0xd)))))) {
              if (sVar16 == 9) {
                *(undefined2 *)(DAT_0044f640 + 4) = 0xcd;
              }
              (**(code **)(*DAT_0044f640 + 0x3c))();
            }
            if ((sVar16 == 8) || (sVar16 == 0xc)) {
              (**(code **)(*DAT_0044f640 + 0x3c))();
            }
            else if (sVar16 == 7) {
              if (*(char *)(local_38 + 0x74) == '\x01') {
                *(undefined2 *)(DAT_0044f640 + 4) = 0x2c;
              }
              if (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) != 2
                 ) {
                if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18)
                     == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) ==
                    7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18) !=
                    2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                       == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                      == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    local_fc = sVar12 + 1;
                    iVar17 = (int)sVar12 + (int)sVar11;
                    iVar15 = (int)sVar21 - ((int)sVar10 >> 1);
                    if (iVar17 < local_fc) {
                      iVar18 = iVar17;
                      if (local_fc < iVar17) {
                        iVar18 = local_fc;
                        local_fc = iVar17;
                      }
                      if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                         ((local_fc < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                    else {
                      iVar18 = iVar17;
                      if (iVar17 < local_fc) {
                        iVar18 = local_fc;
                        local_fc = iVar17;
                      }
                      if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                           (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                          (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                         (*(int *)((int)DAT_0044f640 + 0x46) < local_fc)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                  }
                }
              }
              if (*(short *)(*(int *)(in_stack_00000004 +
                                     (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                     0x187) + 0x18) != 2) {
                if ((*(short *)(*(int *)(in_stack_00000004 +
                                        (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2
                                        + 0x187) + 0x18) == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 +
                                       (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                       0x187) + 0x18) == 7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) + 0x18)
                    != 2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                 0x18) == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                0x18) == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    iVar17 = (int)sVar12 + ((int)sVar11 >> 1);
                    iVar18 = sVar21 + -1;
                    iVar15 = (int)sVar21 - (int)sVar10;
                    if (iVar18 < iVar15) {
                      iVar19 = iVar18;
                      if (iVar15 < iVar18) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if (((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                         ((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar19)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                    else {
                      iVar19 = iVar18;
                      if (iVar18 < iVar15) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if ((((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                           (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                          (iVar19 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                         (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                  }
                }
              }
            }
            else if (sVar16 == 4) {
              if (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) != 2
                 ) {
                if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18)
                     == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) ==
                    7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18) !=
                    2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                       == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                      == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    local_160 = sVar12 + 1;
                    iVar17 = (int)sVar12 + (int)sVar11;
                    iVar15 = (int)sVar21 - ((int)sVar10 >> 1);
                    if (iVar17 < local_160) {
                      iVar18 = iVar17;
                      if (local_160 < iVar17) {
                        iVar18 = local_160;
                        local_160 = iVar17;
                      }
                      if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                         ((local_160 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                    else {
                      iVar18 = iVar17;
                      if (iVar17 < local_160) {
                        iVar18 = local_160;
                        local_160 = iVar17;
                      }
                      if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                           (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                          (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                         (*(int *)((int)DAT_0044f640 + 0x46) < local_160)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                  }
                }
              }
              if (*(short *)(*(int *)(in_stack_00000004 +
                                     (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                     0x187) + 0x18) != 2) {
                if ((*(short *)(*(int *)(in_stack_00000004 +
                                        (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2
                                        + 0x187) + 0x18) == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 +
                                       (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                       0x187) + 0x18) == 7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) + 0x18)
                    != 2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                 0x18) == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                0x18) == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    iVar17 = (int)sVar12 + ((int)sVar11 >> 1);
                    iVar18 = sVar21 + -1;
                    iVar15 = (int)sVar21 - (int)sVar10;
                    if (iVar18 < iVar15) {
                      iVar19 = iVar18;
                      if (iVar15 < iVar18) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if (((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                         ((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar19)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                    else {
                      iVar19 = iVar18;
                      if (iVar18 < iVar15) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if ((((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                           (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                          (iVar19 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                         (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                  }
                }
              }
            }
            else if (sVar16 == 1) {
              local_26 = sVar12;
              local_24 = sVar21;
            }
          }
        }
        pbVar3 = pbVar3 + 1;
        pcVar2 = pcVar2 + 1;
        pbVar1 = pbVar1 + 1;
        local_1c = local_1c + 1;
      }
      sVar20 = *(short *)(*(int *)(in_stack_00000004 + 0x3a5) + 0x3c);
      sVar12 = (local_24 - sVar10) + 1;
      sVar16 = local_26 + 1;
      if (((sVar20 < 0x155) || (0x168 < sVar20)) && ((sVar20 < 0 || (0x13 < sVar20)))) {
        if ((sVar20 < 0x14) || (0x40 < sVar20)) {
          if ((sVar20 < 0x41) || (0x6d < sVar20)) {
            if ((sVar20 < 0x6e) || (0x9a < sVar20)) {
              if ((sVar20 < 0x9b) || (199 < sVar20)) {
                if ((sVar20 < 200) || (0xf4 < sVar20)) {
                  if ((sVar20 < 0xf5) || (0x121 < sVar20)) {
                    if ((0x121 < sVar20) && (sVar20 < 0x155)) {
                      if (((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                         (((*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12 ||
                           (sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 4))();
                      }
                      if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                         ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 4))();
                      }
                      if (((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
                         (((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 4))();
                      }
                    }
                  }
                  else {
                    if (((((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                         (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12)) ||
                        (sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                       (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)) {
                      bVar9 = false;
                    }
                    else {
                      bVar9 = true;
                    }
                    if (bVar9) {
                      (**(code **)(*DAT_0044f640 + 4))();
                    }
                    if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                        (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                       ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                        (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                      bVar9 = false;
                    }
                    else {
                      bVar9 = true;
                    }
                    if (bVar9) {
                      (**(code **)(*DAT_0044f640 + 4))();
                    }
                    if (((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                        (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
                       ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                        (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                      bVar9 = false;
                    }
                    else {
                      bVar9 = true;
                    }
                    if (bVar9) {
                      (**(code **)(*DAT_0044f640 + 4))();
                    }
                  }
                }
                else {
                  if (((((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                       (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12)) ||
                      ((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                     (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (bVar9) {
                    (**(code **)(*DAT_0044f640 + 4))();
                  }
                  if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                      (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                     ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                      (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (bVar9) {
                    (**(code **)(*DAT_0044f640 + 4))();
                  }
                  if (((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                      (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
                     ((sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                      (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (bVar9) {
                    (**(code **)(*DAT_0044f640 + 4))();
                  }
                }
              }
              else {
                if ((((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                     (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                    ((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                   (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 4))();
                }
                if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                   ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 4))();
                }
                if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                   ((sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 4))();
                }
              }
            }
            else {
              if ((((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                   (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
                  ((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                 (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                (**(code **)(*DAT_0044f640 + 4))();
              }
              if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                  (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                 ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                  (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                (**(code **)(*DAT_0044f640 + 4))();
              }
              if ((((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                  (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12)) ||
                 ((sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                  (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                (**(code **)(*DAT_0044f640 + 4))();
              }
            }
          }
          else {
            if ((((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                 (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
                (sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
               (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              (**(code **)(*DAT_0044f640 + 4))();
            }
            if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
               ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              (**(code **)(*DAT_0044f640 + 4))();
            }
            if ((((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12)) ||
               ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              (**(code **)(*DAT_0044f640 + 4))();
            }
          }
        }
        else {
          if ((((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
               (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
              (sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
             (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            (**(code **)(*DAT_0044f640 + 4))();
          }
          if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
              (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
             ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
              (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            (**(code **)(*DAT_0044f640 + 4))();
          }
          if ((((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
              (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12)) ||
             (((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e) ||
              (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)))) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            (**(code **)(*DAT_0044f640 + 4))();
          }
        }
      }
      else {
        if ((((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
             (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
            (sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
           (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          (**(code **)(*DAT_0044f640 + 4))();
        }
        if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
            (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
           ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
            (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          (**(code **)(*DAT_0044f640 + 4))();
        }
        if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
            (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
           (((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e) ||
            (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)))) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          (**(code **)(*DAT_0044f640 + 4))();
        }
      }
      local_22 = local_22 + sVar11;
    } while (local_22 < sVar14);
  }
  FUN_004153b4();
  return;
}

