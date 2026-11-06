/* Ghidra address: 0042384c; FUN_0042384c */

void FUN_0042384c(void)

{
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + 0x2c) + 0x1c) != 0) {
    FUN_0041e4b4();
    FUN_0041da94();
  }
  (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x2c) + 0x14) + 4))();
  if (*(int *)(in_stack_00000004 + 0x16a) != 0) {
    FUN_00427d42();
  }
  return;
}

