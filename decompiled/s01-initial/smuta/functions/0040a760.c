/* Ghidra address: 0040a760; FUN_0040a760 */

void FUN_0040a760(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(undefined2 *)(in_stack_00000004 + 4) = *(undefined2 *)(in_stack_00000008 + 4);
  *(undefined2 *)(in_stack_00000004 + 6) = *(undefined2 *)(in_stack_00000008 + 6);
  *(undefined4 *)(in_stack_00000004 + 8) = *(undefined4 *)(in_stack_00000008 + 8);
  *(undefined4 *)(in_stack_00000004 + 0xc) = *(undefined4 *)(in_stack_00000008 + 0xc);
  if ((*(int *)(in_stack_00000008 + 0x10) != 0) && (*(int *)(in_stack_00000004 + 0xc) != 0)) {
    *(int *)(in_stack_00000004 + 0x10) = *(int *)(in_stack_00000008 + 0x10);
  }
  if (*(int *)(in_stack_00000008 + 0x14) != 0) {
    *(int *)(in_stack_00000004 + 0x14) = *(int *)(in_stack_00000008 + 0x14);
  }
  return;
}

