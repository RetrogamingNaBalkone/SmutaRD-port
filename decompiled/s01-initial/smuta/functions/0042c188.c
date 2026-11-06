/* Ghidra address: 0042c188; FUN_0042c188 */

void FUN_0042c188(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_00437a74;
  iVar2 = 0x32;
  while (iVar2 != 0) {
    if ((*(ushort *)((int)puVar1 + 0x12) & 0x300) == 0x300) {
      FUN_0042bad4();
    }
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return;
}

