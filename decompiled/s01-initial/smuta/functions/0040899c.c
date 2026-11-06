/* Ghidra address: 0040899c; FUN_0040899c */

void FUN_0040899c(void)

{
  int in_stack_00000004;
  undefined2 in_stack_00000008;
  
  *(undefined2 *)(in_stack_00000004 + 0x1c) = in_stack_00000008;
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 10;
  return;
}

