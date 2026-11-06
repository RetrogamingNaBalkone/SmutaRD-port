/* Ghidra address: 0042958c; FUN_0042958c */

undefined4 * FUN_0042958c(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4377b0);
  if (in_stack_00000008 != in_stack_00000004) {
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_004327b0();
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_004325cc();
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
    }
    *in_stack_00000004 = puVar1;
  }
  *in_FS_OFFSET = local_28;
  return in_stack_00000004;
}

