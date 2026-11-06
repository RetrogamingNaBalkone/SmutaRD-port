/* Ghidra address: 00426e58; FUN_00426e58 */

undefined4 __cdecl FUN_00426e58(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = param_2;
  if ((uint)param_1[1] < 0x10000) {
    param_1[1] = param_1[1] + 1;
  }
  return 0;
}

