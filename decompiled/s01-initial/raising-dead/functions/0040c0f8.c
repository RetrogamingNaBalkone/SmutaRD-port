/* Ghidra address: 0040c0f8; FUN_0040c0f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl FUN_0040c0f8(int param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_004cf90c;
  do {
    if ((float)(int)((uint)*param_2 * param_1) * _DAT_0040c1cc <= _DAT_0040c1d0) {
      uVar1 = FUN_00433130();
      *puVar2 = (char)uVar1;
      if ((float)(int)((uint)param_2[1] * param_1) * _DAT_0040c1cc <= _DAT_0040c1d0) {
        uVar1 = FUN_00433130();
        puVar2[1] = (char)uVar1;
        if ((float)(int)((uint)param_2[2] * param_1) * _DAT_0040c1cc <= _DAT_0040c1d0) {
          uVar1 = FUN_00433130();
          puVar2[2] = (char)uVar1;
        }
      }
    }
    iVar3 = iVar3 + 3;
    puVar2 = puVar2 + 3;
    param_2 = param_2 + 3;
  } while (iVar3 < 0x300);
  return &DAT_004cf90c;
}

