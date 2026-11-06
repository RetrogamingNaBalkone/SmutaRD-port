/* Ghidra address: 00422914; FUN_00422914 */

void FUN_00422914(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  
  uVar1 = FUN_0041dc50();
  FUN_0041dd68(uVar1,extraout_EDX,extraout_ECX,in_stack_00000004);
  *(undefined4 *)(in_stack_00000004 + 0x38) = 0;
  return;
}

