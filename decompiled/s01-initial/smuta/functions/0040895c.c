/* Ghidra address: 0040895c; FUN_0040895c */

void FUN_0040895c(void)

{
  int in_stack_00000004;
  undefined2 in_stack_00000008;
  
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 10;
  *(undefined2 *)(in_stack_00000004 + 0x1a) = in_stack_00000008;
  return;
}

