/* Ghidra address: 0040d708; FUN_0040d708 */

undefined4 * FUN_0040d708(void)

{
  LPVOID pvVar1;
  undefined4 *in_stack_00000004;
  
  in_stack_00000004[1] = 0;
  pvVar1 = FUN_00410304();
  *in_stack_00000004 = pvVar1;
  FUN_0040d79c();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

