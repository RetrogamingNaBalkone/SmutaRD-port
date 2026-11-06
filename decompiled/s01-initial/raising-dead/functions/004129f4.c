/* Ghidra address: 004129f4; FUN_004129f4 */

void __cdecl FUN_004129f4(int *param_1)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 9;
  psVar2 = (short *)((int)param_1 + 0x117);
  do {
    if (0 < *psVar2) {
      FUN_00412a7c(param_1,(short)iVar1);
      FUN_00404a48(DAT_004385a0,*psVar2);
      return;
    }
    iVar1 = iVar1 + -1;
    psVar2 = psVar2 + -1;
  } while (0 < iVar1);
  FUN_00413e4c(*(int *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 4 + 0xc9));
  FUN_0040e2bc(param_1,PTR_FUN_00439ba0,DAT_00439ba4,DAT_00439ba8,0x29);
  *(undefined2 *)((int)param_1 + 0x11b) = 0;
  *(undefined2 *)((int)param_1 + 0x125) = 1;
  return;
}

