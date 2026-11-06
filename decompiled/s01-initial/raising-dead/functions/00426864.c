/* Ghidra address: 00426864; FUN_00426864 */

void __cdecl FUN_00426864(short param_1,int *param_2,int param_3,int param_4)

{
  for (; param_1 != 0; param_1 = param_1 + -1) {
    *param_2 = *param_2 + param_3;
    param_2[1] = param_2[1] + param_4;
    param_2 = param_2 + 2;
  }
  return;
}

