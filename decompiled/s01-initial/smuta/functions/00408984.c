/* Ghidra address: 00408984; FUN_00408984 */

void FUN_00408984(void)

{
  int in_stack_00000004;
  undefined2 in_stack_00000008;
  
  *(undefined2 *)(in_stack_00000004 + 0x18) = in_stack_00000008;
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 6;
  return;
}

