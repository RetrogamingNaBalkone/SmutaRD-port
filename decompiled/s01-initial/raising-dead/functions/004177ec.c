/* Ghidra address: 004177ec; FUN_004177ec */

void __cdecl
FUN_004177ec(short *param_1,int *param_2,int *param_3,int param_4,int param_5,short *param_6,
            int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  if (0xff < param_8) {
    param_8 = 0xff;
  }
  local_8 = param_8;
  local_c = param_8;
  iVar4 = param_4 - iVar1;
  local_10 = param_5 - iVar2;
  if (*param_2 < param_4) {
    local_14 = (*param_2 / (int)param_1[0x3a7]) * (int)param_1[0x3a7] + ((int)param_1[0x3a7] >> 1);
    if ((param_4 < local_14) || (local_14 < *param_2)) {
      local_14 = *param_2;
    }
  }
  else {
    local_14 = (param_4 / (int)param_1[0x3a7]) * (int)param_1[0x3a7] + ((int)param_1[0x3a7] >> 1);
    if ((*param_2 < local_14) || (local_14 < param_4)) {
      local_14 = param_4;
    }
  }
  if (*param_3 < param_5) {
    local_18 = (*param_3 / (int)param_1[0x3a7]) * (int)param_1[0x3a7] + ((int)param_1[0x3a7] >> 1);
  }
  else {
    local_18 = (param_5 / (int)param_1[0x3a7]) * (int)param_1[0x3a7] + ((int)param_1[0x3a7] >> 1);
  }
  if (param_4 < iVar1) {
    local_8 = -param_8;
    iVar4 = -iVar4;
  }
  if (param_5 < iVar2) {
    local_c = -param_8;
    local_10 = -local_10;
  }
  iVar5 = param_4;
  iVar6 = param_5;
  if (local_10 < iVar4) {
    uVar3 = FUN_004169e0(param_1,param_4,iVar2,(short)param_8,param_6,param_7);
    if ((short)uVar3 == 0) {
      uVar3 = FUN_004169e0(param_1,param_4,local_18,(short)param_8,param_6,param_7);
      iVar6 = local_18;
      if ((short)uVar3 == 0) {
        if (local_8 < 0) {
          iVar5 = (iVar1 - iVar1 % (int)param_1[0x3a7]) + param_8;
        }
        else {
          iVar5 = (((iVar1 - iVar1 % (int)param_1[0x3a7]) + (int)param_1[0x3a7]) - param_8) + -1;
        }
        uVar3 = FUN_004169e0(param_1,iVar5,param_5,(short)param_8,param_6,param_7);
        iVar6 = param_5;
        if ((short)uVar3 == 0) {
          if (local_c < 0) {
            iVar6 = (iVar2 - iVar2 % (int)param_1[0x3a7]) + param_8;
          }
          else {
            iVar6 = (((iVar2 - iVar2 % (int)param_1[0x3a7]) + (int)param_1[0x3a7]) - param_8) + -1;
          }
        }
      }
    }
    else {
      uVar3 = FUN_004169e0(param_1,param_4,param_5,(short)param_8,param_6,param_7);
      if ((short)uVar3 == 0) {
        if (local_c < 0) {
          iVar6 = (iVar2 - iVar2 % (int)param_1[0x3a7]) + param_8;
        }
        else {
          iVar6 = (((iVar2 - iVar2 % (int)param_1[0x3a7]) + (int)param_1[0x3a7]) - param_8) + -1;
        }
      }
    }
  }
  else {
    uVar3 = FUN_004169e0(param_1,iVar1,param_5,(short)param_8,param_6,param_7);
    if ((short)uVar3 == 0) {
      uVar3 = FUN_004169e0(param_1,local_14,param_5,(short)param_8,param_6,param_7);
      iVar5 = local_14;
      if ((short)uVar3 == 0) {
        if (local_c < 0) {
          iVar6 = (iVar2 - iVar2 % (int)param_1[0x3a7]) + param_8;
        }
        else {
          iVar6 = (((iVar2 - iVar2 % (int)param_1[0x3a7]) + (int)param_1[0x3a7]) - param_8) + -1;
        }
        uVar3 = FUN_004169e0(param_1,param_4,iVar6,(short)param_8,param_6,param_7);
        iVar5 = param_4;
        if ((short)uVar3 == 0) {
          if (local_8 < 0) {
            iVar5 = (iVar1 - iVar1 % (int)param_1[0x3a7]) + param_8;
          }
          else {
            iVar5 = (((iVar1 - iVar1 % (int)param_1[0x3a7]) + (int)param_1[0x3a7]) - param_8) + -1;
          }
        }
      }
    }
    else {
      uVar3 = FUN_004169e0(param_1,param_4,param_5,(short)param_8,param_6,param_7);
      if ((short)uVar3 == 0) {
        if (local_8 < 0) {
          iVar5 = (iVar1 - iVar1 % (int)param_1[0x3a7]) + param_8;
        }
        else {
          iVar5 = (((iVar1 - iVar1 % (int)param_1[0x3a7]) + (int)param_1[0x3a7]) - param_8) + -1;
        }
      }
    }
  }
  *param_2 = iVar5;
  *param_3 = iVar6;
  return;
}

