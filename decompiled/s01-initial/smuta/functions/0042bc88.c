/* Ghidra address: 0042bc88; FUN_0042bc88 */

int FUN_0042bc88(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar2 = &DAT_00437a74;
  iVar5 = DAT_00437f24;
  while (iVar5 != 0) {
    if ((int)puVar2[2] < 0) {
      iVar4 = puVar2[3] + puVar2[2] + 1;
      puVar2[2] = puVar2[2] - iVar4;
      *puVar2 = puVar2[1];
      iVar1 = FUN_0042dc08();
      if ((iVar4 != iVar1) && ((*(byte *)((int)puVar2 + 0x13) & 2) == 0)) {
        *(ushort *)((int)puVar2 + 0x12) = *(ushort *)((int)puVar2 + 0x12) | 0x10;
      }
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar2 + 6;
    iVar5 = iVar5 + -1;
  }
  return iVar3;
}

