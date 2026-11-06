/* Ghidra address: 00428278; FUN_00428278 */

void __cdecl FUN_00428278(int *param_1,int *param_2)

{
  short sVar1;
  undefined2 uVar2;
  bool bVar3;
  short sVar4;
  short *psVar5;
  short sVar6;
  int *piVar7;
  short sVar8;
  ushort uVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  short *local_4c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  
  local_1a = (short)*param_2;
  sVar6 = local_1a + -1;
  sVar1 = local_1a * 2;
  if (0x14 < local_1a) {
    local_1a = 0x14;
  }
  local_a = (short)param_2[2];
  local_14 = 1;
  local_8 = local_a;
  piVar7 = param_2;
  if (1 < sVar1) {
    do {
      piVar7 = piVar7 + 2;
      if (*piVar7 < (int)local_8) {
        local_8 = (short)*piVar7;
      }
      if ((int)local_a < *piVar7) {
        local_a = (short)*piVar7;
      }
      local_14 = local_14 + 2;
    } while (local_14 < sVar1);
  }
  for (; local_8 <= local_a; local_8 = local_8 + 1) {
    local_18 = -1;
    local_16 = 0;
    local_4c = (short *)((int)&DAT_0053d640 + 2);
    piVar7 = param_2 + 1;
    if (0 < local_1a) {
      do {
        sVar1 = (short)piVar7[1];
        if (local_16 == sVar6) {
          local_10 = (short)param_2[1];
          local_12 = (short)param_2[2];
        }
        else {
          local_10 = (short)piVar7[2];
          local_12 = (short)piVar7[3];
        }
        local_e = sVar1;
        local_c = (short)*piVar7;
        if (local_12 < sVar1) {
          local_c = local_10;
          local_e = local_12;
          local_12 = sVar1;
          local_10 = (short)*piVar7;
        }
        psVar10 = (short *)(&DAT_0053d66e + local_16 * 2);
        psVar5 = (short *)(&DAT_0053d698 + local_16 * 2);
        if (local_8 == local_e) {
          *psVar5 = 0;
          *psVar10 = local_c;
        }
        else if ((local_e <= local_8) && (local_8 <= local_12)) {
          local_12 = local_12 - local_e;
          if (local_10 < local_c) {
            *psVar5 = *psVar5 + (local_c - local_10) * 2;
            while (local_12 < *psVar5) {
              *psVar5 = *psVar5 + local_12 * -2;
              *psVar10 = *psVar10 + -1;
            }
          }
          else {
            *psVar5 = *psVar5 + (local_10 - local_c) * 2;
            while (local_12 < *psVar5) {
              *psVar5 = *psVar5 + local_12 * -2;
              *psVar10 = *psVar10 + 1;
            }
          }
          local_18 = local_18 + 1;
          local_4c = local_4c + 1;
          *local_4c = local_16;
        }
        local_16 = local_16 + 1;
        piVar7 = piVar7 + 2;
      } while (local_16 < local_1a);
    }
    uVar11 = (int)local_18 >> 1;
    uVar9 = (ushort)uVar11;
    while (0 < (short)uVar9) {
      sVar8 = (short)uVar11;
      for (sVar1 = sVar8; sVar1 < local_18; sVar1 = sVar1 + 1) {
        for (sVar4 = sVar1 - sVar8;
            (-1 < sVar4 &&
            ((short)(&DAT_0053d644)[(int)sVar4 + (int)sVar8] < (short)(&DAT_0053d644)[sVar4]));
            sVar4 = sVar4 - sVar8) {
          uVar2 = (&DAT_0053d644)[sVar4];
          (&DAT_0053d644)[sVar4] = (&DAT_0053d644)[(int)sVar4 + (int)sVar8];
          (&DAT_0053d644)[(int)sVar4 + (int)sVar8] = uVar2;
        }
      }
      uVar9 = sVar8 >> 1;
      uVar11 = (uint)uVar9;
    }
    local_14 = 0;
    local_4c = &DAT_0053d646;
    if (0 < local_18) {
      do {
        iVar15 = (int)local_8;
        iVar12 = (int)*(short *)(&DAT_0053d66e + *local_4c * 2);
        iVar14 = (int)*(short *)(&DAT_0053d66e + local_4c[-1] * 2);
        if (iVar12 < iVar14) {
          iVar13 = iVar12;
          if (iVar14 < iVar12) {
            iVar13 = iVar14;
            iVar14 = iVar12;
          }
          if (((iVar15 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar15))
             || ((iVar14 < *(int *)((int)param_1 + 0x3a) || (*(int *)((int)param_1 + 0x42) < iVar13)
                 ))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            (**(code **)(*param_1 + 0x14))();
          }
        }
        else {
          iVar13 = iVar12;
          if (iVar12 < iVar14) {
            iVar13 = iVar14;
            iVar14 = iVar12;
          }
          if ((((iVar15 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar15)
               ) || (iVar13 < *(int *)((int)param_1 + 0x3a))) ||
             (*(int *)((int)param_1 + 0x42) < iVar14)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            (**(code **)(*param_1 + 0x14))();
          }
        }
        local_14 = local_14 + 2;
        local_4c = local_4c + 2;
      } while (local_14 < local_18);
    }
  }
  return;
}

