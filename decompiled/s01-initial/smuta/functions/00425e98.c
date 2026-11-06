/* Ghidra address: 00425e98; FUN_00425e98 */

void FUN_00425e98(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x436d88);
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  FUN_004107b4();
  if (DAT_0044f6c4 != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 3;
    FUN_0040d3d4();
  }
  piVar1 = DAT_0044f640;
  if (DAT_0044f640 != (int *)0x0) {
    iVar2 = FUN_0042b677();
    *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
    (**(code **)(*piVar1 + 0x24))();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

