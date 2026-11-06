/* Ghidra address: 0041054c; FUN_0041054c */

int * __cdecl FUN_0041054c(int *param_1,undefined2 *param_2)

{
  FUN_0040fee0(param_1,param_2);
  param_1[5] = (int)&PTR_FUN_00439ea8;
  *(undefined1 *)((int)param_1 + 0x8f) = 1;
  param_1[5] = (int)&PTR_FUN_00439d6c;
  *(undefined1 *)((int)param_1 + 0x95) = 0;
  return param_1;
}

