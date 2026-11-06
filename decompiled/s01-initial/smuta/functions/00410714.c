/* Ghidra address: 00410714; FUN_00410714 */

void FUN_00410714(void)

{
  LPVOID pvVar1;
  uint *in_stack_00000004;
  
  pvVar1 = FUN_00410304();
  *in_stack_00000004 = (uint)pvVar1;
  in_stack_00000004[1] = (*in_stack_00000004 & 0xffffff00) + 0x100;
  return;
}

