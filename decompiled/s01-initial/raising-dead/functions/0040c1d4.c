/* Ghidra address: 0040c1d4; FUN_0040c1d4 */

undefined1 * __cdecl FUN_0040c1d4(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_004cfc0c;
  do {
    uVar1 = (uint)*param_1 + ((int)(uint)*param_1 >> 1);
    if (0x3f < uVar1) {
      uVar1 = 0x3f;
    }
    *puVar3 = (char)uVar1;
    puVar3[1] = param_1[1] - (char)((int)(uint)param_1[1] >> 2);
    iVar2 = iVar2 + 3;
    puVar3[2] = param_1[2] - (char)((int)(uint)param_1[2] >> 2);
    puVar3 = puVar3 + 3;
    param_1 = param_1 + 3;
  } while (iVar2 < 0x300);
  return &DAT_004cfc0c;
}

