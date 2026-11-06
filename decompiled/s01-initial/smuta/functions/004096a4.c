/* Ghidra address: 004096a4; FUN_004096a4 */

int * FUN_004096a4(void)

{
  int *in_stack_00000004;
  
  *in_stack_00000004 = (int)&PTR_LAB_0043535c;
  *(undefined2 *)(in_stack_00000004 + 1) = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = (int)&PTR_LAB_00435330;
  (**(code **)(*in_stack_00000004 + 4))();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

