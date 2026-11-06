/* Ghidra address: 00427cb0; FUN_00427cb0 */

void __cdecl FUN_00427cb0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 < param_2) {
    iVar2 = param_4;
    iVar3 = param_2;
    if (param_2 < param_4) {
      iVar2 = param_2;
      iVar3 = param_4;
    }
    if (((param_3 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < param_3)) ||
       ((iVar3 < *(int *)((int)param_1 + 0x3a) || (*(int *)((int)param_1 + 0x42) < iVar2)))) {
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
    iVar2 = param_4;
    iVar3 = param_2;
    if (param_4 < param_2) {
      iVar2 = param_2;
      iVar3 = param_4;
    }
    if ((((param_3 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < param_3)) ||
        (iVar2 < *(int *)((int)param_1 + 0x3a))) || (*(int *)((int)param_1 + 0x42) < iVar3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x14))();
    }
  }
  if (param_4 < param_2) {
    iVar2 = param_4;
    iVar3 = param_2;
    if (param_2 < param_4) {
      iVar2 = param_2;
      iVar3 = param_4;
    }
    if ((((param_5 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < param_5)) ||
        (iVar3 < *(int *)((int)param_1 + 0x3a))) || (*(int *)((int)param_1 + 0x42) < iVar2)) {
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
    iVar2 = param_4;
    iVar3 = param_2;
    if (param_4 < param_2) {
      iVar2 = param_2;
      iVar3 = param_4;
    }
    if (((param_5 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < param_5)) ||
       ((iVar2 < *(int *)((int)param_1 + 0x3a) || (*(int *)((int)param_1 + 0x42) < iVar3)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x14))();
    }
  }
  if (param_5 < param_3) {
    iVar2 = param_5;
    iVar3 = param_3;
    if (param_3 < param_5) {
      iVar2 = param_3;
      iVar3 = param_5;
    }
    if (((param_2 < *(int *)((int)param_1 + 0x3a)) || (*(int *)((int)param_1 + 0x42) < param_2)) ||
       ((iVar3 < *(int *)((int)param_1 + 0x3e) || (*(int *)((int)param_1 + 0x46) < iVar2)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x18))();
    }
  }
  else {
    iVar2 = param_5;
    iVar3 = param_3;
    if (param_5 < param_3) {
      iVar2 = param_3;
      iVar3 = param_5;
    }
    if (((param_2 < *(int *)((int)param_1 + 0x3a)) || (*(int *)((int)param_1 + 0x42) < param_2)) ||
       ((iVar2 < *(int *)((int)param_1 + 0x3e) || (*(int *)((int)param_1 + 0x46) < iVar3)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x18))();
    }
  }
  if (param_5 < param_3) {
    iVar2 = param_5;
    if (param_3 < param_5) {
      iVar2 = param_3;
      param_3 = param_5;
    }
    if (((param_4 < *(int *)((int)param_1 + 0x3a)) || (*(int *)((int)param_1 + 0x42) < param_4)) ||
       ((param_3 < *(int *)((int)param_1 + 0x3e) || (*(int *)((int)param_1 + 0x46) < iVar2)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x18))();
    }
  }
  else {
    iVar2 = param_5;
    if (param_5 < param_3) {
      iVar2 = param_3;
      param_3 = param_5;
    }
    if ((((param_4 < *(int *)((int)param_1 + 0x3a)) || (*(int *)((int)param_1 + 0x42) < param_4)) ||
        (iVar2 < *(int *)((int)param_1 + 0x3e))) || (*(int *)((int)param_1 + 0x46) < param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x18))();
    }
  }
  return;
}

