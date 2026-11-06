/* Ghidra address: 00424a08; FUN_00424a08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00424a08(int param_1)

{
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    _DAT_004c337c = 0;
    (**(code **)(*DAT_0053d704 + 0x54))();
  }
  return;
}

