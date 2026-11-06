/* Ghidra address: 0040e36c; FUN_0040e36c */

void FUN_0040e36c(void)

{
  int in_stack_00000004;
  
  if ((*(byte *)(in_stack_00000004 + 0x16) & 1) != 0) {
    DAT_00439da8 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x4d)) {
      (**(code **)(*DAT_0044ec08 + 0x4c))();
    }
    if (*(int *)(in_stack_00000004 + 0x1d) < 0) {
      (**(code **)(*DAT_0044ec08 + 0x4c))();
    }
  }
  return;
}

