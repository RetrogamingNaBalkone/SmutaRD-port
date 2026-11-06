/* Ghidra address: 00414b54; FUN_00414b54 */

void __cdecl FUN_00414b54(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  
  bVar1 = FUN_0040fa54(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  if (*(short *)(*(int *)(param_1 + 0x34) + 0xfd) != 0) {
    FUN_0040fb88(param_1);
  }
  bVar1 = FUN_00415124(*(int *)(param_1 + 0x34));
  if ((CONCAT31(extraout_var_00,bVar1) != 0) &&
     (iVar2 = FUN_004151b4(*(int *)(param_1 + 0x34)), iVar2 != 0)) {
    if (*(int *)(param_1 + 0x38) != 0) {
      return;
    }
    FUN_00415664(*(int *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x38) = 1;
    return;
  }
  FUN_0041020c(*(int *)(param_1 + 0x34),*(int *)(*(int *)(param_1 + 0x34) + 0x119));
  return;
}

