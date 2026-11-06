/* Ghidra address: 00403268; FUN_00403268 */

void __cdecl FUN_00403268(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00438588;
    FUN_0042328c();
    FUN_0040dab4();
    FUN_00402c94();
    FUN_0040cb34(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

