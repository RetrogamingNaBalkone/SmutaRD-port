/* Ghidra address: 00426e34; FUN_00426e34 */

void __cdecl FUN_00426e34(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_0042361c((LPCVOID)*param_1);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

