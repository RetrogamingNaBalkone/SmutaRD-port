/* Ghidra address: 00429d0e; FUN_00429d0e */

void FUN_00429d0e(void)

{
  uint uVar1;
  undefined4 in_stack_00000004;
  code *in_stack_00000008;
  uint in_stack_0000000c;
  
  uVar1 = in_stack_0000000c & 7;
  if (uVar1 == 1) {
    (*in_stack_00000008)();
    return;
  }
  if (uVar1 == 2) {
    (*in_stack_00000008)();
    return;
  }
  if (uVar1 == 3) {
    (*in_stack_00000008)(in_stack_00000004);
    return;
  }
  if (uVar1 != 5) {
    return;
  }
  (*in_stack_00000008)();
  return;
}

