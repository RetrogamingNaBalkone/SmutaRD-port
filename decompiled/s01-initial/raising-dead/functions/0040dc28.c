/* Ghidra address: 0040dc28; FUN_0040dc28 */

void __cdecl FUN_0040dc28(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_00439980;
    if (param_1[6] != 0) {
      (**(code **)(*param_1 + 0x14))();
      (**(code **)(*(int *)param_1[6] + 8))();
    }
    FUN_00429d20(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

