/* Ghidra address: 0042a750; FUN_0042a750 */

void __cdecl FUN_0042a750(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43a2e8);
  if (param_1 != (undefined4 *)0x0) {
    FUN_004372a8((int *)*param_1,3);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

