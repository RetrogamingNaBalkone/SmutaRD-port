/* Ghidra address: 004158d8; FUN_004158d8 */

/* WARNING: Removing unreachable block (ram,0x00415c19) */
/* WARNING: Removing unreachable block (ram,0x00415aa3) */
/* WARNING: Removing unreachable block (ram,0x00415aca) */
/* WARNING: Removing unreachable block (ram,0x00415c40) */

void FUN_004158d8(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  short sVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  bool bVar9;
  short sVar10;
  short sVar11;
  ushort uVar12;
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
  int local_158;
  int local_fc;
  int local_a0;
  int local_74;
  int local_40;
  int local_3c;
  short local_36;
  short local_34;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_22;
  short local_1c;
  
  uVar13 = FUN_0042fc2c();
  sVar10 = (short)uVar13;
  uVar13 = FUN_0042fc2c();
  sVar11 = (short)uVar13;
  FUN_0040afbc();
  bVar5 = *(byte *)(*(int *)(in_stack_00000004 + 0x1c7) + 0x21);
  bVar6 = *(byte *)(*(int *)(in_stack_00000004 + 0x1c7) + 0x21);
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
  FUN_0040b7d8();
  local_2c = 0;
  if (*in_stack_00000004 + -1 < 0) {
    local_2c = *in_stack_00000004 + -1;
  }
  local_2a = 0;
  if (in_stack_00000004[2] + -1 < 0) {
    local_2a = in_stack_00000004[2] + -1;
  }
  local_1c = local_2a * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_2c;
  local_22 = 0;
  if (0 < sVar14) {
    do {
      pbVar1 = &DAT_00490720 + local_1c;
      pcVar2 = &DAT_00491824 + local_1c;
      for (sVar4 = sVar10 * sVar8; 0 < sVar4; sVar4 = sVar4 - sVar10) {
        if (((*pcVar2 != '\0') &&
            (uVar12 = (ushort)*(byte *)(*(int *)(in_stack_00000004 + (uint)*pbVar1 * 2 + 0x187) +
                                       0x21), uVar12 != bVar5)) && (uVar12 != bVar6)) {
          *(ushort *)(DAT_0044f640 + 4) = uVar12;
          (**(code **)(*DAT_0044f640 + 0x3c))();
        }
        pcVar2 = pcVar2 + 1;
        pbVar1 = pbVar1 + 1;
        local_1c = local_1c + 1;
      }
      local_22 = local_22 + sVar11;
    } while (local_22 < sVar14);
  }
  local_36 = 0;
  if (*in_stack_00000004 + -1 < 0) {
    local_36 = *in_stack_00000004 + -1;
  }
  local_34 = 0;
  if (in_stack_00000004[2] + -1 < 0) {
    local_34 = in_stack_00000004[2] + -1;
  }
  local_1c = local_34 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_36;
  local_22 = 0;
  if (0 < sVar14) {
    do {
      pbVar1 = &DAT_0048f61c + local_1c;
      pcVar2 = &DAT_00491824 + local_1c;
      pbVar3 = &DAT_0048e518 + local_1c;
      for (sVar4 = sVar10 * sVar8; 0 < sVar4; sVar4 = sVar4 - sVar10) {
        local_3c = *(int *)(in_stack_00000004 + (uint)*pbVar3 * 2 + 0x187);
        sVar21 = local_22 + 4;
        sVar20 = sVar4 + 4;
        sVar16 = *(short *)(local_3c + 0x18);
        if (sVar16 == 1) {
          *pcVar2 = '\x01';
        }
        if (*pcVar2 != '\0') {
          if (sVar16 == 0) {
            local_3c = *(int *)(in_stack_00000004 + (uint)*pbVar1 * 2 + 0x187);
            sVar16 = *(short *)(local_3c + 0x18);
          }
          *(ushort *)(DAT_0044f640 + 4) = (ushort)*(byte *)(local_3c + 0x21);
          if (sVar16 == 2) {
            if ((pcVar2[-1] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) != 2))
            {
              local_40 = (int)sVar21;
              iVar15 = (int)sVar20;
              iVar17 = (int)sVar21 + (int)sVar11;
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
              iVar17 = (int)sVar20;
              iVar15 = (int)sVar21;
              local_74 = (int)sVar20 - (int)sVar10;
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
              local_a0 = (int)sVar21;
              iVar17 = (int)sVar21 + (int)sVar11;
              iVar15 = (int)sVar20 - (int)sVar10;
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
              iVar18 = (int)sVar20;
              iVar17 = (int)sVar21 + (int)sVar11;
              iVar15 = (int)sVar20 - (int)sVar10;
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
            if ((in_stack_00000004[6] != 0) &&
               ((((sVar16 == 3 || (sVar16 == 10)) ||
                 ((sVar16 == 6 || ((sVar16 == 9 && (*(short *)(local_3c + 300) != 4)))))) ||
                (sVar16 == 0xd)))) {
              (**(code **)(*DAT_0044f640 + 0x3c))();
            }
            if ((sVar16 == 8) || (sVar16 == 0xc)) {
              (**(code **)(*DAT_0044f640 + 0x3c))();
            }
            else if (sVar16 == 7) {
              if (*(char *)(local_3c + 0x74) == '\x01') {
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
                    local_fc = sVar21 + 1;
                    iVar17 = (int)sVar21 + (int)sVar11;
                    iVar15 = (int)sVar20 - ((int)sVar10 >> 1);
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
                    iVar17 = (int)sVar21 + ((int)sVar11 >> 1);
                    iVar18 = sVar20 + -1;
                    iVar15 = (int)sVar20 - (int)sVar10;
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
                    local_158 = sVar21 + 1;
                    iVar17 = (int)sVar21 + (int)sVar11;
                    iVar15 = (int)sVar20 - ((int)sVar10 >> 1);
                    if (iVar17 < local_158) {
                      iVar18 = iVar17;
                      if (local_158 < iVar17) {
                        iVar18 = local_158;
                        local_158 = iVar17;
                      }
                      if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                         ((local_158 < *(int *)((int)DAT_0044f640 + 0x3e) ||
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
                      if (iVar17 < local_158) {
                        iVar18 = local_158;
                        local_158 = iVar17;
                      }
                      if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                           (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                          (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                         (*(int *)((int)DAT_0044f640 + 0x46) < local_158)) {
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
                    iVar17 = (int)sVar21 + ((int)sVar11 >> 1);
                    iVar18 = sVar20 + -1;
                    iVar15 = (int)sVar20 - (int)sVar10;
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
              local_28 = sVar21;
              local_26 = sVar20;
            }
          }
        }
        pbVar3 = pbVar3 + 1;
        pcVar2 = pcVar2 + 1;
        pbVar1 = pbVar1 + 1;
        local_1c = local_1c + 1;
      }
      sVar4 = *(short *)(*(int *)(in_stack_00000004 + 0x3a5) + 0x3c);
      sVar20 = (local_26 - sVar10) + 1;
      sVar16 = local_28 + 1;
      if (((sVar4 < 0x155) || (0x168 < sVar4)) && ((sVar4 < 0 || (0x13 < sVar4)))) {
        if ((sVar4 < 0x14) || (0x40 < sVar4)) {
          if ((sVar4 < 0x41) || (0x6d < sVar4)) {
            if ((sVar4 < 0x6e) || (0x9a < sVar4)) {
              if ((sVar4 < 0x9b) || (199 < sVar4)) {
                if ((sVar4 < 200) || (0xf4 < sVar4)) {
                  if ((sVar4 < 0xf5) || (0x121 < sVar4)) {
                    if ((0x121 < sVar4) && (sVar4 < 0x155)) {
                      if (((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                         (((*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20 ||
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
                      if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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
                      if (((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
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
                    if (((((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                         (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20)) ||
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
                    if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                        (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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
                    if (((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                        (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
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
                  if (((((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                       (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20)) ||
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
                  if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                      (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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
                  if (((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                      (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
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
                if ((((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                     (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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
                if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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
                if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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
              if ((((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                   (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
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
              if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                  (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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
              if ((((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                  (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20)) ||
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
            if ((((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                 (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
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
            if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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
            if ((((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20)) ||
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
          if ((((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
               (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
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
          if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
              (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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
          if ((((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
              (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20)) ||
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
        if ((((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
             (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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
        if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
            (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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
        if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
            (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
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

