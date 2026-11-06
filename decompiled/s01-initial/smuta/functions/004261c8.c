/* Ghidra address: 004261c8; FUN_004261c8 */

void FUN_004261c8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_2c;
  undefined2 local_8;
  
  FUN_0042b4b4(0x436e48);
  DAT_0049a38c = in_stack_00000004;
  DAT_0049a390 = in_stack_00000008;
  FUN_0042603c();
  if (DAT_00499d54 != 0) {
    FUN_00420ce4();
  }
  FUN_004096a4();
  FUN_00409828();
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (local_8 != 0) {
    (*(code *)PTR_FUN_00435338)();
  }
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return;
}

