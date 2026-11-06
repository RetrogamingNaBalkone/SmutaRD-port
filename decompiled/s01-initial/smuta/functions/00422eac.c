/* Ghidra address: 00422eac; FUN_00422eac */

void FUN_00422eac(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_44;
  
  FUN_0042b4b4(0x436618);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_0043686c;
    iVar3 = *(int *)(in_stack_00000004 + 0x114);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    iVar3 = *(int *)(in_stack_00000004 + 0x118);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    iVar3 = *(int *)(in_stack_00000004 + 0x11c);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    iVar3 = *(int *)(in_stack_00000004 + 0x120);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    iVar3 = *(int *)(in_stack_00000004 + 0x124);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    iVar3 = *(int *)(in_stack_00000004 + 0x128);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    puVar1 = *(undefined4 **)(in_stack_00000004 + 0x107);
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
      (**(code **)*puVar1)();
    }
    puVar1 = *(undefined4 **)(in_stack_00000004 + 0x10b);
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
      (**(code **)*puVar1)();
    }
    *(undefined2 *)(in_stack_00000004 + 0x1b) = 0;
    FUN_0041eb08();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_44;
  return;
}

