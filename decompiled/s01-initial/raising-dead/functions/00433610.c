/* Ghidra address: 00433610; FUN_00433610 */

undefined4 __cdecl FUN_00433610(int *param_1)

{
  if (*param_1 == 4) {
    param_1[6] = 0;
    param_1[7] = 0;
    return 1;
  }
  if (*param_1 == 5) {
    return 1;
  }
  return 0;
}

