/* Ghidra address: 00409354; FUN_00409354 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00409354(undefined2 *param_1,short param_2,short param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short local_32;
  short local_16;
  short local_6;
  
  iVar4 = DAT_004c32d0 + -1;
  if ((float)DAT_004cd18c < (float)*(int *)(DAT_004c32d8 + 8 + param_3 * 0xc)) {
    if ((float)*(int *)(DAT_004c32d8 + 8 + param_2 * 0xc) < (float)DAT_004cd18c) {
      DAT_004cd184 = FUN_00433130();
    }
    uVar1 = FUN_00433130();
    local_16 = (short)uVar1;
    uVar1 = FUN_00433130();
    DAT_004cd1c4 = (short)uVar1;
    local_6 = DAT_004cd1c4 - local_16;
    if (local_6 != 0) {
      if (local_6 < 0) {
        local_6 = -local_6;
      }
      if (local_16 < DAT_00438ea4) {
        local_16 = DAT_00438ea4;
      }
      else if (DAT_00438ea6 < local_16) {
        local_16 = DAT_00438ea6;
      }
      if (DAT_004cd1c4 < DAT_00438ea4) {
        DAT_004cd1c4 = DAT_00438ea4;
      }
      else if (DAT_00438ea6 < DAT_004cd1c4) {
        DAT_004cd1c4 = DAT_00438ea6;
      }
      _DAT_004cd1c2 = local_16 + DAT_0053d6cc;
      DAT_004cd1bc = local_6;
      local_32 = 0;
      if (0 < local_6) {
        do {
          uVar1 = FUN_00433130();
          *param_1 = (short)uVar1;
          iVar2 = FUN_00433130();
          iVar3 = FUN_00433130();
          iVar5 = iVar4;
          if ((iVar2 <= iVar4) && (iVar5 = iVar2, iVar2 < 0)) {
            iVar5 = 0;
          }
          iVar2 = iVar4;
          if ((iVar3 <= iVar4) && (iVar2 = iVar3, iVar3 < 0)) {
            iVar2 = 0;
          }
          *(int *)(param_1 + 1) = iVar5;
          *(int *)(param_1 + 3) = iVar2;
          local_32 = local_32 + 1;
          param_1 = param_1 + 5;
        } while (local_32 < local_6);
      }
    }
  }
  return;
}

