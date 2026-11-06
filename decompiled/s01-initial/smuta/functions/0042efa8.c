/* Ghidra address: 0042efa8; FUN_0042efa8 */

void FUN_0042efa8(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_004386f4;
    if ((*(ushort *)(in_stack_00000004 + 0xc) & 3) == 1) {
      if (in_stack_00000004[0xb] == 0) {
        FUN_00431964();
      }
      else {
        (*(code *)in_stack_00000004[0xb])();
      }
    }
    FUN_0042f608();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

