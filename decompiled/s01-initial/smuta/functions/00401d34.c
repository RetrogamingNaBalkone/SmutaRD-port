/* Ghidra address: 00401d34; FUN_00401d34 */

void FUN_00401d34(void)

{
  int in_stack_00000004;
  undefined2 local_6;
  
  for (local_6 = *(short *)(in_stack_00000004 + 0x3e);
      (int)local_6 <= *(int *)(in_stack_00000004 + 0x46); local_6 = local_6 + 1) {
    FUN_00428fe4();
  }
  return;
}

