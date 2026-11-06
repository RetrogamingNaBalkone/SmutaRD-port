/* Ghidra address: 00429c5c; FUN_00429c5c */

void __stdcall FUN_00429c5c(void)

{
  int *piVar1;
  short sVar2;
  
  FUN_004274c0(DAT_0053d704,DAT_0053d6d0,DAT_0053d6d4,DAT_0053d6d8,DAT_0053d6dc);
  for (sVar2 = 0; sVar2 < DAT_0053d6e6; sVar2 = sVar2 + 1) {
    piVar1 = *(int **)(DAT_0053d6e8 + sVar2 * 4);
    if ((*(byte *)((int)piVar1 + 0x16) & 1) != 0) {
      (**(code **)(*piVar1 + 8))(*piVar1,DAT_0053d6e8,(int)sVar2,piVar1);
    }
  }
  return;
}

