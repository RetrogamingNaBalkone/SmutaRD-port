/* Ghidra address: 0042664b; FUN_0042664b */

void FUN_0042664b(void)

{
  char *in_stack_00000010;
  
  for (; (*in_stack_00000010 != '\0' && (*in_stack_00000010 != '$'));
      in_stack_00000010 = in_stack_00000010 + 1) {
    if ((*in_stack_00000010 != '\n') && (*in_stack_00000010 != '\r')) {
      FUN_00426592();
    }
  }
  return;
}

