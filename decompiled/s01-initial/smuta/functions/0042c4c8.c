/* Ghidra address: 0042c4c8; FUN_0042c4c8 */

undefined * FUN_0042c4c8(void)

{
  undefined *puVar1;
  int iVar2;
  short *in_stack_00000008;
  
  do {
    *in_stack_00000008 = *in_stack_00000008 + 1;
    if (*in_stack_00000008 == 0) {
      *in_stack_00000008 = 1;
    }
    puVar1 = FUN_0042c478();
    iVar2 = FUN_0042e13c();
  } while (iVar2 == 0);
  return puVar1;
}

