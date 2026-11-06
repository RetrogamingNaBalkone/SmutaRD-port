/* Ghidra address: 00428ad8; FUN_00428ad8 */

void __cdecl
FUN_00428ad8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar2 = &DAT_0043a0f4;
  piVar3 = local_20;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  local_20[1] = param_2;
  local_20[2] = param_3;
  local_20[3] = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_8 = param_7;
  FUN_00428278(param_1,local_20);
  return;
}

