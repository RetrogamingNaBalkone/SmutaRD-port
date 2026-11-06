/* Ghidra address: 0040bcec; FUN_0040bcec */

void FUN_0040bcec(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  iVar3 = *(int *)((int)in_stack_00000004 + 0x46);
  iVar1 = *(int *)((int)in_stack_00000004 + 0x3e);
  if ((((in_stack_00000010 < *(int *)((int)in_stack_00000004 + 0x3a)) ||
       (*(int *)((int)in_stack_00000004 + 0x42) < in_stack_00000008)) || (in_stack_00000014 < iVar1)
      ) || (iVar3 < in_stack_0000000c)) {
    bVar2 = false;
  }
  else {
    if (in_stack_0000000c < iVar1) {
      in_stack_0000000c = iVar1;
    }
    if (in_stack_00000014 <= iVar3) {
      iVar3 = in_stack_00000014;
    }
    bVar2 = true;
    in_stack_00000014 = iVar3;
  }
  if (bVar2) {
    for (; in_stack_0000000c <= in_stack_00000014; in_stack_0000000c = in_stack_0000000c + 1) {
      (**(code **)(*in_stack_00000004 + 0x14))();
    }
  }
  return;
}

