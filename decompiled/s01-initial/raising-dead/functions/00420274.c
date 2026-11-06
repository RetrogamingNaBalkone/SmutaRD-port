/* Ghidra address: 00420274; FUN_00420274 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00420274(undefined4 *param_1)

{
  byte *pbVar1;
  undefined4 in_ECX;
  int iVar2;
  int *piVar3;
  undefined4 local_8;
  
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    FUN_00420274((undefined4 *)param_1[1]);
  }
  if (DAT_004fa728 < 1) {
    *param_1 = 1;
    iVar2 = param_1[3];
    pbVar1 = (byte *)(iVar2 + 0x16);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined2 *)(iVar2 + 0x17) = 0;
  }
  else {
    (**(code **)(*(int *)param_1[3] + 4))();
    local_8._2_2_ = (short)((uint)in_ECX >> 0x10);
    iVar2 = (int)local_8._2_2_;
    local_8 = in_ECX;
    if (iVar2 < DAT_004fa720) {
      local_8._0_2_ = (short)in_ECX;
      local_8 = CONCAT22((undefined2)DAT_004fa720,(short)local_8);
    }
    if (_DAT_004fa724 < (short)local_8) {
      local_8 = CONCAT22(local_8._2_2_,DAT_004fa724);
    }
    iVar2 = param_1[3];
    pbVar1 = (byte *)(iVar2 + 0x16);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined2 *)(iVar2 + 0x17) = 0;
    if ((*(byte *)(param_1[3] + 0x16) & 2) == 0) {
      iVar2 = (int)local_8._2_2_;
      piVar3 = &DAT_004f92d0 + iVar2;
      for (; iVar2 <= (short)local_8; iVar2 = iVar2 + 1) {
        if (*piVar3 == 1) {
          *(byte *)(param_1[3] + 0x16) = *(byte *)(param_1[3] + 0x16) | 1;
          (&DAT_004f81a4)[*(ushort *)(param_1[3] + 4)] = 1;
          break;
        }
        piVar3 = piVar3 + 1;
      }
    }
    else {
      iVar2 = (int)local_8._2_2_;
      piVar3 = &DAT_004f92d0 + iVar2;
      for (; iVar2 <= (short)local_8; iVar2 = iVar2 + 1) {
        if (*piVar3 == 1) {
          *(byte *)(param_1[3] + 0x16) = *(byte *)(param_1[3] + 0x16) | 1;
          (&DAT_004f81a4)[*(ushort *)(param_1[3] + 4)] = 1;
          DAT_004fa728 = DAT_004fa728 + -1;
          *piVar3 = 0;
        }
        piVar3 = piVar3 + 1;
      }
      if (local_8._2_2_ <= DAT_004fa720) {
        DAT_004fa720 = (int)(short)local_8;
      }
      if (_DAT_004fa724 <= (short)local_8) {
        _DAT_004fa724 = (int)local_8._2_2_;
      }
    }
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      FUN_00420274((undefined4 *)param_1[2]);
    }
  }
  return;
}

