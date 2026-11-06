/* Ghidra address: 00408944; FUN_00408944 */

void FUN_00408944(void)

{
  int in_stack_00000004;
  undefined2 in_stack_00000008;
  
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 6;
  *(undefined2 *)(in_stack_00000004 + 0x16) = in_stack_00000008;
  return;
}

