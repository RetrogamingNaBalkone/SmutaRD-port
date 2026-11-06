/* Ghidra address: 0040b384; FUN_0040b384 */

void FUN_0040b384(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  
  for (; in_stack_00000008 <= in_stack_00000010; in_stack_00000008 = in_stack_00000008 + 1) {
    (**(code **)(*in_stack_00000004 + 4))();
  }
  return;
}

