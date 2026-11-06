/* Ghidra address: 0042e654; FUN_0042e654 */

int * FUN_0042e654(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    *in_stack_00000004 = (int)(in_stack_00000004 + 3);
    FUN_0042f7f4();
  }
  in_stack_00000004[1] = (int)&PTR_FUN_004386d8;
  *(undefined ***)*in_stack_00000004 = &PTR_LAB_004386e4;
  FUN_0042f8c4();
  in_stack_00000004[2] = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

