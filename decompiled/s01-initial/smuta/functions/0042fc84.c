/* Ghidra address: 0042fc84; FUN_0042fc84 */

void FUN_0042fc84(void)

{
  longlong *in_stack_00000004;
  float10 *in_stack_00000008;
  
  if (*(short *)((int)in_stack_00000008 + 8) != 0x403e) {
    *in_stack_00000004 = (longlong)ROUND(*in_stack_00000008);
    return;
  }
  *(undefined4 *)in_stack_00000004 = *(undefined4 *)in_stack_00000008;
  *(undefined4 *)((int)in_stack_00000004 + 4) = *(undefined4 *)((int)in_stack_00000008 + 4);
  return;
}

