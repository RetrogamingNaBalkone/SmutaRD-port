/* Ghidra address: 0040cb34; FUN_0040cb34 */

void __cdecl FUN_0040cb34(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00439834;
    DAT_00439814 = 0;
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

