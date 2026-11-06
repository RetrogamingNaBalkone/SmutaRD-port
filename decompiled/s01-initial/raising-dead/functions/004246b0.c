/* Ghidra address: 004246b0; FUN_004246b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004246b0(int param_1)

{
  ushort *puVar1;
  
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    if (*(int *)(param_1 + 0x29) < *(int *)(param_1 + 0x1d)) {
      puVar1 = (ushort *)(*(int *)(param_1 + 0x19) + 4);
      *puVar1 = *puVar1 | 0x20;
    }
    else {
      puVar1 = (ushort *)(*(int *)(param_1 + 0x19) + 4);
      *puVar1 = *puVar1 & 0xffdf;
    }
    _DAT_004c337c = 1;
    (**(code **)(*DAT_0053d704 + 0x54))();
  }
  return;
}

