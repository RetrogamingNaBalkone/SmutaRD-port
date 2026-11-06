/* Ghidra address: 0042e924; FUN_0042e924 */

int FUN_0042e924(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  uint in_stack_00000008;
  
  iVar2 = 0;
  if (((&DAT_00438815)[in_stack_00000008] & 2) == 0) {
    if (in_stack_00000008 == 0xffffffff) {
      FUN_0042f7b8();
    }
    else {
      FUN_0042f7b8();
    }
  }
  else {
    do {
      iVar2 = iVar2 * 10 + in_stack_00000008 + -0x30;
      iVar1 = *(int *)(*in_stack_00000004 + 4);
      if ((*(int *)(iVar1 + 0x20) == 0) ||
         (*(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1,
         *(uint *)(iVar1 + 0x24) <= *(uint *)(iVar1 + 0x20))) {
        in_stack_00000008 = FUN_0042f500();
      }
      else {
        in_stack_00000008 = (uint)**(byte **)(iVar1 + 0x20);
      }
    } while (((&DAT_00438815)[in_stack_00000008] & 2) != 0);
  }
  return iVar2;
}

