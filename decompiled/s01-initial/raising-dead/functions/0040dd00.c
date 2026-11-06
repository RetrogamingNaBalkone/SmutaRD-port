/* Ghidra address: 0040dd00; FUN_0040dd00 */

void __cdecl FUN_0040dd00(int param_1,int param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (DAT_00439904 != 0) {
    piVar1 = FUN_0040e050(DAT_00439904,param_2);
    *(int **)(param_1 + 0x18) = piVar1;
  }
  return;
}

