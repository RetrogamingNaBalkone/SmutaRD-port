/* Ghidra address: 0040dc6c; FUN_0040dc6c */

undefined4 * __cdecl FUN_0040dc6c(undefined4 *param_1,int param_2)

{
  FUN_00429cf0(param_1);
  *param_1 = &PTR_FUN_00439980;
  param_1[6] = 0;
  if (*(short *)(param_2 + 8) == 0) {
    DAT_00439904 = 0;
  }
  else {
    DAT_00439904 = param_2;
    FUN_0040dd5c((int)param_1);
  }
  return param_1;
}

