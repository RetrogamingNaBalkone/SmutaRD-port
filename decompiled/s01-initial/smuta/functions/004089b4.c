/* Ghidra address: 004089b4; FUN_004089b4 */

void FUN_004089b4(void)

{
  int in_stack_00000004;
  undefined2 in_stack_00000008;
  
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 0x402;
  *(undefined2 *)(in_stack_00000004 + 0x26) = in_stack_00000008;
  return;
}

