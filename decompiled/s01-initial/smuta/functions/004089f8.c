/* Ghidra address: 004089f8; FUN_004089f8 */

void FUN_004089f8(void)

{
  int in_stack_00000004;
  short in_stack_00000008;
  
  if (0 < in_stack_00000008) {
    *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 0x202;
    *(short *)(in_stack_00000004 + 0x2a) = in_stack_00000008;
  }
  return;
}

