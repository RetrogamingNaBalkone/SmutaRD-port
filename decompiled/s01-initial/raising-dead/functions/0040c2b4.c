/* Ghidra address: 0040c2b4; FUN_0040c2b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040c2b4(int *param_1)

{
  int *piVar1;
  
  FUN_0040c344((int)param_1,param_1[0xb],param_1[0xc],param_1[0xd],param_1[0xe]);
  SetCursorPos(DAT_00439890,DAT_00439894);
  _DAT_004cf904 = DAT_00439890;
  _DAT_004cf908 = DAT_00439894;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  piVar1 = param_1;
  (**(code **)(*param_1 + 0x1c))();
  if (DAT_00438350 != 0) {
    (**(code **)(param_1[0x1b] + 0x28))(param_1 + 0x1b,param_1[0x1b],piVar1,param_1 + 0x1b);
  }
  FUN_0040df8c(param_1 + 0x1b);
  DAT_004d0020 = param_1 + 0x1b;
  return;
}

