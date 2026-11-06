/* Ghidra address: 00431aa4; FUN_00431aa4 */

int FUN_00431aa4(void)

{
  int iVar1;
  uint uVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  code *in_stack_00000014;
  
  if (in_stack_00000004 == 0) {
    in_stack_00000004 = 0;
  }
  else {
    if ((in_stack_00000010 & 0x10) != 0) {
      in_stack_0000000c = *(int *)(in_stack_00000004 + -4);
    }
    uVar2 = in_stack_00000010 & 7;
    iVar1 = (in_stack_0000000c + -1) * in_stack_00000008 + in_stack_00000004;
    while (in_stack_0000000c != 0) {
      if (uVar2 == 1) {
        (*in_stack_00000014)();
      }
      else if (uVar2 == 2) {
        (*in_stack_00000014)();
      }
      else if (uVar2 == 3) {
        (*in_stack_00000014)(iVar1,2);
      }
      else if (uVar2 == 5) {
        (*in_stack_00000014)();
      }
      else {
        FUN_00431e98();
      }
      iVar1 = iVar1 - in_stack_00000008;
      in_stack_0000000c = in_stack_0000000c + -1;
    }
    if ((in_stack_00000010 & 0x10) != 0) {
      in_stack_00000004 = in_stack_00000004 + -4;
    }
    if ((in_stack_00000010 & 8) != 0) {
      FUN_00431964();
      in_stack_00000004 = 0;
    }
  }
  return in_stack_00000004;
}

