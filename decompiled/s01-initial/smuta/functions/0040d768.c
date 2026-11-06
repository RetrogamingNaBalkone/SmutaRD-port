/* Ghidra address: 0040d768; FUN_0040d768 */

undefined4 FUN_0040d768(void)

{
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(*in_stack_00000004 + in_stack_00000004[1] * 4) = in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000004[1] + 1;
  return 0;
}

