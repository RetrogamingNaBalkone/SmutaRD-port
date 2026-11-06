/* Ghidra address: 00410734; FUN_00410734 */

void __cdecl FUN_00410734(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    param_1[5] = (int)&PTR_FUN_00439d44;
    *(undefined2 *)((int)param_1 + 0x1b) = 0;
    FUN_0040fe84(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

