/* Ghidra address: 0042e500; FUN_0042e500 */

int * FUN_0042e500(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    *in_stack_00000004 = (int)in_stack_00000004 + 0x4a;
    *(int *)((int)in_stack_00000004 + 0x3e) = (int)in_stack_00000004 + 0x4a;
    FUN_0042f7f4();
  }
  FUN_0042f3b8();
  FUN_0042e654();
  in_stack_00000004[1] = (int)&PTR_LAB_004386b0;
  *(undefined ***)((int)in_stack_00000004 + 0x42) = &PTR_LAB_004386bc;
  *(undefined ***)*in_stack_00000004 = &PTR_LAB_004386c8;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

