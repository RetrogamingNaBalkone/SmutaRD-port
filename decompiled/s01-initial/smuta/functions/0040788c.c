/* Ghidra address: 0040788c; FUN_0040788c */

undefined1 * FUN_0040788c(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 *in_stack_00000004;
  undefined2 *in_stack_00000008;
  
  uVar1 = in_stack_00000008[1];
  uVar2 = in_stack_00000008[2];
  *in_stack_00000004 = (char)((ushort)*in_stack_00000008 >> 8);
  in_stack_00000004[1] = (char)((ushort)uVar1 >> 8);
  in_stack_00000004[2] = (char)((ushort)uVar2 >> 8);
  return in_stack_00000004;
}

