/* Ghidra address: 0042164c; FUN_0042164c */

void FUN_0042164c(void)

{
  bool bVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  short sVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  byte bVar11;
  int in_stack_00000004;
  undefined4 local_88 [13];
  int local_54 [6];
  int local_3c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  bVar11 = 0;
  local_8 = 0x40000;
  local_c = *(undefined4 *)(in_stack_00000004 + 0x30);
  *(int *)(in_stack_00000004 + 0x50) =
       (int)(short)(**(short **)(in_stack_00000004 + 100) * *(short *)(in_stack_00000004 + 0x1d)) >>
       1;
  if (*(short *)(in_stack_00000004 + 0x78) < 1) {
    local_10 = *(int *)(in_stack_00000004 + 0x48);
    local_14 = -(int)DAT_0048aab4[0x3a7] >> 3;
    local_18 = local_10 / local_14;
    piVar8 = (int *)(in_stack_00000004 + 0x30);
    piVar10 = local_54;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar10 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar10 = piVar10 + 1;
    }
    local_3c = local_3c % local_14;
    if (local_3c != 0) {
      local_18 = local_18 + 1;
    }
    while (iVar4 = local_18 + -1, bVar1 = 0 < local_18, local_18 = iVar4, bVar1) {
      local_1c = FUN_00411480();
      local_3c = local_14;
      iVar5 = (int)*(short *)(local_1c + 0x1f);
      iVar4 = -iVar5;
      if ((iVar4 - local_54[1] < 1) ||
         (iVar5 = (int)*(short *)(local_1c + 0x74), iVar5 < iVar4 - local_54[1])) {
        *(undefined4 *)(in_stack_00000004 + 0x95) = *(undefined4 *)(in_stack_00000004 + 0x91);
        *(undefined2 *)(in_stack_00000004 + 0x70) = 0xffff;
        FUN_0040a7a4(*(undefined4 *)(in_stack_00000004 + 0x6c),local_1c,iVar5,
                     *(undefined4 *)(in_stack_00000004 + 0x6c),0);
        *(undefined2 *)(in_stack_00000004 + 0x78) = 1;
        break;
      }
      local_20 = local_54[0];
      sVar3 = (short)(local_54[2] / (int)DAT_0048aab4[0x3a7]);
      sVar6 = (short)(local_54[0] / (int)DAT_0048aab4[0x3a7]);
      if (sVar6 < 0) {
        sVar6 = 0;
      }
      if (*DAT_0048aab4 + -1 < (int)sVar6) {
        sVar6 = *DAT_0048aab4 + -1;
      }
      if (sVar3 < 0) {
        sVar3 = 0;
      }
      if (DAT_0048aab4[2] + -1 < (int)sVar3) {
        sVar3 = DAT_0048aab4[2] + -1;
      }
      sVar6 = sVar6 + sVar3 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
      iVar4 = *(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar6] * 2 + 0x187);
      puVar7 = (undefined4 *)(in_stack_00000004 + 0x30);
      puVar9 = local_88;
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      piVar8 = local_54;
      piVar10 = (int *)(in_stack_00000004 + 0x30);
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
        piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
      }
      (**(code **)(*(int *)(iVar4 + 0x14) + 0x20))();
      puVar7 = local_88;
      puVar9 = (undefined4 *)(in_stack_00000004 + 0x30);
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      if ((~local_8 & 0x40000) != 0) {
        *(undefined4 *)(in_stack_00000004 + 0x95) = *(undefined4 *)(in_stack_00000004 + 0x91);
        *(undefined2 *)(in_stack_00000004 + 0x70) = 0xffff;
        FUN_0040a7a4(~local_8,*(undefined4 *)(in_stack_00000004 + 0x91),
                     *(undefined4 *)(in_stack_00000004 + 0x6c),
                     *(undefined4 *)(in_stack_00000004 + 0x6c),0);
        *(undefined2 *)(in_stack_00000004 + 0x78) = 1;
        break;
      }
      if ((local_18 == 0) && ((*(byte *)(in_stack_00000004 + 0x1b) & 0x40) != 0)) {
        *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x400;
        *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xefff;
        DAT_0048aab4[0x3a9] = DAT_0048aab4[0x3a9] + -1;
        FUN_00427d42();
        return;
      }
      iVar4 = *(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048e518)[sVar6] * 2 + 0x187);
      if ((((*(short *)(iVar4 + 0x18) != 0) && (*(short *)(iVar4 + 0x18) != 8)) &&
          (iVar4 != *(int *)(in_stack_00000004 + 0x89))) &&
         ((*(int *)(in_stack_00000004 + 0x99) != 0 ||
          (*(short *)(*(int *)(in_stack_00000004 + 0x89) + 0x18) != *(short *)(iVar4 + 0x18))))) {
        sVar3 = (**(code **)(*(int *)(iVar4 + 0x14) + 0xc))();
        sVar3 = sVar3 + *(short *)(local_1c + 0x1f) + *(short *)(in_stack_00000004 + 0x34);
        if (*(short *)(iVar4 + 0x18) == 1) {
          sVar3 = sVar3 + 0xdc;
        }
        if ((0 < sVar3) &&
           ((**(code **)(*(int *)(iVar4 + 0x14) + 0x20))(), (~local_8 & 0x40000) != 0)) {
          if ((*(short *)(iVar4 + 0x18) == 1) ||
             ((*(short *)(iVar4 + 0x18) == 9 && (*(short *)(iVar4 + 0xfc) == 0)))) {
            *(undefined4 *)(in_stack_00000004 + 0x95) = *(undefined4 *)(in_stack_00000004 + 0x8d);
          }
          else {
            *(undefined4 *)(in_stack_00000004 + 0x95) = *(undefined4 *)(in_stack_00000004 + 0x91);
            FUN_0040a7a4(*(undefined4 *)(in_stack_00000004 + 0x91),
                         *(undefined4 *)(in_stack_00000004 + 0x6c),extraout_ECX,
                         *(undefined4 *)(in_stack_00000004 + 0x6c),0);
          }
          *(undefined2 *)(in_stack_00000004 + 0x70) = 0xffff;
          *(undefined2 *)(in_stack_00000004 + 0x78) = 1;
          break;
        }
      }
      piVar8 = local_54;
      piVar10 = (int *)(in_stack_00000004 + 0x30);
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
        piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
      }
    }
    *(int *)(in_stack_00000004 + 0x48) = local_10;
    if (*(short *)(in_stack_00000004 + 0x72) == 0) {
      do {
        FUN_0041e4b4();
        iVar4 = FUN_00426946();
        *(int *)(in_stack_00000004 + 100) = iVar4;
      } while (iVar4 == 0);
    }
    if ((*(byte *)(in_stack_00000004 + 0x1b) & 0x40) != 0) {
      do {
        FUN_0041e4b4();
        iVar4 = FUN_00426946();
        *(int *)(in_stack_00000004 + 100) = iVar4;
      } while (iVar4 == 0);
    }
    *(short *)(in_stack_00000004 + 0x7c) =
         (short)((int)*(short *)(in_stack_00000004 + 0x7c) +
                 (int)*(short *)(in_stack_00000004 + 0x7e) >> 1);
    if ((0 < *(short *)(in_stack_00000004 + 0x72)) &&
       (*(short *)(in_stack_00000004 + 0x72) = *(short *)(in_stack_00000004 + 0x72) + -0x29,
       *(short *)(in_stack_00000004 + 0x72) < 0)) {
      *(undefined2 *)(in_stack_00000004 + 0x72) = 0;
    }
  }
  else {
    if (*(short *)(in_stack_00000004 + 0x72) == 0) {
      FUN_0041e4b4();
      uVar2 = FUN_00426946();
      *(undefined4 *)(in_stack_00000004 + 100) = uVar2;
    }
    if (*(int *)(in_stack_00000004 + 100) == 0) {
      if (*(short *)(in_stack_00000004 + 0x72) == 0) {
        FUN_0041e4b4();
        uVar2 = FUN_00426946();
        *(undefined4 *)(in_stack_00000004 + 100) = uVar2;
      }
      FUN_0040a7fc();
      *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x400;
      *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xefff;
      DAT_0048aab4[0x3a9] = DAT_0048aab4[0x3a9] + -1;
      FUN_00427d42();
    }
    if ((0 < *(short *)(in_stack_00000004 + 0x72)) &&
       (*(short *)(in_stack_00000004 + 0x72) = *(short *)(in_stack_00000004 + 0x72) + -0x29,
       *(short *)(in_stack_00000004 + 0x72) < 0)) {
      *(undefined2 *)(in_stack_00000004 + 0x72) = 0;
    }
  }
  return;
}

