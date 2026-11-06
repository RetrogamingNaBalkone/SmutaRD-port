/* Ghidra address: 00410404; FUN_00410404 */

int * __cdecl FUN_00410404(int *param_1,undefined2 *param_2)

{
  FUN_0040fee0(param_1,param_2);
  param_1[5] = (int)&PTR_FUN_00439ea8;
  *(undefined1 *)((int)param_1 + 0x8f) = 1;
  param_1[5] = (int)&PTR_FUN_00439dac;
  *(undefined2 *)((int)param_1 + 0x73) = 0;
  *(undefined2 *)((int)param_1 + 0x71) = 0x1e;
  return param_1;
}

