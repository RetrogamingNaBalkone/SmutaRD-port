/* Ghidra address: 00437594; FUN_00437594 */

void __cdecl FUN_00437594(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43cc78);
  if (param_1 != 0) {
    FUN_00435b40(*(int *)(param_1 + 2));
    if ((param_2 & 1) != 0) {
      FUN_004350ec(param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

