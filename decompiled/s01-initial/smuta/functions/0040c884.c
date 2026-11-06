/* Ghidra address: 0040c884; FUN_0040c884 */

void FUN_0040c884(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  short *in_stack_00000010;
  int local_8;
  
  iVar3 = in_stack_00000010[1] + in_stack_0000000c + -1;
  local_8 = *(int *)((int)in_stack_00000004 + 0x46);
  iVar1 = *(int *)((int)in_stack_00000004 + 0x3e);
  if ((((*in_stack_00000010 + in_stack_00000008 + -1 < *(int *)((int)in_stack_00000004 + 0x3a)) ||
       (*(int *)((int)in_stack_00000004 + 0x42) < in_stack_00000008)) || (iVar3 < iVar1)) ||
     (local_8 < in_stack_0000000c)) {
    bVar2 = false;
    local_8 = iVar3;
  }
  else {
    if (in_stack_0000000c < iVar1) {
      in_stack_0000000c = iVar1;
    }
    if (iVar3 <= local_8) {
      local_8 = iVar3;
    }
    bVar2 = true;
  }
  if (bVar2) {
    for (; in_stack_0000000c <= local_8; in_stack_0000000c = in_stack_0000000c + 1) {
      (**(code **)(*in_stack_00000004 + 0xc))();
    }
  }
  return;
}

