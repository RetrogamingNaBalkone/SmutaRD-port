/* Ghidra address: 0040df64; FUN_0040df64 */

void __cdecl FUN_0040df64(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00439910;
    FUN_0040e008((int)param_1);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

