/* Ghidra address: 00425300; FUN_00425300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00425300(int param_1)

{
  if (((*(byte *)(param_1 + 0x16) & 1) != 0) && (_DAT_004c337c = 0, *(int *)(param_1 + 0x1d) < 0)) {
    (**(code **)(*DAT_0053d704 + 0x4c))();
  }
  return;
}

