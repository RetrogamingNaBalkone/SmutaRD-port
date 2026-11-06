/* Ghidra address: 004327b0; FUN_004327b0 */

void FUN_004327b0(void)

{
  short *psVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438da4);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    psVar1 = (short *)*in_stack_00000004;
    *psVar1 = *psVar1 + -1;
    if (*psVar1 == 0) {
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      FUN_00432a60();
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_24;
  return;
}

