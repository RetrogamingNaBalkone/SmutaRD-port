/* Ghidra address: 00411394; FUN_00411394 */

void FUN_00411394(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  uint in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435a78);
  iVar1 = *(int *)(in_stack_00000004 + 0x30e + (in_stack_00000008 & 0xff) * 4);
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar1 + 0x14))();
    }
    *(undefined4 *)(in_stack_00000004 + 0x30e + (in_stack_00000008 & 0xff) * 4) = 0;
  }
  *in_FS_OFFSET = local_28;
  return;
}

