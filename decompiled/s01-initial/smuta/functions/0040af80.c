/* Ghidra address: 0040af80; FUN_0040af80 */

void FUN_0040af80(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = in_stack_00000004[4];
  *(short *)(in_stack_00000004 + 4) = (short)in_stack_00000004[5];
  (**(code **)(*in_stack_00000004 + 0x3c))();
  *(short *)(in_stack_00000004 + 4) = (short)iVar1;
  return;
}

