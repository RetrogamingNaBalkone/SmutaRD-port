/* Ghidra address: 00409ad0; FUN_00409ad0 */

void FUN_00409ad0(void)

{
  short *psVar1;
  short in_stack_00000004;
  short in_stack_00000008;
  short in_stack_0000000c;
  
  psVar1 = FUN_00410304();
  *psVar1 = in_stack_00000004;
  psVar1[1] = in_stack_00000008;
  psVar1[2] = in_stack_0000000c;
  *(int *)(psVar1 + 5) = (int)in_stack_00000004 * (int)in_stack_00000008;
  *(short **)(psVar1 + 7) = psVar1 + 9;
  psVar1[4] = 0;
  psVar1[3] = 1;
  return;
}

