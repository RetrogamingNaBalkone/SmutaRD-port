/* Ghidra address: 0042f3b8; FUN_0042f3b8 */

int * FUN_0042f3b8(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    *in_stack_00000004 = (int)in_stack_00000004 + 0x3e;
    FUN_0042f7f4();
  }
  in_stack_00000004[1] = (int)&PTR_FUN_00438734;
  *(undefined ***)*in_stack_00000004 = &PTR_LAB_00438740;
  FUN_0042ef0c();
  FUN_0042f8c4();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

