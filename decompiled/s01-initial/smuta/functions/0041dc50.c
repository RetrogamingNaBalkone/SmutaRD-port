/* Ghidra address: 0041dc50; FUN_0041dc50 */

void FUN_0041dc50(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  short in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x1c) != 0) {
    *(short *)(in_stack_00000004 + 0x30) = in_stack_00000008 + -1;
    *(undefined4 *)(in_stack_00000004 + 0x2c) = 0;
    if (**(short **)(in_stack_00000004 + 0x1c) == 0) {
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 0x20) = uVar1;
    }
    else {
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 0x20) = uVar1;
    }
    FUN_00427c8d();
  }
  return;
}

