/* Ghidra address: 00402f50; FUN_00402f50 */

void __cdecl FUN_00402f50(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_004382f8;
    if ((short)param_1[1] != 0) {
      (**(code **)(*param_1 + 8))();
    }
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

