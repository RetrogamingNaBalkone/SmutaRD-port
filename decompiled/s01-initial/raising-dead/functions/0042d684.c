/* Ghidra address: 0042d684; FUN_0042d684 */

int __stdcall FUN_0042d684(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar2 = &DAT_0043b010;
  iVar5 = DAT_0043b4c0;
  while (iVar5 != 0) {
    if ((int)puVar2[2] < 0) {
      pcVar4 = (char *)(puVar2[3] + puVar2[2] + 1);
      puVar2[2] = puVar2[2] - (int)pcVar4;
      *puVar2 = (char *)puVar2[1];
      pcVar1 = FUN_0042fc00((int)*(char *)((int)puVar2 + 0x16),(char *)puVar2[1],pcVar4);
      if ((pcVar4 != pcVar1) && ((*(byte *)((int)puVar2 + 0x13) & 2) == 0)) {
        *(ushort *)((int)puVar2 + 0x12) = *(ushort *)((int)puVar2 + 0x12) | 0x10;
      }
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar2 + 6;
    iVar5 = iVar5 + -1;
  }
  return iVar3;
}

