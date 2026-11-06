/* Ghidra address: 0042f7b8; FUN_0042f7b8 */

void FUN_0042f7b8(void)

{
  uint uVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  
  uVar1 = in_stack_00000008 & 0xff | *(uint *)(in_stack_00000004 + 0xc) & 0x80;
  *(uint *)(in_stack_00000004 + 0xc) = uVar1;
  *(uint *)(in_stack_00000004 + 0x10) = *(uint *)(in_stack_00000004 + 0x10) & 0xffffff00 | uVar1;
  *(uint *)(in_stack_00000004 + 0x14) =
       *(uint *)(in_stack_00000004 + 0x14) & 0xffffff00 | *(uint *)(in_stack_00000004 + 0xc);
  return;
}

