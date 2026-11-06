/* Ghidra address: 00426100; FUN_00426100 */

undefined4 FUN_00426100(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 local_2c;
  undefined2 local_8;
  
  FUN_0042b4b4(0x436e24);
  iVar1 = FUN_0042603c();
  if (iVar1 == 0) {
    uVar2 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    FUN_004096a4();
    FUN_0040978c();
    if (DAT_00499d54 != 0) {
      FUN_00420c20();
    }
    *in_stack_00000004 = DAT_0049a38c;
    *in_stack_00000008 = DAT_0049a390;
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    if (local_8 != 0) {
      (*(code *)PTR_FUN_00435338)();
    }
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    uVar2 = 1;
    *in_FS_OFFSET = local_2c;
  }
  return uVar2;
}

