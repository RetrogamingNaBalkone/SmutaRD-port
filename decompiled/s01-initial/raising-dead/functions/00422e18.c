/* Ghidra address: 00422e18; FUN_00422e18 */

void __cdecl FUN_00422e18(int *param_1)

{
  param_1[6] = (&DAT_0053b680)[param_1[8]];
  param_1[7] = (&DAT_0053bc20)[param_1[8]];
  param_1[2] = *param_1;
  param_1[3] = param_1[1];
  param_1[4] = *param_1 << 0x10;
  param_1[5] = param_1[1] << 0x10;
  return;
}

