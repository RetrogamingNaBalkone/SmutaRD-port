/* Ghidra address: 004325cc; FUN_004325cc */

undefined4 * FUN_004325cc(void)

{
  short *psVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438d5c);
  psVar1 = (short *)*in_stack_00000008;
  *in_stack_00000004 = psVar1;
  *psVar1 = *psVar1 + 1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_24;
  return in_stack_00000004;
}

