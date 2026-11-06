/* Ghidra address: 0040b3b4; FUN_0040b3b4 */

void FUN_0040b3b4(void)

{
  int *in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  for (; in_stack_0000000c <= in_stack_00000010; in_stack_0000000c = in_stack_0000000c + 1) {
    (**(code **)(*in_stack_00000004 + 4))();
  }
  return;
}

