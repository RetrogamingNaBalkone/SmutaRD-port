/* Ghidra address: 004283b1; FUN_004283b1 */

DWORD FUN_004283b1(void)

{
  uint uVar1;
  DWORD DVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  DWORD in_stack_00000004;
  DWORD DVar3;
  
  FUN_00431b68();
  FUN_00431b68();
  DAT_0049aa18 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 200) = 0;
  DVar2 = in_stack_00000004;
  uVar1 = FUN_00428280();
  *(short *)(in_stack_00000004 + 0xde) = (short)uVar1;
  DVar3 = in_stack_00000004;
  DVar2 = FUN_00428cbd(uVar1,extraout_EDX,DVar2,in_stack_00000004);
  *(DWORD *)(in_stack_00000004 + 0xc0) = DVar2;
  DVar2 = FUN_00428cd9(DVar2,extraout_EDX_00,DVar3,in_stack_00000004);
  *(DWORD *)(in_stack_00000004 + 0xc4) = DVar2;
  FUN_00428cf7();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

