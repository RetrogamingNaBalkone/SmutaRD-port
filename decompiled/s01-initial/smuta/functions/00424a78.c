/* Ghidra address: 00424a78; FUN_00424a78 */

void FUN_00424a78(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x436bf4);
  if (0 < DAT_00436be0) {
    FUN_0040a7fc();
    puVar1 = *(undefined4 **)(&DAT_0049a1a0 + DAT_00436be0 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (**(code **)*puVar1)();
    }
    DAT_00436be0 = DAT_00436be0 + -1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

