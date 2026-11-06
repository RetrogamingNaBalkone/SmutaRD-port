/* Ghidra address: 0040aad4; FUN_0040aad4 */

void FUN_0040aad4(void)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4354de);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    while (0 < DAT_0044ebea) {
      DAT_0044ebea = DAT_0044ebea + -1;
      sVar2 = (**(code **)(**(int **)(DAT_0044ebea * 4 + DAT_0044ebec) + 0x10))();
      if ((sVar2 != 0) &&
         (puVar1 = *(undefined4 **)(DAT_0044ebec + DAT_0044ebea * 4), puVar1 != (undefined4 *)0x0))
      {
        iVar3 = FUN_0042b677();
        *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
        (**(code **)*puVar1)();
      }
    }
    if (0 < DAT_0044ebe8) {
      FUN_00431964();
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

