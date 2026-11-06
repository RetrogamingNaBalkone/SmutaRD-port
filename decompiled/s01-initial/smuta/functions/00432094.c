/* Ghidra address: 00432094; FUN_00432094 */

int FUN_00432094(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000004;
  
  iVar1 = 0;
  piVar2 = &DAT_00438d1c;
  do {
    if (in_stack_00000004 == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 10);
  return -1;
}

