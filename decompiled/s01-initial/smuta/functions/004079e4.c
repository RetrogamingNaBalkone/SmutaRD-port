/* Ghidra address: 004079e4; FUN_004079e4 */

undefined4 FUN_004079e4(void)

{
  undefined4 uVar1;
  ushort *in_stack_00000004;
  ushort *in_stack_00000008;
  
  if (((in_stack_00000004[2] < in_stack_00000008[2]) &&
      (in_stack_00000004[1] < in_stack_00000008[1])) && (*in_stack_00000004 < *in_stack_00000008)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

