/* Ghidra address: 004065e8; FUN_004065e8 */

void FUN_004065e8(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_00434e34 == 0) {
    psVar1 = &DAT_00443f1c;
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      *psVar1 = (short)iVar2 + 1;
      psVar1[1] = 0;
      psVar1[2] = 0;
      psVar1[3] = (short)iVar2 + 2;
      psVar1[4] = 0;
      psVar1[5] = 0;
      psVar1 = psVar1 + 6;
      iVar2 = iVar3;
    } while (iVar3 < 0xb);
    FUN_0042cfc4();
    iVar2 = FUN_0042bebc();
    if (iVar2 != 0) {
      iVar2 = 0;
      do {
        FUN_0042c024();
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xb);
      FUN_0042ba40();
    }
  }
  return;
}

