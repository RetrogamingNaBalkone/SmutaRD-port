/* Ghidra address: 004226c4; FUN_004226c4 */

void FUN_004226c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 uVar5;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined2 extraout_var_09;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar4 = *(int *)(param_4 + 0x34);
  if (*(short *)(iVar4 + 0xfc) == 0) {
    FUN_00423d7c();
    if (*(int *)(param_4 + 0x3c) == 0) {
      uVar2 = FUN_004232d0();
      if (CONCAT31(extraout_var_05,uVar2) != 0) {
        iVar4 = FUN_00423264();
        if (iVar4 != 0) {
          bVar3 = FUN_004231d4();
          if (CONCAT31(extraout_var_06,bVar3) == 0) {
            bVar3 = FUN_0042365c();
            if (CONCAT31(extraout_var_07,bVar3) != 0) {
              FUN_0041e5f0();
            }
          }
          else {
            FUN_0041e5f0();
          }
        }
      }
      iVar4 = param_4;
      bVar3 = FUN_0041dc34();
      uVar5 = 0;
      uVar6 = extraout_EDX;
      if (CONCAT31(extraout_var_08,bVar3) != 0) {
        uVar5 = FUN_0042339c(CONCAT31(extraout_var_08,bVar3),*(undefined4 *)(param_4 + 0x34),iVar4,
                             *(undefined4 *)(param_4 + 0x34));
        uVar6 = extraout_EDX_00;
      }
      uVar7 = *(undefined4 *)(param_4 + 0x34);
      iVar4 = FUN_004233dc(uVar5,uVar6,uVar7);
      if (iVar4 == 0) {
        uVar5 = FUN_00423430();
        *(undefined4 *)(param_4 + 0x38) = uVar5;
      }
      else {
        FUN_0042339c(iVar4,*(undefined4 *)(param_4 + 0x34),uVar7,*(undefined4 *)(param_4 + 0x34));
      }
      FUN_00423674();
    }
    else {
      if (*(int *)(param_4 + 0x40) == 0) {
        uVar1 = *(undefined2 *)(param_4 + 0x44);
        FUN_00423354((undefined2 *)(param_4 + 0x44),CONCAT22(extraout_var_09,uVar1),
                     *(undefined4 *)(param_4 + 0x34),*(undefined4 *)(param_4 + 0x34),uVar1);
        uVar5 = FUN_00423430();
        *(undefined4 *)(param_4 + 0x38) = uVar5;
        *(uint *)(param_4 + 0x40) = (uint)(*(short *)(*(int *)(param_4 + 0x34) + 0x110) == 0);
      }
      else {
        uVar5 = *(undefined4 *)(param_4 + 0x34);
        uVar2 = FUN_004232d0();
        if (CONCAT31(extraout_var_02,uVar2) == 0) {
          FUN_0042339c(0,*(undefined4 *)(param_4 + 0x34),uVar5,*(undefined4 *)(param_4 + 0x34));
        }
        else {
          *(undefined4 *)(param_4 + 0x40) = 0;
          FUN_0041da94();
          iVar4 = FUN_00423264();
          if (iVar4 != 0) {
            bVar3 = FUN_004231d4();
            if (CONCAT31(extraout_var_03,bVar3) == 0) {
              bVar3 = FUN_0042365c();
              if (CONCAT31(extraout_var_04,bVar3) != 0) {
                FUN_0041e5f0();
              }
            }
            else {
              FUN_0041e5f0();
            }
          }
        }
      }
      FUN_00423674();
    }
  }
  else {
    FUN_0042339c(iVar4,param_2,param_3,iVar4);
    uVar2 = FUN_004232d0();
    if (CONCAT31(extraout_var,uVar2) != 0) {
      *(undefined4 *)(param_4 + 0x40) = 0;
      FUN_0041da94();
      iVar4 = FUN_00423264();
      if (iVar4 != 0) {
        bVar3 = FUN_004231d4();
        if (CONCAT31(extraout_var_00,bVar3) == 0) {
          bVar3 = FUN_0042365c();
          if (CONCAT31(extraout_var_01,bVar3) != 0) {
            FUN_0041e5f0();
          }
        }
        else {
          FUN_0041e5f0();
        }
      }
    }
  }
  return;
}

