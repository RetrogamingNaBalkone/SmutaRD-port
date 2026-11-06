/* Ghidra address: 0042ea30; FUN_0042ea30 */

int FUN_0042ea30(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  uint in_stack_00000008;
  
  iVar2 = 0;
  if (((&DAT_00438815)[in_stack_00000008] & 0x10) == 0) {
    if (in_stack_00000008 == 0xffffffff) {
      FUN_0042f7b8();
    }
    else {
      FUN_0042f7b8();
    }
  }
  else {
    do {
      if (((&DAT_00438815)[in_stack_00000008] & 4) == 0) {
        if (((&DAT_00438815)[in_stack_00000008] & 8) == 0) {
          iVar1 = in_stack_00000008 - 0x30;
        }
        else {
          iVar1 = in_stack_00000008 - 0x57;
        }
      }
      else {
        iVar1 = in_stack_00000008 - 0x37;
      }
      iVar2 = iVar2 * 0x10 + iVar1;
      iVar1 = *(int *)(*in_stack_00000004 + 4);
      if ((*(int *)(iVar1 + 0x20) == 0) ||
         (*(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1,
         *(uint *)(iVar1 + 0x24) <= *(uint *)(iVar1 + 0x20))) {
        in_stack_00000008 = FUN_0042f500();
      }
      else {
        in_stack_00000008 = (uint)**(byte **)(iVar1 + 0x20);
      }
    } while (((&DAT_00438815)[in_stack_00000008] & 0x10) != 0);
  }
  return iVar2;
}

