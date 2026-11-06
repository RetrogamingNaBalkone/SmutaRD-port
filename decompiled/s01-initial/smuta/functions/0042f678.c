/* Ghidra address: 0042f678; FUN_0042f678 */

void FUN_0042f678(void)

{
  undefined2 uVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  
  if (((*(short *)(in_stack_00000004 + 4) != 0) && (*(int *)(in_stack_00000004 + 8) != 0)) &&
     (in_stack_00000008 != *(uint *)(in_stack_00000004 + 8))) {
    FUN_00431964();
  }
  *(uint *)(in_stack_00000004 + 8) = in_stack_00000008;
  if (((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) ||
     (in_stack_0000000c < in_stack_00000008)) {
    in_stack_0000000c = in_stack_00000008;
  }
  *(uint *)(in_stack_00000004 + 0xc) = in_stack_0000000c;
  *(ushort *)(in_stack_00000004 + 6) = (ushort)(in_stack_00000008 == 0);
  if ((in_stack_00000010 == 0) || (in_stack_00000008 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined2 *)(in_stack_00000004 + 4) = uVar1;
  return;
}

