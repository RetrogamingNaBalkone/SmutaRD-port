/* Ghidra address: 0040d784; FUN_0040d784 */

undefined4 FUN_0040d784(void)

{
  undefined4 uVar1;
  int *in_stack_00000004;
  
  uVar1 = *(undefined4 *)(*in_stack_00000004 + in_stack_00000004[1] * 4);
  in_stack_00000004[1] = in_stack_00000004[1] + 1;
  return uVar1;
}

