/* Ghidra address: 00432810; FUN_00432810 */

void FUN_00432810(void)

{
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  uint in_stack_00000008;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x438de0);
  if (*(uint *)(*in_stack_00000004 + 6) <= in_stack_00000008) {
    FUN_00432604();
    FUN_00429438();
    FUN_004327b0();
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_0042a068();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

