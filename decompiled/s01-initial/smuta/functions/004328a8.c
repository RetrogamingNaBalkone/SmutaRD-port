/* Ghidra address: 004328a8; FUN_004328a8 */

void FUN_004328a8(void)

{
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  uint in_stack_00000008;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x438e34);
  if (*(uint *)(*in_stack_00000004 + 6) < in_stack_00000008) {
    FUN_00432604();
    FUN_00429438();
    FUN_004327b0();
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_0042a068();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

