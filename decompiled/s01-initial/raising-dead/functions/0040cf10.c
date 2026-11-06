/* Ghidra address: 0040cf10; FUN_0040cf10 */

int * __cdecl FUN_0040cf10(int *param_1)

{
  *param_1 = (int)&PTR_FUN_004398cc;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = (int)&PTR_FUN_004382f8;
  (**(code **)(*param_1 + 4))();
  return param_1;
}

