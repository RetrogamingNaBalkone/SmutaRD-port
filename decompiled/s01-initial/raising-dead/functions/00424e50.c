/* Ghidra address: 00424e50; FUN_00424e50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00424e50(int param_1)

{
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    _DAT_004c337c = 0;
    if (0 < *(int *)(param_1 + 0x4d)) {
      (**(code **)(*DAT_0053d704 + 0x4c))();
    }
    if (*(int *)(param_1 + 0x1d) < 0) {
      (**(code **)(*DAT_0053d704 + 0x4c))();
    }
  }
  return;
}

