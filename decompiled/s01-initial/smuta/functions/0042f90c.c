/* Ghidra address: 0042f90c; FUN_0042f90c */

void FUN_0042f90c(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  
  *(uint *)(in_stack_00000004 + 0xc) = *(uint *)(in_stack_00000004 + 0xc) | in_stack_00000008 & 0xff
  ;
  *(uint *)(in_stack_00000004 + 0x10) =
       *(uint *)(in_stack_00000004 + 0x10) | in_stack_00000008 & 0xfffffcff;
  *(uint *)(in_stack_00000004 + 0x14) =
       *(uint *)(in_stack_00000004 + 0x14) | in_stack_00000008 & 0xfffffdff;
  return;
}

