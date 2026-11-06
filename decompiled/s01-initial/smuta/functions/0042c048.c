/* Ghidra address: 0042c048; FUN_0042c048 */

int FUN_0042c048(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *in_stack_00000004;
  
  iVar2 = in_stack_00000004[2];
  if (iVar2 < 0) {
    iVar2 = in_stack_00000004[3] + iVar2 + 1;
  }
  if ((*(byte *)((int)in_stack_00000004 + 0x12) & 0x40) == 0) {
    pcVar6 = (char *)*in_stack_00000004;
    iVar3 = iVar2;
    iVar5 = iVar2;
    if ((int)in_stack_00000004[2] < 0) {
      while (iVar3 = iVar2 + -1, iVar2 != 0) {
        pcVar6 = pcVar6 + -1;
        iVar2 = iVar3;
        if (*pcVar6 == '\n') {
          iVar5 = iVar5 + 1;
        }
      }
    }
    else {
      while (iVar4 = iVar3 + -1, iVar5 = iVar2, iVar3 != 0) {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        iVar3 = iVar4;
        if (cVar1 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    return iVar5;
  }
  return iVar2;
}

