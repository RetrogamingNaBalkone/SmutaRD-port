/* Ghidra address: 0040c218; FUN_0040c218 */

void FUN_0040c218(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = in_stack_00000008;
  local_18 = in_stack_0000001c;
  if (in_stack_00000008 == in_stack_00000010) {
    local_c = in_stack_00000010;
    local_10 = in_stack_00000014;
    local_1c = in_stack_00000024;
  }
  else {
    local_c = in_stack_00000020;
    local_10 = in_stack_00000024;
    local_1c = in_stack_00000014;
    in_stack_00000020 = in_stack_00000010;
  }
  iVar2 = local_10;
  iVar4 = local_1c;
  if (local_10 < in_stack_0000000c) {
    local_8 = local_c;
    local_10 = in_stack_0000000c;
    in_stack_0000000c = iVar2;
  }
  iVar2 = local_10;
  if (in_stack_0000001c < local_1c) {
    local_1c = in_stack_0000001c;
    local_18 = iVar4;
    in_stack_00000020 = in_stack_00000018;
  }
  iVar4 = in_stack_0000000c;
  iVar3 = in_stack_00000020;
  if (in_stack_00000020 < local_8) {
    local_10 = local_18;
    local_18 = iVar2;
    iVar4 = local_1c;
    iVar3 = local_8;
    local_1c = in_stack_0000000c;
    local_8 = in_stack_00000020;
  }
  if (iVar4 == local_1c) {
    (**(code **)(*in_stack_00000004 + 0x3c))();
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
        if (((iVar4 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
            (*(int *)((int)in_stack_00000004 + 0x46) < iVar4)) ||
           ((iVar6 < *(int *)((int)in_stack_00000004 + 0x3a) ||
            (*(int *)((int)in_stack_00000004 + 0x42) < iVar5)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
      else {
        iVar5 = iVar2;
        iVar6 = local_8;
        if (iVar2 < local_8) {
          iVar5 = local_8;
          iVar6 = iVar2;
        }
        if ((((iVar4 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
             (*(int *)((int)in_stack_00000004 + 0x46) < iVar4)) ||
            (iVar5 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
           (*(int *)((int)in_stack_00000004 + 0x42) < iVar6)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
    }
    (**(code **)(*in_stack_00000004 + 0x3c))();
    iVar2 = iVar2 - iVar3;
    for (; local_18 < local_10; local_18 = local_18 + 1) {
      if (iVar2 < local_8) {
        iVar4 = iVar2;
        iVar5 = local_8;
        if (local_8 < iVar2) {
          iVar4 = local_8;
          iVar5 = iVar2;
        }
        if ((((local_18 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
             (*(int *)((int)in_stack_00000004 + 0x46) < local_18)) ||
            (iVar5 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
           (*(int *)((int)in_stack_00000004 + 0x42) < iVar4)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
      else {
        iVar4 = iVar2;
        iVar5 = local_8;
        if (iVar2 < local_8) {
          iVar4 = local_8;
          iVar5 = iVar2;
        }
        if (((local_18 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
            (*(int *)((int)in_stack_00000004 + 0x46) < local_18)) ||
           ((iVar4 < *(int *)((int)in_stack_00000004 + 0x3a) ||
            (*(int *)((int)in_stack_00000004 + 0x42) < iVar5)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
      iVar2 = iVar2 - iVar3;
    }
  }
  return;
}

