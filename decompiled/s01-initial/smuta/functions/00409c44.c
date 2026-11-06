/* Ghidra address: 00409c44; FUN_00409c44 */

LPVOID FUN_00409c44(void)

{
  LPVOID pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined2 local_8;
  
  FUN_0042b4b4(0x4353b0);
  thunk_FUN_0042cddc();
  FUN_0042bcf8();
  FUN_004096a4();
  FUN_0042dce8();
  pvVar1 = FUN_00409c0c();
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (local_8 != 0) {
    (*(code *)PTR_FUN_00435338)();
  }
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return pvVar1;
}

