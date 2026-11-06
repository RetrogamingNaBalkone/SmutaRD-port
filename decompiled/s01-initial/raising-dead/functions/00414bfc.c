/* Ghidra address: 00414bfc; FUN_00414bfc */

void __cdecl FUN_00414bfc(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  
  if (*(short *)(*(int *)(param_1 + 0x34) + 0xf9) != *(short *)(param_1 + 0x30)) {
    bVar1 = FUN_0040fa54(param_1);
    if ((CONCAT31(extraout_var_01,bVar1) != 0) &&
       (((bVar1 = FUN_00415220(*(int *)(param_1 + 0x34)), CONCAT31(extraout_var_02,bVar1) == 0 ||
         (iVar2 = FUN_004151b4(*(int *)(param_1 + 0x34)), iVar2 == 0)) ||
        (bVar1 = FUN_004155a8(*(int *)(param_1 + 0x34)), CONCAT31(extraout_var_03,bVar1) == 0)))) {
      FUN_0041020c(*(int *)(param_1 + 0x34),*(int *)(*(int *)(param_1 + 0x34) + 0x119));
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  bVar1 = FUN_00415220(*(int *)(param_1 + 0x34));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return;
  }
  iVar2 = FUN_004151b4(*(int *)(param_1 + 0x34));
  if (iVar2 == 0) {
    return;
  }
  bVar1 = FUN_004155a8(*(int *)(param_1 + 0x34));
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    return;
  }
  FUN_004155e8(*(int *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x38) = 1;
  return;
}

