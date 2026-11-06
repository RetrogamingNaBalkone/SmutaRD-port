/* Ghidra address: 00407c0c; FUN_00407c0c */

void __cdecl FUN_00407c0c(int param_1,int param_2,int param_3,int param_4,byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  
  pbVar1 = (byte *)((&DAT_004c2690)[param_3] + param_2);
  for (sVar3 = 0; sVar3 < param_4; sVar3 = sVar3 + 1) {
    bVar2 = *pbVar1;
    if ((ushort)bVar2 == *(ushort *)(param_1 + 0x14)) {
      bVar2 = 0xff;
    }
    *param_5 = bVar2;
    param_5 = param_5 + 1;
    pbVar1 = pbVar1 + 1;
  }
  return;
}

