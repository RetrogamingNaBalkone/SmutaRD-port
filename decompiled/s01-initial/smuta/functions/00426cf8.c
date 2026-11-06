/* Ghidra address: 00426cf8; FUN_00426cf8 */

void FUN_00426cf8(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4373f6);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    iVar1 = *(int *)(in_stack_00000004 + 6);
    if (iVar1 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar1 + 4))();
    }
    if (*(int *)(in_stack_00000004 + 10) != 0) {
      FUN_0041034c();
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

