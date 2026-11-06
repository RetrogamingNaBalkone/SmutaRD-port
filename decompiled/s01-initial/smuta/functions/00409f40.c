/* Ghidra address: 00409f40; FUN_00409f40 */

void FUN_00409f40(void)

{
  int in_stack_00000004;
  ushort in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  
  if (in_stack_0000000c == 0) {
    in_stack_0000000c = 1;
  }
  if (in_stack_0000000c < in_stack_00000010) {
    in_stack_00000010 = in_stack_0000000c;
  }
  *(ushort *)(in_stack_00000004 + 4) = *(ushort *)(in_stack_00000004 + 4) | in_stack_00000008;
  *(short *)(in_stack_00000004 + 6) = in_stack_0000000c;
  *(short *)(in_stack_00000004 + 8) = in_stack_00000010;
  return;
}

