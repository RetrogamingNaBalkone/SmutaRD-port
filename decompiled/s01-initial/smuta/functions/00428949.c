/* Ghidra address: 00428949; FUN_00428949 */

void FUN_00428949(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4376a0);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (int *)0x0) {
    *in_stack_00000004 = (int)&PTR_FUN_004376cc;
    piVar1 = (int *)FUN_0040a6d0();
    if (in_stack_00000004 == piVar1) {
      (**(code **)(*in_stack_00000004 + 0x1c))();
      FUN_0040a6d8();
    }
    if (*(int *)((int)in_stack_00000004 + 10) != 0) {
      *DAT_0049aa2c = *DAT_0049aa2c + 7;
      FUN_00428441();
    }
    FUN_00404fd6();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

