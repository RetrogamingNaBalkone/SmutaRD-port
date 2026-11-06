/* Ghidra address: 0041b160; FUN_0041b160 */

void FUN_0041b160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_stack_0000000c;
  undefined4 local_8;
  
  iVar3 = param_4[1];
  if (iVar3 != 0) {
    FUN_0041b160(iVar3,in_stack_0000000c,param_3,(undefined4 *)iVar3);
  }
  if (DAT_00493da8 < 1) {
    *param_4 = 1;
    iVar3 = param_4[3];
    pbVar1 = (byte *)(iVar3 + 0x16);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined2 *)(iVar3 + 0x17) = 0;
  }
  else {
    (**(code **)(*(int *)param_4[3] + 4))();
    local_8._2_2_ = (short)((uint)param_3 >> 0x10);
    iVar3 = (int)local_8._2_2_;
    local_8 = param_3;
    if (iVar3 < DAT_00493da0) {
      local_8._0_2_ = (short)param_3;
      local_8 = CONCAT22((undefined2)DAT_00493da0,(short)local_8);
    }
    if (DAT_00493da4 < (short)local_8) {
      local_8 = CONCAT22(local_8._2_2_,(undefined2)DAT_00493da4);
    }
    iVar3 = param_4[3];
    pbVar1 = (byte *)(iVar3 + 0x16);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined2 *)(iVar3 + 0x17) = 0;
    if ((*(byte *)(param_4[3] + 0x16) & 2) == 0) {
      iVar3 = (int)local_8._2_2_;
      piVar4 = &DAT_00492950 + iVar3;
      for (; iVar2 = (int)(short)local_8, iVar3 <= iVar2; iVar3 = iVar3 + 1) {
        if (*piVar4 == 1) {
          *(byte *)(param_4[3] + 0x16) = *(byte *)(param_4[3] + 0x16) | 1;
          (&DAT_00491824)[*(ushort *)(param_4[3] + 4)] = 1;
          iVar2 = 0;
          break;
        }
        piVar4 = piVar4 + 1;
      }
    }
    else {
      iVar3 = (int)local_8._2_2_;
      piVar4 = &DAT_00492950 + iVar3;
      for (; iVar3 <= (short)local_8; iVar3 = iVar3 + 1) {
        if (*piVar4 == 1) {
          *(byte *)(param_4[3] + 0x16) = *(byte *)(param_4[3] + 0x16) | 1;
          (&DAT_00491824)[*(ushort *)(param_4[3] + 4)] = 1;
          DAT_00493da8 = DAT_00493da8 + -1;
          *piVar4 = 0;
        }
        piVar4 = piVar4 + 1;
      }
      if (local_8._2_2_ <= DAT_00493da0) {
        DAT_00493da0 = (int)(short)local_8;
      }
      iVar2 = (int)(short)local_8;
      if (DAT_00493da4 <= iVar2) {
        DAT_00493da4 = (int)local_8._2_2_;
      }
    }
    iVar3 = param_4[2];
    if (iVar3 != 0) {
      FUN_0041b160(iVar3,in_stack_0000000c,iVar2,(undefined4 *)iVar3);
    }
  }
  return;
}

