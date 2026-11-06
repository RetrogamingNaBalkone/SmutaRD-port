/* Ghidra address: 00432a60; FUN_00432a60 */

void FUN_00432a60(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438eac);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    FUN_00431320();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_24;
  return;
}

