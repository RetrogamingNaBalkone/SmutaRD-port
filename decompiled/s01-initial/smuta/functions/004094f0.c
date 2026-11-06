/* Ghidra address: 004094f0; FUN_004094f0 */

void FUN_004094f0(void)

{
  short sVar1;
  uint in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  for (sVar1 = 0; (int)sVar1 < (int)(in_stack_00000004 & 0xffff); sVar1 = sVar1 + 1) {
    *in_stack_00000008 = *in_stack_00000008 + in_stack_0000000c;
    in_stack_00000008[1] = in_stack_00000008[1] + in_stack_00000010;
    in_stack_00000008[2] = in_stack_00000008[2] + in_stack_00000014;
    in_stack_00000008 = in_stack_00000008 + 3;
  }
  return;
}

