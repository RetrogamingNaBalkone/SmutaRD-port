/* Ghidra address: 00408f5c; FUN_00408f5c */

void __stdcall FUN_00408f5c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(DAT_004c32d8 + 8 + DAT_004c32cc * 0xc);
  iVar6 = (int)DAT_004cd1bc;
  iVar3 = iVar1 << 0x10;
  iVar2 = *(int *)(DAT_004c32d8 + 8 + DAT_004c32ca * 0xc);
  iVar4 = DAT_00438e9c * 0x20 + DAT_00438e98;
  iVar8 = iVar6 + -1;
  psVar5 = (short *)(&DAT_004ccb80 + iVar8 * 2);
  for (; -1 < iVar8; iVar8 = iVar8 + -1) {
    iVar7 = iVar3 + 0x8000 >> 0x10;
    if (DAT_00438e98 < iVar7) {
      if (iVar7 < iVar4) {
        *psVar5 = 0x1f - (short)((iVar7 - DAT_00438e98) / DAT_00438e9c);
      }
      else {
        *psVar5 = 1;
      }
    }
    else {
      *psVar5 = 0x20;
    }
    iVar3 = iVar3 + ((iVar2 - iVar1) * 0x10000) / iVar6;
    psVar5 = psVar5 + -1;
  }
  return;
}

