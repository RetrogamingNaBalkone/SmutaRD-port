/* Ghidra address: 00414d4c; FUN_00414d4c */

void __cdecl FUN_00414d4c(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    bVar1 = FUN_0040fa54(param_1);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      FUN_0040fb70(param_1);
      FUN_004156dc(*(int *)(param_1 + 0x34));
    }
  }
  return;
}

