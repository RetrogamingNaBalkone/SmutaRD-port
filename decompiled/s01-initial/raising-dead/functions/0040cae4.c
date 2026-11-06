/* Ghidra address: 0040cae4; FUN_0040cae4 */

undefined4 * __cdecl FUN_0040cae4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x439818);
  *param_1 = &PTR_FUN_00439834;
  param_1[1] = param_2;
  if ((DAT_00439814 != (undefined4 *)0x0) && (DAT_00439814 != (undefined4 *)0x0)) {
    (**(code **)*DAT_00439814)();
  }
  DAT_00439814 = param_1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

