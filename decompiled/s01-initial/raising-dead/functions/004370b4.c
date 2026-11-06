/* Ghidra address: 004370b4; FUN_004370b4 */

undefined4 * __cdecl FUN_004370b4(undefined4 *param_1,undefined4 *param_2)

{
  short *psVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43cac4);
  psVar1 = (short *)*param_2;
  *param_1 = psVar1;
  *psVar1 = *psVar1 + 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

