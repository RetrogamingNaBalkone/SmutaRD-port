/* Ghidra address: 00428441; FUN_00428441 */

void FUN_00428441(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined4 *)(in_stack_00000004 + 200) = 0;
    FUN_00431aa4();
    FUN_00431aa4();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

