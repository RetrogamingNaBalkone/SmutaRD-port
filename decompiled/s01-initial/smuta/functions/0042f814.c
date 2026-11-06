/* Ghidra address: 0042f814; FUN_0042f814 */

void FUN_0042f814(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4387a4);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00438790;
    if (in_stack_00000004[0xe] != 0) {
      FUN_00431964();
    }
    if (in_stack_00000004[0xc] == 2) {
      puVar1 = (undefined4 *)in_stack_00000004[1];
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = FUN_0042b677();
        *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
        (**(code **)*puVar1)();
      }
      in_stack_00000004[1] = 0;
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

