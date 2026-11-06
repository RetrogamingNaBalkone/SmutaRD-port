/* Ghidra address: 0042919c; FUN_0042919c */

void __cdecl FUN_0042919c(int *param_1,int param_2,int param_3,short param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short local_a;
  short local_8;
  short local_6;
  
  local_8 = param_4;
  local_6 = 0;
  local_a = 0;
  if (-1 < param_4) {
    do {
      iVar3 = local_8 + param_2;
      iVar2 = local_a + param_3;
      iVar5 = param_2 - local_8;
      if (iVar3 < iVar5) {
        iVar4 = iVar3;
        if (iVar5 < iVar3) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if (((iVar2 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar2)) ||
           ((iVar5 < *(int *)((int)param_1 + 0x3a) || (*(int *)((int)param_1 + 0x42) < iVar4)))) {
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
        iVar4 = iVar3;
        if (iVar3 < iVar5) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if ((((iVar2 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar2)) ||
            (iVar4 < *(int *)((int)param_1 + 0x3a))) || (*(int *)((int)param_1 + 0x42) < iVar5)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*param_1 + 0x14))();
        }
      }
      iVar3 = local_8 + param_2;
      iVar2 = param_3 - local_a;
      iVar5 = param_2 - local_8;
      if (iVar3 < iVar5) {
        iVar4 = iVar3;
        if (iVar5 < iVar3) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if ((((iVar2 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar2)) ||
            (iVar5 < *(int *)((int)param_1 + 0x3a))) || (*(int *)((int)param_1 + 0x42) < iVar4)) {
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
        iVar4 = iVar3;
        if (iVar3 < iVar5) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if (((iVar2 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar2)) ||
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
      local_a = local_a + 1;
      local_6 = local_a * 4 + local_6 + -1;
      if (local_8 < local_6) {
        local_8 = local_8 + -1;
        local_6 = local_6 - (local_8 * 4 + 1);
        iVar2 = local_8 + param_3;
        iVar3 = local_a + param_2;
        iVar5 = param_2 - local_a;
        if (iVar3 < iVar5) {
          iVar4 = iVar3;
          if (iVar5 < iVar3) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if (((iVar2 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar2))
             || ((iVar5 < *(int *)((int)param_1 + 0x3a) || (*(int *)((int)param_1 + 0x42) < iVar4)))
             ) {
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
          iVar4 = iVar3;
          if (iVar3 < iVar5) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if (((iVar2 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar2))
             || ((iVar4 < *(int *)((int)param_1 + 0x3a) || (*(int *)((int)param_1 + 0x42) < iVar5)))
             ) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            (**(code **)(*param_1 + 0x14))();
          }
        }
        iVar2 = param_3 - local_8;
        iVar3 = local_a + param_2;
        iVar5 = param_2 - local_a;
        if (iVar3 < iVar5) {
          iVar4 = iVar3;
          if (iVar5 < iVar3) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if (((iVar2 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar2))
             || ((iVar5 < *(int *)((int)param_1 + 0x3a) || (*(int *)((int)param_1 + 0x42) < iVar4)))
             ) {
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
          iVar4 = iVar3;
          if (iVar3 < iVar5) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if ((((iVar2 < *(int *)((int)param_1 + 0x3e)) || (*(int *)((int)param_1 + 0x46) < iVar2))
              || (iVar4 < *(int *)((int)param_1 + 0x3a))) || (*(int *)((int)param_1 + 0x42) < iVar5)
             ) {
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
    } while (local_a <= local_8);
  }
  return;
}

