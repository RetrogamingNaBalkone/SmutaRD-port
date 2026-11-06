/* Ghidra address: 004229f0; FUN_004229f0 */

void FUN_004229f0(void)

{
  undefined1 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  int in_stack_00000004;
  
  if (*(short *)(*(int *)(in_stack_00000004 + 0x34) + 0xf8) != *(short *)(in_stack_00000004 + 0x30))
  {
    bVar2 = FUN_0041dc34();
    if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
       (((uVar1 = FUN_004232d0(), CONCAT31(extraout_var_02,uVar1) == 0 ||
         (iVar3 = FUN_00423264(), iVar3 == 0)) ||
        (bVar2 = FUN_0042365c(), CONCAT31(extraout_var_03,bVar2) == 0)))) {
      FUN_0041e5f0();
    }
    *(undefined4 *)(in_stack_00000004 + 0x38) = 0;
    return;
  }
  uVar1 = FUN_004232d0();
  if (CONCAT31(extraout_var,uVar1) == 0) {
    return;
  }
  iVar3 = FUN_00423264();
  if (iVar3 == 0) {
    return;
  }
  bVar2 = FUN_0042365c();
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004 + 0x38) != 0) {
    return;
  }
  FUN_0042369c();
  *(undefined4 *)(in_stack_00000004 + 0x38) = 1;
  return;
}

