/* Ghidra address: 004281cc; FUN_004281cc */

void __cdecl FUN_004281cc(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)param_1 + 0x46);
  iVar1 = *(int *)((int)param_1 + 0x3e);
  if ((((param_4 < *(int *)((int)param_1 + 0x3a)) || (*(int *)((int)param_1 + 0x42) < param_2)) ||
      (param_5 < iVar1)) || (iVar3 < param_3)) {
    bVar2 = false;
  }
  else {
    if (param_3 < iVar1) {
      param_3 = iVar1;
    }
    if (param_5 <= iVar3) {
      iVar3 = param_5;
    }
    bVar2 = true;
    param_5 = iVar3;
  }
  if (bVar2) {
    for (; param_3 <= param_5; param_3 = param_3 + 1) {
      (**(code **)(*param_1 + 0x14))();
    }
  }
  return;
}

