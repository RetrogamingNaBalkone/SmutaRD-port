/* Ghidra address: 00428733; FUN_00428733 */

void FUN_00428733(void)

{
  int *piVar1;
  int in_stack_00000004;
  int *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  int *in_stack_00000010;
  
  for (piVar1 = (int *)(in_stack_00000004 + 0xc); *piVar1 != 0x20746d66;
      piVar1 = (int *)((int)piVar1 + 1)) {
  }
  *in_stack_00000008 = (int)(piVar1 + 2);
  for (; *piVar1 != 0x61746164; piVar1 = (int *)((int)piVar1 + 1)) {
  }
  *in_stack_00000010 = piVar1[1];
  *in_stack_0000000c = piVar1 + 2;
  return;
}

