/* Ghidra address: 00422948; FUN_00422948 */

void FUN_00422948(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  
  iVar2 = in_stack_00000004;
  bVar1 = FUN_0041dc34();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x38) = 0;
    return;
  }
  if (*(short *)(*(int *)(in_stack_00000004 + 0x34) + 0xfc) != 0) {
    FUN_0041dd68(*(int *)(in_stack_00000004 + 0x34),extraout_EDX,iVar2,in_stack_00000004);
  }
  bVar1 = FUN_004231d4();
  if ((CONCAT31(extraout_var_00,bVar1) != 0) && (iVar2 = FUN_00423264(), iVar2 != 0)) {
    if (*(int *)(in_stack_00000004 + 0x38) != 0) {
      return;
    }
    FUN_00423718();
    *(undefined4 *)(in_stack_00000004 + 0x38) = 1;
    return;
  }
  FUN_0041e5f0();
  return;
}

