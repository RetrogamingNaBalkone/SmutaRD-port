/* Ghidra address: 0040ccac; FUN_0040ccac */

void FUN_0040ccac(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  short in_stack_00000010;
  short local_a;
  short local_8;
  short local_6;
  
  local_8 = in_stack_00000010;
  local_6 = 0;
  local_a = 0;
  if (-1 < in_stack_00000010) {
    do {
      iVar3 = local_8 + in_stack_00000008;
      iVar2 = local_a + in_stack_0000000c;
      iVar5 = in_stack_00000008 - local_8;
      if (iVar3 < iVar5) {
        iVar4 = iVar3;
        if (iVar5 < iVar3) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if (((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
            (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
           ((iVar5 < *(int *)((int)in_stack_00000004 + 0x3a) ||
            (*(int *)((int)in_stack_00000004 + 0x42) < iVar4)))) {
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
        iVar4 = iVar3;
        if (iVar3 < iVar5) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if ((((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
             (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
            (iVar4 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
           (*(int *)((int)in_stack_00000004 + 0x42) < iVar5)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
      iVar3 = local_8 + in_stack_00000008;
      iVar2 = in_stack_0000000c - local_a;
      iVar5 = in_stack_00000008 - local_8;
      if (iVar3 < iVar5) {
        iVar4 = iVar3;
        if (iVar5 < iVar3) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if ((((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
             (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
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
        iVar4 = iVar3;
        if (iVar3 < iVar5) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if (((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
            (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
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
      local_a = local_a + 1;
      local_6 = local_a * 4 + local_6 + -1;
      if (local_8 < local_6) {
        local_8 = local_8 + -1;
        local_6 = local_6 - (local_8 * 4 + 1);
        iVar2 = local_8 + in_stack_0000000c;
        iVar3 = local_a + in_stack_00000008;
        iVar5 = in_stack_00000008 - local_a;
        if (iVar3 < iVar5) {
          iVar4 = iVar3;
          if (iVar5 < iVar3) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if (((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
              (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
             ((iVar5 < *(int *)((int)in_stack_00000004 + 0x3a) ||
              (*(int *)((int)in_stack_00000004 + 0x42) < iVar4)))) {
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
          iVar4 = iVar3;
          if (iVar3 < iVar5) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if (((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
              (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
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
        iVar2 = in_stack_0000000c - local_8;
        iVar3 = local_a + in_stack_00000008;
        iVar5 = in_stack_00000008 - local_a;
        if (iVar3 < iVar5) {
          iVar4 = iVar3;
          if (iVar5 < iVar3) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if (((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
              (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
             ((iVar5 < *(int *)((int)in_stack_00000004 + 0x3a) ||
              (*(int *)((int)in_stack_00000004 + 0x42) < iVar4)))) {
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
          iVar4 = iVar3;
          if (iVar3 < iVar5) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if ((((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
               (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
              (iVar4 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
             (*(int *)((int)in_stack_00000004 + 0x42) < iVar5)) {
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
    } while (local_a <= local_8);
  }
  return;
}

