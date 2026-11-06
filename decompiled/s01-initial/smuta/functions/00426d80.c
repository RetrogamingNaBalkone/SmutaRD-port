/* Ghidra address: 00426d80; FUN_00426d80 */

/* WARNING: Removing unreachable block (ram,0x00426e64) */

undefined4 FUN_00426d80(void)

{
  undefined4 uVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined2 *in_stack_0000000c;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x437426);
  thunk_FUN_0042cddc();
  FUN_0042bcf8();
  FUN_004096a4();
  DVar2 = FUN_0042dce8();
  *in_stack_0000000c = (short)DVar2;
  pvVar3 = FUN_00410304();
  *(LPVOID *)(in_stack_00000004 + 10) = pvVar3;
  FUN_0040978c();
  thunk_FUN_0042e178();
  uVar1 = *(undefined4 *)(in_stack_00000004 + 10);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return uVar1;
}

