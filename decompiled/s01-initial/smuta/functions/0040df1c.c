/* Ghidra address: 0040df1c; FUN_0040df1c */

void FUN_0040df1c(void)

{
  int in_stack_00000004;
  
  if ((*(byte *)(in_stack_00000004 + 0x16) & 1) != 0) {
    DAT_00439da8 = 0;
    (**(code **)(*DAT_0044ec08 + 0x54))();
  }
  return;
}

