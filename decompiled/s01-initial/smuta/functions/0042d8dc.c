/* Ghidra address: 0042d8dc; FUN_0042d8dc */

int FUN_0042d8dc(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = &DAT_00437a74;
  iVar2 = DAT_00437f24;
  while (iVar2 != 0) {
    if (((*(byte *)((int)puVar1 + 0x12) & 3) != 0) && (puVar1[2] != 0)) {
      FUN_0042bad4();
      iVar3 = iVar3 + 1;
    }
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return iVar3;
}

