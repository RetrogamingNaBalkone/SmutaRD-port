/* Ghidra address: 0040c344; FUN_0040c344 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_0040c344(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined4 *)(param_1 + 0x54) = param_4;
    DAT_004cff0c = param_4;
    *(int *)(param_1 + 0x58) = param_5;
    DAT_004cff10 = param_5;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x54) * param_5;
    _DAT_004393a4 = *(undefined4 *)(param_1 + 0x54);
    _DAT_004393a8 = *(undefined4 *)(param_1 + 0x58);
    FUN_0040b640();
    _DAT_004cff14 = FUN_0040b7f8();
    *(undefined4 *)(param_1 + 0x92) = _DAT_004cff14;
  }
  return;
}

