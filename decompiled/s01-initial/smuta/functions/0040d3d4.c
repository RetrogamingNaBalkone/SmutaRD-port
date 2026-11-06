/* Ghidra address: 0040d3d4; FUN_0040d3d4 */

void FUN_0040d3d4(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    FUN_0040d388();
    FUN_0041034c();
    (**(code **)(*(int *)(in_stack_00000004 + 6) + 8))();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    *(int *)(in_stack_00000004 + 6) = (int)&PTR_LAB_00435330;
    if (*(short *)(in_stack_00000004 + 10) != 0) {
      (**(code **)(*(int *)(in_stack_00000004 + 6) + 8))();
    }
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

