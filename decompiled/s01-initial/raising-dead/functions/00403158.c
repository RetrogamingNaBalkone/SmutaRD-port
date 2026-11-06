/* Ghidra address: 00403158; FUN_00403158 */

void __cdecl FUN_00403158(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00438590;
    FUN_0040cb34(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

