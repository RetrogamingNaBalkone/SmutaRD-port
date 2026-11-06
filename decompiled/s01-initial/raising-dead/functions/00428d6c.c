/* Ghidra address: 00428d6c; FUN_00428d6c */

void __cdecl FUN_00428d6c(int *param_1,int param_2,int param_3,short *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int local_8;
  
  iVar3 = param_4[1] + param_3 + -1;
  local_8 = *(int *)((int)param_1 + 0x46);
  iVar1 = *(int *)((int)param_1 + 0x3e);
  if ((((*param_4 + param_2 + -1 < *(int *)((int)param_1 + 0x3a)) ||
       (*(int *)((int)param_1 + 0x42) < param_2)) || (iVar3 < iVar1)) || (local_8 < param_3)) {
    bVar2 = false;
    local_8 = iVar3;
  }
  else {
    if (param_3 < iVar1) {
      param_3 = iVar1;
    }
    if (iVar3 <= local_8) {
      local_8 = iVar3;
    }
    bVar2 = true;
  }
  if (bVar2) {
    for (; param_3 <= local_8; param_3 = param_3 + 1) {
      (**(code **)(*param_1 + 0xc))();
    }
  }
  return;
}

