/* Ghidra address: 0042f608; FUN_0042f608 */

void FUN_0042f608(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00438750;
    if (*(short *)(in_stack_00000004 + 1) != 0) {
      FUN_00431964();
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

