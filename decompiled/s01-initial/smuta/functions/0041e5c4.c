/* Ghidra address: 0041e5c4; FUN_0041e5c4 */

void FUN_0041e5c4(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  
  if (((((*in_stack_00000008 & 0x40000) != 0) && (in_stack_0000000c != 0)) &&
      ((*(ushort *)(in_stack_00000004 + 0x1b) & 8) == 0)) &&
     ((*(ushort *)(in_stack_00000004 + 0x1b) & 0x10) == 0)) {
    *in_stack_00000008 = *in_stack_00000008 & 0xfffbffff;
  }
  return;
}

