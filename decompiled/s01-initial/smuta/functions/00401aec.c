/* Ghidra address: 00401aec; FUN_00401aec */

int FUN_00401aec(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  
  if (in_stack_00000004[1] == 0) {
    return 0;
  }
  if ((*(int *)(in_stack_00000004[1] + 0xe) == 0) && (*(int *)(in_stack_00000004[1] + 0x12) == 0)) {
    *in_stack_00000004 = 0;
    in_stack_00000004[1] = 0;
  }
  else {
    iVar1 = *(int *)(in_stack_00000004[1] + 0xe);
    if (iVar1 == 0) {
      iVar1 = *(int *)(in_stack_00000004[1] + 0x12);
      *in_stack_00000004 = iVar1;
      *(undefined4 *)(iVar1 + 0xe) = 0;
      in_stack_00000004[1] = iVar1;
    }
    else {
      iVar2 = in_stack_00000004[1];
      *(undefined4 *)(iVar1 + 0x12) = *(undefined4 *)(in_stack_00000004[1] + 0x12);
      if (*(int *)(iVar2 + 0x12) != 0) {
        *(int *)(*(int *)(iVar2 + 0x12) + 0xe) = iVar1;
      }
      in_stack_00000004[1] = *(int *)(in_stack_00000004[1] + 0x12);
    }
  }
  return in_stack_00000004[1];
}

