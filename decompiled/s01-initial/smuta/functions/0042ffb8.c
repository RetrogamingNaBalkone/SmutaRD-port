/* Ghidra address: 0042ffb8; FUN_0042ffb8 */

undefined4 FUN_0042ffb8(void)

{
  int *in_stack_00000004;
  
  if (*in_stack_00000004 == 4) {
    in_stack_00000004[6] = 0;
    in_stack_00000004[7] = 0;
    return 1;
  }
  if (*in_stack_00000004 == 5) {
    return 1;
  }
  return 0;
}

