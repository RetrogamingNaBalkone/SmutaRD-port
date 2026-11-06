/* Ghidra address: 00420838; FUN_00420838 */

bool FUN_00420838(void)

{
  bool bVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  short *in_stack_0000000c;
  undefined2 *in_stack_00000010;
  
  *in_stack_0000000c = *(short *)(in_stack_00000004 + 0x104 + in_stack_00000008 * 2);
  *in_stack_00000010 = *(undefined2 *)(in_stack_00000004 + 0xf0 + in_stack_00000008 * 2);
  if (((in_stack_00000008 == 1) || (in_stack_00000008 == 3)) || (in_stack_00000008 == 5)) {
    bVar1 = *in_stack_0000000c != 0;
  }
  else {
    bVar1 = *(int *)(in_stack_00000004 + 200 + in_stack_00000008 * 4) != 0;
  }
  return bVar1;
}

