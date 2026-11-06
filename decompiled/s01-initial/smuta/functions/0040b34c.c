/* Ghidra address: 0040b34c; FUN_0040b34c */

void FUN_0040b34c(void)

{
  short sVar1;
  int *in_stack_00000004;
  int in_stack_00000010;
  
  for (sVar1 = 0; sVar1 < in_stack_00000010; sVar1 = sVar1 + 1) {
    (**(code **)(*in_stack_00000004 + 4))();
  }
  return;
}

