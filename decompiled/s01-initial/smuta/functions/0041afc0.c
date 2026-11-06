/* Ghidra address: 0041afc0; FUN_0041afc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041afc0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_00493da8 = (DAT_0044ebdc - DAT_0044ebd4) + 1;
  iVar1 = DAT_0044ebd4;
  if (DAT_0044ebd4 < 0) {
    iVar1 = 0;
  }
  DAT_00493da4 = DAT_0044ebdc;
  if (0x513 < DAT_0044ebdc) {
    DAT_00493da4 = 0x513;
  }
  puVar2 = &DAT_00492950 + iVar1;
  DAT_00493da0 = iVar1;
  for (; iVar1 <= DAT_00493da4; iVar1 = iVar1 + 1) {
    *puVar2 = 1;
    puVar2 = puVar2 + 1;
  }
  _DAT_0048aab2 = 0;
  FUN_0041b160(DAT_00492944,puVar2,DAT_00493da4,(undefined4 *)DAT_00492944);
  return;
}

