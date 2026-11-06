/* Ghidra address: 00430030; FUN_00430030 */

uint FUN_00430030(void)

{
  char in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((in_stack_00000004 == 'G') || (in_stack_00000004 == 'g')) {
    while (*(char *)(in_stack_0000000c - 1) == '0') {
      in_stack_0000000c = in_stack_0000000c - 1;
      if (in_stack_0000000c <= in_stack_00000008) {
        return in_stack_00000008;
      }
    }
  }
  if (*PTR_DAT_004387d8 == *(char *)(in_stack_0000000c - 1)) {
    in_stack_0000000c = in_stack_0000000c - 1;
  }
  return in_stack_0000000c;
}

