/* Ghidra address: 00411848; FUN_00411848 */

undefined2 __cdecl FUN_00411848(int param_1,byte param_2,int param_3)

{
  double dVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_88 [3];
  short local_7c;
  short local_76;
  int local_54 [2];
  int local_4c;
  short local_1e;
  int local_1c;
  int local_18;
  int local_14;
  short local_10 [2];
  int local_c;
  int local_8;
  
  iVar3 = FUN_00416524(DAT_004f1434);
  if (-1 < (short)iVar3) {
    puVar4 = FUN_00412f78(*(int *)(DAT_004f1434 + 0x30e + (uint)param_2 * 4),(byte)iVar3);
    FUN_004165dc(DAT_004f1434,(byte)iVar3,puVar4);
    if ((*(byte *)((int)puVar4 + 0x1b) & 0x40) == 0) {
      iVar3 = 32000;
    }
    else {
      iVar3 = *(int *)((int)puVar4 + 0x49);
    }
    piVar7 = (int *)(param_1 + 0x31);
    piVar8 = local_88;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    local_88[1] = local_88[1] - *(short *)(param_1 + 0xbf);
    local_8 = FUN_004114ec(param_1,param_3,local_7c,local_54);
    local_c = local_88[2] - local_4c;
    if ((local_8 != 0) &&
       ((local_88[0] - local_54[0]) * (local_88[0] - local_54[0]) + local_c * local_c <=
        iVar3 * iVar3)) {
      local_10[1] = 0;
      local_10[0] = 0;
      local_54[0] = local_54[0] - local_88[0];
      if (local_54[0] < 0) {
        local_54[0] = -local_54[0];
      }
      local_14 = local_4c - local_88[2];
      if (local_14 < 0) {
        local_14 = -local_14;
      }
      if ((local_54[0] != 0) || (local_14 != 0)) {
        dVar1 = (double)(local_54[0] * local_54[0] + local_14 * local_14);
        FUN_00433310(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
      }
      local_18 = FUN_00433130();
      iVar3 = FUN_00416644(DAT_004f1434,local_54,2,1);
      local_1c = (int)*(short *)(iVar3 + 0x1f);
      if (param_3 == 1) {
        iVar3 = -1;
      }
      else {
        iVar3 = (((&DAT_0053ca1c)[local_76] * local_18) / (int)(&DAT_0053cfc0)[local_76] -
                local_88[1]) - local_1c;
      }
      sVar2 = (**(code **)(*(int *)(local_8 + 0x14) + 0xc))();
      if ((sVar2 <= iVar3) || (iVar3 < 1)) {
        sVar2 = (**(code **)(*(int *)(local_8 + 0x14) + 0xc))();
        sVar2 = FUN_00426780(local_18,-local_88[1] - (((int)sVar2 >> 1) + local_1c));
        FUN_0040f8c4(local_10,0x168 - sVar2);
        FUN_0040f894(&local_1e,local_10[0] - local_76);
        if (0x10e < local_1e) {
          FUN_0040f8c4(&local_1e,0x168 - local_1e);
        }
        if (0xb4 < local_1e) {
          FUN_0040f8c4(&local_1e,local_1e + -0xb4);
        }
        if (0x5a < local_1e) {
          FUN_0040f8c4(&local_1e,0xb4 - local_1e);
        }
        if ((int)local_1e < *(int *)(param_1 + 0xb5)) {
          local_76 = local_10[0];
        }
      }
    }
    local_76 = local_76 + *(short *)(&DAT_00439b68 + DAT_00439b84 * 4);
    local_7c = local_7c + *(short *)(&DAT_00439b74 + DAT_00439b88 * 4);
    DAT_00439b84 = (DAT_00439b84 + 1) % 3;
    DAT_00439b88 = DAT_00439b88 + 1 & 3;
    uVar5 = FUN_0041316c((int *)puVar4,local_88,param_1);
    if ((short)uVar5 != 0) {
      return *(undefined2 *)((int)puVar4 + 0x7d);
    }
  }
  return 0;
}

