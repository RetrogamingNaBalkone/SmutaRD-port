/* Ghidra address: 0040c248; FUN_0040c248 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl
FUN_0040c248(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0040cc74(param_1,param_2);
  *param_1 = &PTR_FUN_0043983c;
  FUN_0040df38(param_1 + 0x1b);
  DAT_00439888 = param_3;
  _DAT_004cff18 = param_3;
  DAT_0043988c = param_4;
  DAT_00439814 = 0;
  param_1[0x17] = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  param_1[0x19] = 1;
  param_1[0x1a] = 0;
  return param_1;
}

