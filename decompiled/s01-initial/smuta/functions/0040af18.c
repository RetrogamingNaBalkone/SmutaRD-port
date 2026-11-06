/* Ghidra address: 0040af18; FUN_0040af18 */

void FUN_0040af18(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  
  *(undefined4 *)(in_stack_00000004 + 0x32) = in_stack_00000008;
  *(undefined4 *)(in_stack_00000004 + 0x36) = in_stack_0000000c;
  *(undefined4 *)(in_stack_00000004 + 0x3e) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x3a) = 0;
  *(int *)(in_stack_00000004 + 0x42) = *(int *)(in_stack_00000004 + 0x32) + -1;
  *(int *)(in_stack_00000004 + 0x46) = *(int *)(in_stack_00000004 + 0x36) + -1;
  *(undefined1 *)(in_stack_00000004 + 0x34c) = in_stack_00000010;
  return;
}

