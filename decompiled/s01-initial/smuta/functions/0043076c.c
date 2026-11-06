/* Ghidra address: 0043076c; FUN_0043076c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043076c(void)

{
  float10 in_ST0;
  float *in_stack_00000004;
  double *in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((in_stack_0000000c & 4) == 0) {
    if ((in_stack_0000000c & 8) == 0) {
      FUN_0042fe30();
      *(float *)in_stack_00000008 = (float)in_ST0;
    }
    else {
      *(float *)in_stack_00000008 = *in_stack_00000004;
      *(float *)((int)in_stack_00000008 + 4) = in_stack_00000004[1];
      *(undefined2 *)(in_stack_00000008 + 1) = *(undefined2 *)(in_stack_00000004 + 2);
    }
  }
  else {
    FUN_0042fe30();
    *in_stack_00000008 = (double)in_ST0;
  }
  return;
}

