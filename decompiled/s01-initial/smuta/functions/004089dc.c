/* Ghidra address: 004089dc; FUN_004089dc */

void FUN_004089dc(void)

{
  int in_stack_00000004;
  short in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 0x12;
    *(short *)(in_stack_00000004 + 0x1e) = in_stack_00000008;
  }
  return;
}

