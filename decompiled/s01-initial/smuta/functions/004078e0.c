/* Ghidra address: 004078e0; FUN_004078e0 */

undefined4 FUN_004078e0(void)

{
  undefined4 uVar1;
  short *in_stack_00000004;
  short *in_stack_00000008;
  
  if (((in_stack_00000004[2] == in_stack_00000008[2]) &&
      (in_stack_00000004[1] == in_stack_00000008[1])) && (*in_stack_00000004 == *in_stack_00000008))
  {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

