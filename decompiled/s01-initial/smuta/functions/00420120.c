/* Ghidra address: 00420120; FUN_00420120 */

void FUN_00420120(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x4363ac);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436930;
    puVar1 = *(undefined4 **)(in_stack_00000004 + 0xc0);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (**(code **)*puVar1)();
    }
    puVar1 = *(undefined4 **)(in_stack_00000004 + 0xc4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (**(code **)*puVar1)();
    }
    *(undefined2 *)(in_stack_00000004 + 0x1b) = 0;
    DAT_00499d54 = 0;
    FUN_0041eb08();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

