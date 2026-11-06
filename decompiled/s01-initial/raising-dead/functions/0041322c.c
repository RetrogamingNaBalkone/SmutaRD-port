/* Ghidra address: 0041322c; FUN_0041322c */

void __cdecl FUN_0041322c(int *param_1)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  byte bVar12;
  undefined4 local_b0 [13];
  int local_7c [6];
  int local_64;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  bVar12 = 0;
  local_8 = 0x40000;
  *(int *)((int)param_1 + 0x51) =
       (int)(short)(**(short **)((int)param_1 + 0x65) * *(short *)((int)param_1 + 0x1d)) >> 1;
  if (*(short *)((int)param_1 + 0x79) < 1) {
    local_c = *(undefined4 *)((int)param_1 + 0x49);
    local_10 = -(int)DAT_004f1434[0x3a7] >> 3;
    local_14 = *(int *)((int)param_1 + 0x49) / local_10;
    piVar9 = (int *)((int)param_1 + 0x31);
    piVar11 = local_7c;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar11 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar11 = piVar11 + 1;
    }
    local_64 = local_64 % local_10;
    if (local_64 != 0) {
      local_14 = local_14 + 1;
    }
    while (iVar5 = local_14 + -1, bVar1 = 0 < local_14, local_14 = iVar5, bVar1) {
      iVar5 = FUN_00416644((int)DAT_004f1434,local_7c,2,1);
      local_64 = local_10;
      iVar4 = -(int)*(short *)(iVar5 + 0x1f) - local_7c[1];
      if ((iVar4 < 1) || (*(short *)(iVar5 + 0x75) < iVar4)) {
        *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x92);
        *(undefined2 *)((int)param_1 + 0x71) = 0xffff;
        (**(code **)(**(int **)((int)param_1 + 0x6d) + 0xc))();
        *(undefined2 *)((int)param_1 + 0x79) = 1;
        break;
      }
      local_18 = local_7c[2];
      local_1c = local_7c[0];
      sVar2 = (short)(local_7c[2] / (int)DAT_004f1434[0x3a7]);
      sVar7 = (short)(local_7c[0] / (int)DAT_004f1434[0x3a7]);
      if (sVar7 < 0) {
        sVar7 = 0;
      }
      if (*DAT_004f1434 + -1 < (int)sVar7) {
        sVar7 = *DAT_004f1434 + -1;
      }
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      if (DAT_004f1434[2] + -1 < (int)sVar2) {
        sVar2 = DAT_004f1434[2] + -1;
      }
      iVar4 = *(int *)(DAT_004f1434 +
                      (uint)(byte)(&DAT_004f5f9c)
                                  [(short)((short)((int)sVar2 * *(int *)(DAT_004f1434 + 0x25b6)) +
                                          sVar7)] * 2 + 0x187);
      puVar8 = (undefined4 *)((int)param_1 + 0x31);
      puVar10 = local_b0;
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      piVar9 = local_7c;
      piVar11 = (int *)((int)param_1 + 0x31);
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar11 = *piVar9;
        piVar9 = piVar9 + (uint)bVar12 * -2 + 1;
        piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
      }
      (**(code **)(*(int *)(iVar4 + 0x14) + 0x20))();
      puVar8 = local_b0;
      puVar10 = (undefined4 *)((int)param_1 + 0x31);
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      if ((~local_8 & 0x40000) != 0) {
        *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x92);
        *(undefined2 *)((int)param_1 + 0x71) = 0xffff;
        (**(code **)(**(int **)((int)param_1 + 0x6d) + 0xc))();
        *(undefined2 *)((int)param_1 + 0x79) = 1;
        break;
      }
      if ((local_14 == 0) && ((*(byte *)((int)param_1 + 0x1b) & 0x40) != 0)) {
        *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) | 0x400;
        *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) & 0xefff;
        DAT_004f1434[0x3a9] = DAT_004f1434[0x3a9] + -1;
        FUN_0040e374(param_1);
        return;
      }
      local_20 = 0x40;
      local_24 = local_7c[2];
      local_28 = local_7c[0];
      sVar2 = (short)(local_7c[2] / (int)DAT_004f1434[0x3a7]);
      sVar7 = (short)(local_7c[0] / (int)DAT_004f1434[0x3a7]);
      if (sVar7 < 0) {
        sVar7 = 0;
      }
      if (*DAT_004f1434 + -1 < (int)sVar7) {
        sVar7 = *DAT_004f1434 + -1;
      }
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      if (DAT_004f1434[2] + -1 < (int)sVar2) {
        sVar2 = DAT_004f1434[2] + -1;
      }
      iVar4 = *(int *)(DAT_004f1434 +
                      (uint)(byte)(&DAT_004f4e98)
                                  [(short)((short)((int)sVar2 * *(int *)(DAT_004f1434 + 0x25b6)) +
                                          sVar7)] * 2 + 0x187);
      if ((((*(short *)(iVar4 + 0x18) != 0) && (*(short *)(iVar4 + 0x18) != 8)) &&
          (iVar4 != *(int *)((int)param_1 + 0x8a))) &&
         ((*(int *)((int)param_1 + 0x9a) != 0 ||
          (*(short *)(*(int *)((int)param_1 + 0x8a) + 0x18) != *(short *)(iVar4 + 0x18))))) {
        sVar2 = (**(code **)(*(int *)(iVar4 + 0x14) + 0xc))();
        sVar2 = sVar2 + *(short *)(iVar5 + 0x1f) + *(short *)((int)param_1 + 0x35);
        if (*(short *)(iVar4 + 0x18) == 1) {
          sVar2 = sVar2 + 0xdc;
        }
        if ((0 < sVar2) &&
           ((**(code **)(*(int *)(iVar4 + 0x14) + 0x20))(), (~local_8 & 0x40000) != 0)) {
          if ((*(short *)(iVar4 + 0x18) == 1) ||
             ((*(short *)(iVar4 + 0x18) == 9 && (*(short *)(iVar4 + 0xfd) == 0)))) {
            *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x8e);
          }
          else {
            *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x92);
            (**(code **)(**(int **)((int)param_1 + 0x6d) + 0xc))();
          }
          *(undefined2 *)((int)param_1 + 0x71) = 0xffff;
          *(undefined2 *)((int)param_1 + 0x79) = 1;
          break;
        }
      }
      local_2c = local_7c[2] + -0x40;
      local_30 = local_7c[0] + -0x40;
      sVar2 = (short)((local_7c[2] + -0x40) / (int)DAT_004f1434[0x3a7]);
      sVar7 = (short)((local_7c[0] + -0x40) / (int)DAT_004f1434[0x3a7]);
      if (sVar7 < 0) {
        sVar7 = 0;
      }
      if (*DAT_004f1434 + -1 < (int)sVar7) {
        sVar7 = *DAT_004f1434 + -1;
      }
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      if (DAT_004f1434[2] + -1 < (int)sVar2) {
        sVar2 = DAT_004f1434[2] + -1;
      }
      iVar4 = *(int *)(DAT_004f1434 +
                      (uint)(byte)(&DAT_004f4e98)
                                  [(short)((short)((int)sVar2 * *(int *)(DAT_004f1434 + 0x25b6)) +
                                          sVar7)] * 2 + 0x187);
      if ((((*(short *)(iVar4 + 0x18) != 0) && (*(short *)(iVar4 + 0x18) != 8)) &&
          (iVar4 != *(int *)((int)param_1 + 0x8a))) &&
         ((*(int *)((int)param_1 + 0x9a) != 0 ||
          (*(short *)(*(int *)((int)param_1 + 0x8a) + 0x18) != *(short *)(iVar4 + 0x18))))) {
        sVar2 = (**(code **)(*(int *)(iVar4 + 0x14) + 0xc))();
        sVar2 = sVar2 + *(short *)(iVar5 + 0x1f) + *(short *)((int)param_1 + 0x35);
        if (*(short *)(iVar4 + 0x18) == 1) {
          sVar2 = sVar2 + 0xdc;
        }
        if ((0 < sVar2) &&
           ((**(code **)(*(int *)(iVar4 + 0x14) + 0x20))(), (~local_8 & 0x40000) != 0)) {
          if ((*(short *)(iVar4 + 0x18) == 1) ||
             ((*(short *)(iVar4 + 0x18) == 9 && (*(short *)(iVar4 + 0xfd) == 0)))) {
            *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x8e);
          }
          else {
            *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x92);
            (**(code **)(**(int **)((int)param_1 + 0x6d) + 0xc))();
          }
          *(undefined2 *)((int)param_1 + 0x71) = 0xffff;
          *(undefined2 *)((int)param_1 + 0x79) = 1;
          break;
        }
      }
      local_34 = local_7c[2] + 0x40;
      local_38 = local_7c[0] + 0x40;
      sVar2 = (short)((local_7c[2] + 0x40) / (int)DAT_004f1434[0x3a7]);
      sVar7 = (short)((local_7c[0] + 0x40) / (int)DAT_004f1434[0x3a7]);
      if (sVar7 < 0) {
        sVar7 = 0;
      }
      if (*DAT_004f1434 + -1 < (int)sVar7) {
        sVar7 = *DAT_004f1434 + -1;
      }
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      if (DAT_004f1434[2] + -1 < (int)sVar2) {
        sVar2 = DAT_004f1434[2] + -1;
      }
      iVar4 = *(int *)(DAT_004f1434 +
                      (uint)(byte)(&DAT_004f4e98)
                                  [(short)((short)((int)sVar2 * *(int *)(DAT_004f1434 + 0x25b6)) +
                                          sVar7)] * 2 + 0x187);
      if ((((*(short *)(iVar4 + 0x18) != 0) && (*(short *)(iVar4 + 0x18) != 8)) &&
          (iVar4 != *(int *)((int)param_1 + 0x8a))) &&
         ((*(int *)((int)param_1 + 0x9a) != 0 ||
          (*(short *)(*(int *)((int)param_1 + 0x8a) + 0x18) != *(short *)(iVar4 + 0x18))))) {
        sVar2 = (**(code **)(*(int *)(iVar4 + 0x14) + 0xc))();
        sVar2 = sVar2 + *(short *)(iVar5 + 0x1f) + *(short *)((int)param_1 + 0x35);
        if (*(short *)(iVar4 + 0x18) == 1) {
          sVar2 = sVar2 + 0xdc;
        }
        if ((0 < sVar2) &&
           ((**(code **)(*(int *)(iVar4 + 0x14) + 0x20))(), (~local_8 & 0x40000) != 0)) {
          if ((*(short *)(iVar4 + 0x18) == 1) ||
             ((*(short *)(iVar4 + 0x18) == 9 && (*(short *)(iVar4 + 0xfd) == 0)))) {
            *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x8e);
          }
          else {
            *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x92);
            (**(code **)(**(int **)((int)param_1 + 0x6d) + 0xc))();
          }
          *(undefined2 *)((int)param_1 + 0x71) = 0xffff;
          *(undefined2 *)((int)param_1 + 0x79) = 1;
          break;
        }
      }
      local_3c = local_7c[2] + 0x40;
      local_40 = local_7c[0] + -0x40;
      sVar2 = (short)((local_7c[2] + 0x40) / (int)DAT_004f1434[0x3a7]);
      sVar7 = (short)((local_7c[0] + -0x40) / (int)DAT_004f1434[0x3a7]);
      if (sVar7 < 0) {
        sVar7 = 0;
      }
      if (*DAT_004f1434 + -1 < (int)sVar7) {
        sVar7 = *DAT_004f1434 + -1;
      }
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      if (DAT_004f1434[2] + -1 < (int)sVar2) {
        sVar2 = DAT_004f1434[2] + -1;
      }
      iVar4 = *(int *)(DAT_004f1434 +
                      (uint)(byte)(&DAT_004f4e98)
                                  [(short)((short)((int)sVar2 * *(int *)(DAT_004f1434 + 0x25b6)) +
                                          sVar7)] * 2 + 0x187);
      if ((((*(short *)(iVar4 + 0x18) != 0) && (*(short *)(iVar4 + 0x18) != 8)) &&
          (iVar4 != *(int *)((int)param_1 + 0x8a))) &&
         ((*(int *)((int)param_1 + 0x9a) != 0 ||
          (*(short *)(*(int *)((int)param_1 + 0x8a) + 0x18) != *(short *)(iVar4 + 0x18))))) {
        sVar2 = (**(code **)(*(int *)(iVar4 + 0x14) + 0xc))();
        sVar2 = sVar2 + *(short *)(iVar5 + 0x1f) + *(short *)((int)param_1 + 0x35);
        if (*(short *)(iVar4 + 0x18) == 1) {
          sVar2 = sVar2 + 0xdc;
        }
        if ((0 < sVar2) &&
           ((**(code **)(*(int *)(iVar4 + 0x14) + 0x20))(), (~local_8 & 0x40000) != 0)) {
          if ((*(short *)(iVar4 + 0x18) == 1) ||
             ((*(short *)(iVar4 + 0x18) == 9 && (*(short *)(iVar4 + 0xfd) == 0)))) {
            *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x8e);
          }
          else {
            *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x92);
            (**(code **)(**(int **)((int)param_1 + 0x6d) + 0xc))();
          }
          *(undefined2 *)((int)param_1 + 0x71) = 0xffff;
          *(undefined2 *)((int)param_1 + 0x79) = 1;
          break;
        }
      }
      local_44 = local_7c[2] + -0x40;
      local_48 = local_7c[0] + 0x40;
      sVar2 = (short)((local_7c[2] + -0x40) / (int)DAT_004f1434[0x3a7]);
      sVar7 = (short)((local_7c[0] + 0x40) / (int)DAT_004f1434[0x3a7]);
      if (sVar7 < 0) {
        sVar7 = 0;
      }
      if (*DAT_004f1434 + -1 < (int)sVar7) {
        sVar7 = *DAT_004f1434 + -1;
      }
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      if (DAT_004f1434[2] + -1 < (int)sVar2) {
        sVar2 = DAT_004f1434[2] + -1;
      }
      iVar4 = *(int *)(DAT_004f1434 +
                      (uint)(byte)(&DAT_004f4e98)
                                  [(short)((short)((int)sVar2 * *(int *)(DAT_004f1434 + 0x25b6)) +
                                          sVar7)] * 2 + 0x187);
      if ((((*(short *)(iVar4 + 0x18) != 0) && (*(short *)(iVar4 + 0x18) != 8)) &&
          (iVar4 != *(int *)((int)param_1 + 0x8a))) &&
         ((*(int *)((int)param_1 + 0x9a) != 0 ||
          (*(short *)(*(int *)((int)param_1 + 0x8a) + 0x18) != *(short *)(iVar4 + 0x18))))) {
        sVar2 = (**(code **)(*(int *)(iVar4 + 0x14) + 0xc))();
        sVar2 = sVar2 + *(short *)(iVar5 + 0x1f) + *(short *)((int)param_1 + 0x35);
        if (*(short *)(iVar4 + 0x18) == 1) {
          sVar2 = sVar2 + 0xdc;
        }
        if ((0 < sVar2) &&
           ((**(code **)(*(int *)(iVar4 + 0x14) + 0x20))(), (~local_8 & 0x40000) != 0)) {
          if ((*(short *)(iVar4 + 0x18) == 1) ||
             ((*(short *)(iVar4 + 0x18) == 9 && (*(short *)(iVar4 + 0xfd) == 0)))) {
            *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x8e);
          }
          else {
            *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x92);
            (**(code **)(**(int **)((int)param_1 + 0x6d) + 0xc))();
          }
          *(undefined2 *)((int)param_1 + 0x71) = 0xffff;
          *(undefined2 *)((int)param_1 + 0x79) = 1;
          break;
        }
      }
      piVar9 = local_7c;
      piVar11 = (int *)((int)param_1 + 0x31);
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar11 = *piVar9;
        piVar9 = piVar9 + (uint)bVar12 * -2 + 1;
        piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
      }
    }
    *(undefined4 *)((int)param_1 + 0x49) = local_c;
    if (*(short *)((int)param_1 + 0x73) == 0) {
      do {
        sVar2 = FUN_004100cc((int)param_1,*(short **)((int)param_1 + 0x69));
        iVar5 = FUN_0040f3f8(*(short **)((int)param_1 + 0x69),(undefined2 *)((int)param_1 + 0x75),
                             (undefined2 *)((int)param_1 + 0x77),(undefined2 *)((int)param_1 + 0x73)
                             ,(short *)((int)param_1 + 0x71),sVar2);
        *(int *)((int)param_1 + 0x65) = iVar5;
      } while (iVar5 == 0);
    }
    if ((*(byte *)((int)param_1 + 0x1b) & 0x40) != 0) {
      do {
        sVar2 = FUN_004100cc((int)param_1,*(short **)((int)param_1 + 0x69));
        iVar5 = FUN_0040f3f8(*(short **)((int)param_1 + 0x96),(undefined2 *)((int)param_1 + 0x75),
                             (undefined2 *)((int)param_1 + 0x77),(undefined2 *)((int)param_1 + 0x73)
                             ,(short *)((int)param_1 + 0x71),sVar2);
        *(int *)((int)param_1 + 0x65) = iVar5;
      } while (iVar5 == 0);
    }
    if ((0 < *(short *)((int)param_1 + 0x73)) &&
       (*(short *)((int)param_1 + 0x73) = *(short *)((int)param_1 + 0x73) + -0x29,
       *(short *)((int)param_1 + 0x73) < 0)) {
      *(undefined2 *)((int)param_1 + 0x73) = 0;
    }
  }
  else {
    if (*(short *)((int)param_1 + 0x73) == 0) {
      sVar2 = FUN_004100cc((int)param_1,*(short **)((int)param_1 + 0x69));
      uVar3 = FUN_0040f3f8(*(short **)((int)param_1 + 0x96),(undefined2 *)((int)param_1 + 0x75),
                           (undefined2 *)((int)param_1 + 0x77),(undefined2 *)((int)param_1 + 0x73),
                           (short *)((int)param_1 + 0x71),sVar2);
      *(undefined4 *)((int)param_1 + 0x65) = uVar3;
    }
    if (*(int *)((int)param_1 + 0x65) == 0) {
      if (*(short *)((int)param_1 + 0x73) == 0) {
        sVar2 = FUN_004100cc((int)param_1,*(short **)((int)param_1 + 0x69));
        uVar3 = FUN_0040f3f8(*(short **)((int)param_1 + 0x96),(undefined2 *)((int)param_1 + 0x75),
                             (undefined2 *)((int)param_1 + 0x77),(undefined2 *)((int)param_1 + 0x73)
                             ,(short *)((int)param_1 + 0x71),sVar2);
        *(undefined4 *)((int)param_1 + 0x65) = uVar3;
      }
      (**(code **)(**(int **)((int)param_1 + 0x6d) + 0x14))();
      *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) | 0x400;
      *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) & 0xefff;
      DAT_004f1434[0x3a9] = DAT_004f1434[0x3a9] + -1;
      FUN_0040e374(param_1);
    }
    if ((0 < *(short *)((int)param_1 + 0x73)) &&
       (*(short *)((int)param_1 + 0x73) = *(short *)((int)param_1 + 0x73) + -0x29,
       *(short *)((int)param_1 + 0x73) < 0)) {
      *(undefined2 *)((int)param_1 + 0x73) = 0;
    }
  }
  return;
}

