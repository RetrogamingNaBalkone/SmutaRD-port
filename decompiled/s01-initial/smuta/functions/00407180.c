/* Ghidra address: 00407180; FUN_00407180 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00407180(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  
  iVar1 = (int)DAT_00439cfa;
  iVar5 = DAT_00439da0 >> 0x10;
  pcVar8 = (char *)((DAT_00439d98 >> 0x10) * iVar1 + DAT_00439d00 + (DAT_00439d94 >> 0x10));
  puVar2 = (undefined1 *)((&DAT_004390f0)[DAT_00439d8c] + (int)DAT_00439d8e);
  uVar7 = DAT_00439da0 * 0x10000;
  uVar6 = DAT_00439d98 << 0x10;
  iVar3 = ((int)DAT_00439d92 - (int)DAT_00439d8c) + 2;
  puVar4 = DAT_004390d0;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    puVar4 = (undefined1 *)CONCAT31((int3)((uint)puVar4 >> 8),*pcVar8);
    if (*pcVar8 != '\0') {
      uVar6 = CONCAT31((int3)(uVar6 >> 8),*puVar4);
      *puVar2 = *puVar4;
    }
    puVar2 = puVar2 + _DAT_00443fa0;
    pcVar8 = pcVar8 + iVar5 * iVar1;
    bVar9 = CARRY4(uVar6,uVar7);
    uVar6 = uVar6 + uVar7;
    if (bVar9) {
      pcVar8 = pcVar8 + iVar1;
    }
  }
  return puVar4;
}

