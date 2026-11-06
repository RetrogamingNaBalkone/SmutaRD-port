/* Ghidra address: 0042a68c; FUN_0042a68c */

undefined4 * __cdecl FUN_0042a68c(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_0042c8f0(0x43a270);
  puVar1 = FUN_00435120(4);
  if (puVar1 != (uint *)0x0) {
    FUN_004370b4(puVar1,param_2);
  }
  *param_1 = puVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

