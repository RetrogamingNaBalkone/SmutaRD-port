/* Ghidra address: 0041dc34; FUN_0041dc34 */

bool FUN_0041dc34(void)

{
  int in_stack_00000004;
  
  return (int)*(short *)(in_stack_00000004 + 0x30) ==
         *(short *)(*(int *)(in_stack_00000004 + 0x1c) + 2) + -1;
}

