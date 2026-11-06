/* Ghidra address: 0042e9ac; FUN_0042e9ac */

int FUN_0042e9ac(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  uint in_stack_00000008;
  
  iVar2 = 0;
  if (((int)in_stack_00000008 < 0x30) || (0x37 < (int)in_stack_00000008)) {
    if (in_stack_00000008 == 0xffffffff) {
      FUN_0042f7b8();
    }
    else {
      FUN_0042f7b8();
    }
  }
  else {
    do {
      iVar1 = *(int *)(*in_stack_00000004 + 4);
      iVar2 = iVar2 * 8 + in_stack_00000008 + -0x30;
      if ((*(int *)(iVar1 + 0x20) == 0) ||
         (*(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1,
         *(uint *)(iVar1 + 0x24) <= *(uint *)(iVar1 + 0x20))) {
        in_stack_00000008 = FUN_0042f500();
      }
      else {
        in_stack_00000008 = (uint)**(byte **)(iVar1 + 0x20);
      }
    } while ((0x2f < (int)in_stack_00000008) && ((int)in_stack_00000008 < 0x38));
  }
  return iVar2;
}

