/* Ghidra address: 0042649c; FUN_0042649c */

void FUN_0042649c(void)

{
  LPVOID pvVar1;
  int in_stack_00000004;
  
  pvVar1 = FUN_00410304();
  *(LPVOID *)(in_stack_00000004 + 0x1c) = pvVar1;
  *(undefined2 *)(in_stack_00000004 + 0x24) = 8;
  *(undefined2 *)(in_stack_00000004 + 0x26) = 8;
  return;
}

