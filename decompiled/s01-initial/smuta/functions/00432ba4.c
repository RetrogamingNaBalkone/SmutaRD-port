/* Ghidra address: 00432ba4; FUN_00432ba4 */

int FUN_00432ba4(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438eec);
  iVar1 = ((((in_stack_00000004 - DAT_00438f14) + DAT_00438f18) - 1) / DAT_00438f18) * DAT_00438f18
          + DAT_00438f14;
  *in_FS_OFFSET = local_24;
  return iVar1;
}

