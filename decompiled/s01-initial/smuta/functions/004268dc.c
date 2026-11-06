/* Ghidra address: 004268dc; FUN_004268dc */

undefined4 FUN_004268dc(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int *in_stack_00000014;
  int *in_stack_00000018;
  
  if ((((*in_stack_00000014 < in_stack_00000004) || (in_stack_0000000c < *in_stack_00000014)) ||
      (*in_stack_00000018 < in_stack_00000008)) || (in_stack_00000010 < *in_stack_00000018)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

