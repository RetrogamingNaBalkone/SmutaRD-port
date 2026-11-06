/* Ghidra address: 0041db7c; FUN_0041db7c */

undefined4 FUN_0041db7c(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(short **)(in_stack_00000004 + 0x1c) != (short *)0x0) {
    if (**(short **)(in_stack_00000004 + 0x1c) == 0) {
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 0x20) = uVar1;
    }
    else {
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 0x20) = uVar1;
    }
  }
  return *(undefined4 *)(in_stack_00000004 + 0x20);
}

