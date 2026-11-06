/* Ghidra address: 00415f60; FUN_00415f60 */

void __cdecl FUN_00415f60(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    FUN_00410238(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

