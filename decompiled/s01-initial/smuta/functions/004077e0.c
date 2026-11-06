/* Ghidra address: 004077e0; FUN_004077e0 */

void FUN_004077e0(void)

{
  short *in_stack_00000004;
  byte *in_stack_00000008;
  
  in_stack_00000004[2] = (ushort)in_stack_00000008[2] << 10;
  in_stack_00000004[1] = (ushort)in_stack_00000008[1] << 10;
  *in_stack_00000004 = (ushort)*in_stack_00000008 << 10;
  return;
}

