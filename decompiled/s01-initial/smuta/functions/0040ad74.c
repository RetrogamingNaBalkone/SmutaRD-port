/* Ghidra address: 0040ad74; FUN_0040ad74 */

void FUN_0040ad74(void)

{
  int *piVar1;
  short sVar2;
  
  FUN_0040afbc();
  for (sVar2 = 0; sVar2 < DAT_0044ebea; sVar2 = sVar2 + 1) {
    piVar1 = *(int **)(DAT_0044ebec + sVar2 * 4);
    if ((*(byte *)((int)piVar1 + 0x16) & 1) != 0) {
      (**(code **)(*piVar1 + 8))(*piVar1,DAT_0044ebec,(int)sVar2,piVar1);
    }
  }
  return;
}

