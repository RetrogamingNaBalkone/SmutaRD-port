/* Ghidra address: 004148d0; FUN_004148d0 */

void __cdecl FUN_004148d0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 uVar3;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  
  if (*(short *)(*(int *)(param_1 + 0x34) + 0xfd) == 0) {
    FUN_00415cc4(*(int *)(param_1 + 0x34));
    if (*(int *)(param_1 + 0x3c) == 0) {
      bVar1 = FUN_00415220(*(int *)(param_1 + 0x34));
      if (CONCAT31(extraout_var_05,bVar1) != 0) {
        iVar2 = FUN_004151b4(*(int *)(param_1 + 0x34));
        if (iVar2 != 0) {
          bVar1 = FUN_00415124(*(int *)(param_1 + 0x34));
          if (CONCAT31(extraout_var_06,bVar1) == 0) {
            bVar1 = FUN_004155a8(*(int *)(param_1 + 0x34));
            if (CONCAT31(extraout_var_07,bVar1) != 0) {
              FUN_0041020c(*(int *)(param_1 + 0x34),*(int *)(*(int *)(param_1 + 0x34) + 0x121));
            }
          }
          else {
            FUN_0041020c(*(int *)(param_1 + 0x34),*(int *)(*(int *)(param_1 + 0x34) + 0x11d));
          }
        }
      }
      bVar1 = FUN_0040fa54(param_1);
      if (CONCAT31(extraout_var_08,bVar1) != 0) {
        FUN_004152ec(*(int *)(param_1 + 0x34));
      }
      iVar2 = FUN_0041532c(*(int *)(param_1 + 0x34));
      if (iVar2 == 0) {
        uVar3 = FUN_00415380(*(int *)(param_1 + 0x34));
        *(undefined4 *)(param_1 + 0x38) = uVar3;
      }
      else {
        FUN_004152ec(*(int *)(param_1 + 0x34));
      }
      FUN_004155c0(*(int *)(param_1 + 0x34));
    }
    else {
      if (*(int *)(param_1 + 0x40) == 0) {
        FUN_004152a4(*(int *)(param_1 + 0x34),*(short *)(param_1 + 0x44));
        uVar3 = FUN_00415380(*(int *)(param_1 + 0x34));
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        *(uint *)(param_1 + 0x40) = (uint)(*(short *)(*(int *)(param_1 + 0x34) + 0x111) == 0);
      }
      else {
        bVar1 = FUN_00415220(*(int *)(param_1 + 0x34));
        if (CONCAT31(extraout_var_02,bVar1) == 0) {
          FUN_004152ec(*(int *)(param_1 + 0x34));
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 0;
          FUN_0040f8c4((short *)(param_1 + 0x44),*(short *)(param_1 + 0x44) + 0xb4);
          iVar2 = FUN_004151b4(*(int *)(param_1 + 0x34));
          if (iVar2 != 0) {
            bVar1 = FUN_00415124(*(int *)(param_1 + 0x34));
            if (CONCAT31(extraout_var_03,bVar1) == 0) {
              bVar1 = FUN_004155a8(*(int *)(param_1 + 0x34));
              if (CONCAT31(extraout_var_04,bVar1) != 0) {
                FUN_0041020c(*(int *)(param_1 + 0x34),*(int *)(*(int *)(param_1 + 0x34) + 0x121));
              }
            }
            else {
              FUN_0041020c(*(int *)(param_1 + 0x34),*(int *)(*(int *)(param_1 + 0x34) + 0x11d));
            }
          }
        }
      }
      FUN_004155c0(*(int *)(param_1 + 0x34));
    }
  }
  else {
    FUN_004152ec(*(int *)(param_1 + 0x34));
    bVar1 = FUN_00415220(*(int *)(param_1 + 0x34));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      FUN_0040f8c4((short *)(param_1 + 0x44),*(short *)(param_1 + 0x44) + 0xb4);
      iVar2 = FUN_004151b4(*(int *)(param_1 + 0x34));
      if (iVar2 != 0) {
        bVar1 = FUN_00415124(*(int *)(param_1 + 0x34));
        if (CONCAT31(extraout_var_00,bVar1) == 0) {
          bVar1 = FUN_004155a8(*(int *)(param_1 + 0x34));
          if (CONCAT31(extraout_var_01,bVar1) != 0) {
            FUN_0041020c(*(int *)(param_1 + 0x34),*(int *)(*(int *)(param_1 + 0x34) + 0x121));
          }
        }
        else {
          FUN_0041020c(*(int *)(param_1 + 0x34),*(int *)(*(int *)(param_1 + 0x34) + 0x11d));
        }
      }
    }
  }
  return;
}

