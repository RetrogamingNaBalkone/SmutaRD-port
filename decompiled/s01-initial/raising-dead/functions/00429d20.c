/* Ghidra address: 00429d20; FUN_00429d20 */

void __cdecl FUN_00429d20(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_0043a1d0;
    (**(code **)(*param_1 + 0x14))();
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

