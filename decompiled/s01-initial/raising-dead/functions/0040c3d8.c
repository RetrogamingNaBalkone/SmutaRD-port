/* Ghidra address: 0040c3d8; FUN_0040c3d8 */

void __cdecl FUN_0040c3d8(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0043983c;
    FUN_0040df64(param_1 + 0x1b,2);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

