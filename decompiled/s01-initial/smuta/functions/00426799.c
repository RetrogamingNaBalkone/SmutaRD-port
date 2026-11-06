/* Ghidra address: 00426799; FUN_00426799 */

void FUN_00426799(void)

{
  char *in_stack_00000014;
  
  for (; (*in_stack_00000014 != '\0' && (*in_stack_00000014 != '$'));
      in_stack_00000014 = in_stack_00000014 + 1) {
    if ((*in_stack_00000014 != '\n') && (*in_stack_00000014 != '\r')) {
      FUN_004266d7();
    }
  }
  return;
}

