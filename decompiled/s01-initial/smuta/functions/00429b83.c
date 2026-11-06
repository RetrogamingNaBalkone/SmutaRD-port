/* Ghidra address: 00429b83; FUN_00429b83 */

void FUN_00429b83(void)

{
  uint uVar1;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  code *in_stack_0000000c;
  uint in_stack_00000010;
  
  if ((in_stack_00000010 & 0x1000) == 0) {
    uVar1 = in_stack_00000010 & 7;
    if (uVar1 == 1) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 2) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 3) {
      (*in_stack_0000000c)(in_stack_00000004,in_stack_00000008);
      return;
    }
    if (uVar1 != 5) {
      return;
    }
    (*in_stack_0000000c)();
  }
  else {
    uVar1 = in_stack_00000010 & 7;
    if (uVar1 == 1) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 2) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 3) {
      (*in_stack_0000000c)(0,in_stack_00000008,in_stack_00000004);
      return;
    }
    if (uVar1 == 5) {
      (*in_stack_0000000c)();
      return;
    }
  }
  return;
}

