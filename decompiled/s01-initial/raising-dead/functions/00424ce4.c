/* Ghidra address: 00424ce4; FUN_00424ce4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00424ce4(int param_1)

{
  ushort *puVar1;
  
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    _DAT_004c337c = 0;
    puVar1 = (ushort *)(*(int *)(param_1 + 0x49) + 4);
    *puVar1 = *puVar1 | 8;
    (**(code **)(*DAT_0053d704 + 0x54))();
  }
  return;
}

