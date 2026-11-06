/* Ghidra address: 00415db4; FUN_00415db4 */

void __cdecl FUN_00415db4(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    FUN_0040f968(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

