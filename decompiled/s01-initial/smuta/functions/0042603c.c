/* Ghidra address: 0042603c; FUN_0042603c */

undefined4 FUN_0042603c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined2 local_8;
  
  FUN_0042b4b4(0x436e00);
  FUN_0040fc00();
  FUN_0042cfc4();
  FUN_00409678();
  uVar1 = FUN_004096e4();
  if ((short)uVar1 == 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    if (local_8 != 0) {
      (*(code *)PTR_FUN_00435338)();
    }
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    uVar1 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    if (local_8 != 0) {
      (*(code *)PTR_FUN_00435338)();
    }
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    uVar1 = 1;
    *in_FS_OFFSET = local_2c;
  }
  return uVar1;
}

