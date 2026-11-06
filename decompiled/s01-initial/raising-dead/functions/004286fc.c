/* Ghidra address: 004286fc; FUN_004286fc */

void __cdecl
FUN_004286fc(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = param_2;
  local_18 = param_7;
  if (param_2 == param_4) {
    local_c = param_4;
    local_10 = param_5;
    local_1c = param_9;
  }
  else {
    local_c = param_8;
    local_10 = param_9;
    local_1c = param_5;
    param_8 = param_4;
  }
  iVar2 = local_10;
  iVar4 = local_1c;
  if (local_10 < param_3) {
    local_8 = local_c;
    local_10 = param_3;
    param_3 = iVar2;
  }
  iVar2 = local_10;
  if (param_7 < local_1c) {
    local_1c = param_7;
    local_18 = iVar4;
    param_8 = param_6;
  }
  iVar4 = param_3;
  iVar3 = param_8;
  if (param_8 < local_8) {
    local_10 = local_18;
    local_18 = iVar2;
    iVar4 = local_1c;
    iVar3 = local_8;
    local_1c = param_3;
    local_8 = param_8;
  }
  if (iVar4 == local_1c) {
    (**(code **)(*param_1 + 0x3c))();
  }
  else {
    iVar3 = (iVar3 - local_8) / (local_1c - iVar4);
    iVar2 = local_8;
    for (; iVar2 = iVar2 + iVar3, iVar4 < local_1c; iVar4 = iVar4 + 1) {
      if (iVar2 < local_8) {
        iVar5 = iVar2;
        iVar6 = local_8;
        if (local_8 < iVar2) {
          iVar5 = local_8;
          iVar6 = iVar2;
        }
        if (((iVar4 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar4)) ||
           ((iVar6 < *(int *)((int)param_1 + 0x3a) || (*(int *)((int)param_1 + 0x42) < iVar5)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*param_1 + 0x14))();
        }
      }
      else {
        iVar5 = iVar2;
        iVar6 = local_8;
        if (iVar2 < local_8) {
          iVar5 = local_8;
          iVar6 = iVar2;
        }
        if ((((iVar4 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar4)) ||
            (iVar5 < *(int *)((int)param_1 + 0x3a))) || (*(int *)((int)param_1 + 0x42) < iVar6)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*param_1 + 0x14))();
        }
      }
    }
    (**(code **)(*param_1 + 0x3c))();
    iVar2 = iVar2 - iVar3;
    for (; local_18 < local_10; local_18 = local_18 + 1) {
      if (iVar2 < local_8) {
        iVar4 = iVar2;
        iVar5 = local_8;
        if (local_8 < iVar2) {
          iVar4 = local_8;
          iVar5 = iVar2;
        }
        if ((((local_18 < *(int *)((int)param_1 + 0x3e)) ||
             (*(int *)((int)param_1 + 0x46) < local_18)) || (iVar5 < *(int *)((int)param_1 + 0x3a)))
           || (*(int *)((int)param_1 + 0x42) < iVar4)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*param_1 + 0x14))();
        }
      }
      else {
        iVar4 = iVar2;
        iVar5 = local_8;
        if (iVar2 < local_8) {
          iVar4 = local_8;
          iVar5 = iVar2;
        }
        if (((local_18 < *(int *)((int)param_1 + 0x3e)) ||
            (*(int *)((int)param_1 + 0x46) < local_18)) ||
           ((iVar4 < *(int *)((int)param_1 + 0x3a) || (*(int *)((int)param_1 + 0x42) < iVar5)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*param_1 + 0x14))();
        }
      }
      iVar2 = iVar2 - iVar3;
    }
  }
  return;
}

