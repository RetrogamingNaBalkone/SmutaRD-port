/* Ghidra address: 0040eca8; FUN_0040eca8 */

void FUN_0040eca8(void)

{
  int in_stack_00000004;
  
  if (((*(byte *)(in_stack_00000004 + 0x16) & 1) != 0) &&
     (DAT_00439da8 = 0, 0 < *(int *)(in_stack_00000004 + 0x1d))) {
    (**(code **)(*DAT_0044ec08 + 0x4c))();
  }
  return;
}

