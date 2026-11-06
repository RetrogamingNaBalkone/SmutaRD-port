/* Ghidra address: 0042dd24; FUN_0042dd24 */

int FUN_0042dd24(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  iVar1 = 0;
  for (piVar2 = &DAT_00437f28; (iVar1 < DAT_00437f24 && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == DAT_00437f24) {
    return -1;
  }
  (&DAT_00437f28)[iVar1] = in_stack_00000008;
  *(undefined4 *)(&DAT_0049ab1c + iVar1 * 4) = in_stack_00000004;
  return iVar1;
}

