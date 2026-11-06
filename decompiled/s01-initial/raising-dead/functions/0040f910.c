/* Ghidra address: 0040f910; FUN_0040f910 */

undefined4 * __cdecl FUN_0040f910(undefined4 *param_1)

{
  FUN_0040e220(param_1,4);
  param_1[5] = &PTR_FUN_00439ee4;
  param_1[9] = 0;
  *(short *)((int)param_1 + 0x32) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  FUN_0040f8c4((short *)((int)param_1 + 0x32),0);
  return param_1;
}

