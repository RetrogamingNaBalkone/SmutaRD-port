/* Ghidra address: 0042869c; FUN_0042869c */

void __cdecl
FUN_0042869c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar2 = &DAT_0043a0d0;
  piVar3 = local_28;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  local_28[1] = param_2;
  local_28[2] = param_3;
  local_28[3] = param_4;
  local_18 = param_5;
  local_14 = param_6;
  local_10 = param_7;
  local_c = param_8;
  local_8 = param_9;
  FUN_00428278(param_1,local_28);
  return;
}

