/* Ghidra address: 004294a0; FUN_004294a0 */

undefined4 * FUN_004294a0(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 local_28;
  
  FUN_0042b4b4(0x437770);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_004325cc();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  *in_stack_00000004 = puVar1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_28;
  return in_stack_00000004;
}

