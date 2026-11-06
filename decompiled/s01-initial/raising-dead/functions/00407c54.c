/* Ghidra address: 00407c54; FUN_00407c54 */

void __cdecl FUN_00407c54(undefined4 param_1,int param_2,int param_3,int param_4,byte *param_5)

{
  ushort *puVar1;
  short sVar2;
  
  puVar1 = (ushort *)((&DAT_004c2690)[param_3] + param_2 * 2);
  for (sVar2 = 0; sVar2 < param_4; sVar2 = sVar2 + 1) {
    if (*param_5 != 0xff) {
      *puVar1 = (ushort)*param_5;
    }
    param_5 = param_5 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}

