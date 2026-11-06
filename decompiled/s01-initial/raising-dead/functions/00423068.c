/* Ghidra address: 00423068; FUN_00423068 */

void __stdcall FUN_00423068(void)

{
  short *psVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  CHAR local_58 [80];
  
  if (DAT_00439f60 == 0) {
    psVar1 = &DAT_0053c790;
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 1;
      *psVar1 = (short)iVar4 + 1;
      psVar1[1] = 0;
      psVar1[2] = 0;
      psVar1[3] = (short)iVar4 + 2;
      psVar1[4] = 0;
      psVar1[5] = 0;
      psVar1 = psVar1 + 6;
      iVar4 = iVar3;
    } while (iVar3 < 0xb);
    FUN_0042ed78(local_58,(byte *)s__s_cd_dat_00439f6c);
    pbVar2 = (byte *)FUN_0042d8cc(local_58,&DAT_00439f76);
    if (pbVar2 != (byte *)0x0) {
      iVar4 = 0;
      do {
        FUN_0042da34(pbVar2,(byte *)s__d_d_d_d_d_d_00439f79);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xb);
      FUN_0042d444((int *)pbVar2);
    }
  }
  return;
}

