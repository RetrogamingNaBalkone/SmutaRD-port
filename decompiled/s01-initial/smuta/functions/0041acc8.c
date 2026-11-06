/* Ghidra address: 0041acc8; FUN_0041acc8 */

void FUN_0041acc8(void)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435d88);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    if (*(int *)(in_stack_00000004 + 4) != 0) {
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      FUN_0041acc8();
    }
    if (*(int *)(in_stack_00000004 + 8) != 0) {
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      FUN_0041acc8();
    }
    if (((*(int **)(in_stack_00000004 + 0xc) != (int *)0x0) &&
        (sVar2 = (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 0x10))(), sVar2 != 0)) &&
       (puVar1 = *(undefined4 **)(in_stack_00000004 + 0xc), puVar1 != (undefined4 *)0x0)) {
      iVar3 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
      (**(code **)*puVar1)();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

