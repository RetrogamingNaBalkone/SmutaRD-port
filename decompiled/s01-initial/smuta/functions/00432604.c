/* Ghidra address: 00432604; FUN_00432604 */

undefined4 * FUN_00432604(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x438d80);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    if (in_stack_00000008 != 0) {
      FUN_00429114();
    }
    FUN_004329d4();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  *in_stack_00000004 = puVar1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_28;
  return in_stack_00000004;
}

