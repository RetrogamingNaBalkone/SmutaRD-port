/* Ghidra address: 00431d24; FUN_00431d24 */

void __cdecl FUN_00431d24(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0043be80;
    if (*(short *)(param_1 + 1) != 0) {
      FUN_004350fc(param_1[2]);
    }
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

