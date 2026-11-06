/* Ghidra address: 004142d8; FUN_004142d8 */

int * __cdecl FUN_004142d8(int *param_1,undefined2 *param_2)

{
  FUN_0040fee0(param_1,param_2);
  param_1[5] = (int)&PTR_FUN_00439cd4;
  *(undefined2 *)((int)param_1 + 0x79) = 0;
  *(undefined2 *)((int)param_1 + 0x73) = 0;
  *(undefined2 *)((int)param_1 + 0x77) = 0;
  *(undefined2 *)((int)param_1 + 0x75) = 0;
  return param_1;
}

