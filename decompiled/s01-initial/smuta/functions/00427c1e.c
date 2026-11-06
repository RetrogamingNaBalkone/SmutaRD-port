/* Ghidra address: 00427c1e; FUN_00427c1e */

void FUN_00427c1e(void)

{
  int *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (int *)0x0) {
    if (in_stack_00000004[1] != 0) {
      FUN_00431964();
      if (*in_stack_00000004 != 0) {
        DAT_00437630 = DAT_00437630 - *in_stack_00000004;
        DAT_0043762c = DAT_0043762c + -1;
        if (DAT_0043762c != 0) {
          *(int *)(in_stack_00000004[3] + 0x10) = in_stack_00000004[4];
          *(int *)(in_stack_00000004[4] + 0xc) = in_stack_00000004[3];
          if (in_stack_00000004 == DAT_00437634) {
            DAT_00437634 = (int *)in_stack_00000004[3];
          }
        }
      }
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

