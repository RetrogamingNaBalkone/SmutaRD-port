/* Ghidra address: 00426494; FUN_00426494 */

void __cdecl FUN_00426494(byte *param_1,undefined1 *param_2,short param_3)

{
  byte *pbVar1;
  short sVar2;
  undefined1 *puVar3;
  
  puVar3 = &DAT_0053c91c;
  sVar2 = 0;
  do {
    *puVar3 = (char)(((longlong)(int)sVar2 * (longlong)((int)param_3 << 8) & 0xffffffffU) / 0x6400);
    sVar2 = sVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar2 < 0x100);
  sVar2 = 0;
  do {
    sVar2 = sVar2 + 1;
    *param_2 = (&DAT_0053c91c)[*param_1];
    pbVar1 = param_1 + 2;
    param_2[1] = (&DAT_0053c91c)[param_1[1]];
    param_1 = param_1 + 3;
    param_2[2] = (&DAT_0053c91c)[*pbVar1];
    param_2 = param_2 + 3;
  } while (sVar2 < 0x100);
  return;
}

