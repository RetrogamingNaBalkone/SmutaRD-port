/* Ghidra address: 0042e6f4; FUN_0042e6f4 */

bool FUN_0042e6f4(void)

{
  int iVar1;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  in_stack_00000004[2] = 0;
  if (*(int *)(*in_stack_00000004 + 0xc) != 0) {
    FUN_0042f90c();
    return false;
  }
  if (*(int *)(*in_stack_00000004 + 8) != 0) {
    if (in_stack_00000008 != 0) {
      iVar1 = *(int *)(*in_stack_00000004 + 4);
      if (*(uint *)(iVar1 + 0x20) < *(uint *)(iVar1 + 0x24)) {
        iVar1 = *(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20);
      }
      else {
        iVar1 = 0;
      }
      if (in_stack_00000008 <= iVar1) goto LAB_0042e74e;
    }
    FUN_0042eee4();
  }
LAB_0042e74e:
  if (((in_stack_00000008 == 0) && ((*(byte *)(*in_stack_00000004 + 0x11) & 1) != 0)) &&
     (FUN_0042e7d4(), *(int *)(*in_stack_00000004 + 0xc) != 0)) {
    FUN_0042f90c();
  }
  return *(int *)(*in_stack_00000004 + 0xc) == 0;
}

