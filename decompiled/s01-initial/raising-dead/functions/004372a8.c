/* Ghidra address: 004372a8; FUN_004372a8 */

void __cdecl FUN_004372a8(int *param_1,byte param_2)

{
  short *psVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43cb4c);
  if (param_1 != (int *)0x0) {
    psVar1 = (short *)*param_1;
    *psVar1 = *psVar1 + -1;
    if (*psVar1 == 0) {
      FUN_00437594(*param_1,3);
    }
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

