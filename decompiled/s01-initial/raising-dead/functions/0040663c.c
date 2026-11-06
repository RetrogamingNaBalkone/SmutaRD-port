/* Ghidra address: 0040663c; FUN_0040663c */

void __cdecl FUN_0040663c(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)*(uint *)(param_1 + 10) >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((*(uint *)(param_1 + 10) & 1) != 0);
  }
  puVar1 = *(ushort **)(param_1 + 0xe);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = iVar2 + 1;
      *puVar1 = (short)((int)(*puVar1 & 0xffffffc0) >> 1) + (*puVar1 & 0x1f);
      puVar1 = puVar1 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}

