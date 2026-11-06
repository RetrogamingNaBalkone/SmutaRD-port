/* Ghidra address: 004160d8; FUN_004160d8 */

LPVOID __cdecl FUN_004160d8(char *param_1)

{
  LPVOID pvVar1;
  int *piVar2;
  SIZE_T local_8;
  
  pvVar1 = (LPVOID)FUN_0042721c(DAT_0053d630,param_1);
  if (pvVar1 == (LPVOID)0x0) {
    piVar2 = FUN_0042725c(DAT_0053d630,param_1,&local_8);
    pvVar1 = FUN_0040f774(piVar2,local_8);
    FUN_004271e4(DAT_0053d630,param_1,pvVar1);
    if (DAT_00439f58 != 2) {
      FUN_0040f644((int)pvVar1);
    }
  }
  return pvVar1;
}

