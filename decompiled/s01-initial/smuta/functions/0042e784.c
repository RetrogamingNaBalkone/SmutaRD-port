/* Ghidra address: 0042e784; FUN_0042e784 */

void FUN_0042e784(void)

{
  undefined4 *in_stack_00000004;
  uint in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    in_stack_00000004[1] = &PTR_FUN_004386d8;
    *(undefined ***)*in_stack_00000004 = &PTR_LAB_004386e4;
    if ((in_stack_00000008 & 2) != 0) {
      FUN_0042f814();
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

