/* Ghidra address: 0040f968; FUN_0040f968 */

void __cdecl FUN_0040f968(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    param_1[5] = (int)&PTR_FUN_00439ee4;
    FUN_0040fa3c((int)param_1);
    FUN_0040e250(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

