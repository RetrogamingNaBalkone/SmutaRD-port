/* Ghidra address: 0042725c; FUN_0042725c */

int * __cdecl FUN_0042725c(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004270dc(param_1,param_2);
  (**(code **)(param_1[2] + 0x14))();
  *param_3 = *(undefined4 *)(param_1[1] + 0x100 + iVar1 * 0x10e);
  return param_1 + 2;
}

