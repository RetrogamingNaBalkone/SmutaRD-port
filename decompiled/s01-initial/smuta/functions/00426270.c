/* Ghidra address: 00426270; FUN_00426270 */

void FUN_00426270(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 local_24;
  
  bVar4 = 0;
  FUN_0042b4b4(0x436e6c);
  FUN_0040777c();
  puVar2 = &DAT_0043549a;
  puVar3 = &DAT_00436b9e;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_00409a20();
  *in_FS_OFFSET = local_24;
  return;
}

