/* Ghidra address: 00427be8; FUN_00427be8 */

undefined4 * FUN_00427be8(void)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = in_stack_00000008;
  if (in_stack_00000004[1] != 0) {
    uVar1 = FUN_004319bc();
    in_stack_00000004[2] = uVar1;
  }
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

