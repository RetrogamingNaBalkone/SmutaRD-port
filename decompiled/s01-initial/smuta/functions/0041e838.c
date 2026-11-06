/* Ghidra address: 0041e838; FUN_0041e838 */

void FUN_0041e838(void)

{
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 0x70) < 0xc) {
    *(short *)(in_stack_00000004 + 0x70) = *(short *)(in_stack_00000004 + 0x70) + 1;
  }
  else {
    *(undefined2 *)(in_stack_00000004 + 0x70) = 0;
  }
  FUN_00409f40();
  *(undefined2 *)(*(int *)(in_stack_00000004 + 0x82) + 4) = 0x1000;
  FUN_00409f40();
  return;
}

