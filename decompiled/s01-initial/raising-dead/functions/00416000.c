/* Ghidra address: 00416000; FUN_00416000 */

void __cdecl FUN_00416000(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    FUN_0040fe84(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

