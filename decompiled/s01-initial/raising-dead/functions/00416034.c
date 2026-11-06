/* Ghidra address: 00416034; FUN_00416034 */

byte * __cdecl FUN_00416034(char *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar1 = (byte *)FUN_0042709c(DAT_0053d630,param_1);
  iVar3 = 0;
  pbVar2 = pbVar1;
  do {
    iVar3 = iVar3 + 1;
    *pbVar2 = (byte)((int)(uint)*pbVar2 >> 2);
    pbVar2 = pbVar2 + 1;
  } while (iVar3 < 0x300);
  return pbVar1;
}

