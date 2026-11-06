/* Ghidra address: 004103cc; FUN_004103cc */

void FUN_004103cc(void)

{
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 0x10) =
       *(int *)(in_stack_00000004 + 0x10) + *(int *)(in_stack_00000004 + 0x18);
  *(int *)(in_stack_00000004 + 0x14) =
       *(int *)(in_stack_00000004 + 0x14) + *(int *)(in_stack_00000004 + 0x1c);
  *(int *)(in_stack_00000004 + 8) = *(int *)(in_stack_00000004 + 0x10) >> 0x10;
  *(int *)(in_stack_00000004 + 0xc) = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
  return;
}

