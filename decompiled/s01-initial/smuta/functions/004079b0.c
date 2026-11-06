/* Ghidra address: 004079b0; FUN_004079b0 */

undefined4 FUN_004079b0(void)

{
  undefined4 uVar1;
  ushort *in_stack_00000004;
  ushort *in_stack_00000008;
  
  if (((in_stack_00000008[2] < in_stack_00000004[2]) &&
      (in_stack_00000008[1] < in_stack_00000004[1])) && (*in_stack_00000008 < *in_stack_00000004)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

