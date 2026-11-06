/* Ghidra address: 0041606c; FUN_0041606c */

LPVOID __cdecl FUN_0041606c(char *param_1)

{
  LPVOID pvVar1;
  int *piVar2;
  SIZE_T local_8;
  
  pvVar1 = (LPVOID)FUN_0042721c(DAT_0053d630,param_1);
  if (pvVar1 == (LPVOID)0x0) {
    piVar2 = FUN_0042725c(DAT_0053d630,param_1,&local_8);
    pvVar1 = FUN_00406740(piVar2,local_8);
    FUN_004271e4(DAT_0053d630,param_1,pvVar1);
    if (DAT_00439f58 != 2) {
      FUN_0040663c((int)pvVar1);
    }
  }
  return pvVar1;
}

