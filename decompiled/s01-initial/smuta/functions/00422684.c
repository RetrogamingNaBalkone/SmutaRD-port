/* Ghidra address: 00422684; FUN_00422684 */

void FUN_00422684(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int in_stack_00000004;
  
  *(undefined2 *)(*(int *)(in_stack_00000004 + 0x34) + 0x3e) = 0x17;
  uVar1 = FUN_0041dc50();
  FUN_0042339c(uVar1,*(undefined4 *)(in_stack_00000004 + 0x34),extraout_ECX,
               *(undefined4 *)(in_stack_00000004 + 0x34));
  *(undefined4 *)(in_stack_00000004 + 0x38) = 1;
  return;
}

