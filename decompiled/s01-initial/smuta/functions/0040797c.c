/* Ghidra address: 0040797c; FUN_0040797c */

undefined4 FUN_0040797c(void)

{
  undefined4 uVar1;
  ushort *in_stack_00000004;
  ushort *in_stack_00000008;
  
  if (((in_stack_00000008[2] < in_stack_00000004[2]) ||
      (in_stack_00000008[1] < in_stack_00000004[1])) || (*in_stack_00000008 < *in_stack_00000004)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

