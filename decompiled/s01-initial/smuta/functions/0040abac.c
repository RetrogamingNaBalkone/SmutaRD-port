/* Ghidra address: 0040abac; FUN_0040abac */

void FUN_0040abac(void)

{
  byte *pbVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined2 *puVar5;
  short sVar6;
  short *psVar7;
  short sVar8;
  short local_e;
  short local_c;
  short local_6;
  
  FUN_0040a8ac();
  local_6 = ((short)DAT_0044ebdc - (short)DAT_0044ebd4) + 1;
  sVar6 = (short)DAT_0044ebd4;
  if ((short)DAT_0044ebd4 < 0) {
    sVar6 = 0;
  }
  sVar4 = (short)DAT_0044ebdc;
  if (0x513 < (short)DAT_0044ebdc) {
    sVar4 = 0x513;
  }
  puVar5 = (undefined2 *)(&DAT_0044ec0c + sVar6 * 2);
  for (sVar8 = sVar6; sVar3 = DAT_0044ebea, sVar8 <= sVar4; sVar8 = sVar8 + 1) {
    *puVar5 = 1;
    puVar5 = puVar5 + 1;
  }
  do {
    do {
      while( true ) {
        while( true ) {
          sVar3 = sVar3 + -1;
          if (sVar3 < 0) {
            return;
          }
          if (0 < local_6) break;
          iVar2 = *(int *)(DAT_0044ebec + sVar3 * 4);
          pbVar1 = (byte *)(iVar2 + 0x16);
          *pbVar1 = *pbVar1 & 0xfe;
          *(undefined2 *)(iVar2 + 0x17) = 0;
        }
        (**(code **)(**(int **)(DAT_0044ebec + sVar3 * 4) + 4))();
        if (local_c < sVar6) {
          local_c = sVar6;
        }
        if (sVar4 < local_e) {
          local_e = sVar4;
        }
        if ((*(byte *)(*(int *)(DAT_0044ebec + sVar3 * 4) + 0x16) & 2) == 0) break;
        iVar2 = *(int *)(DAT_0044ebec + sVar3 * 4);
        pbVar1 = (byte *)(iVar2 + 0x16);
        *pbVar1 = *pbVar1 & 0xfe;
        *(undefined2 *)(iVar2 + 0x17) = 0;
        psVar7 = (short *)(&DAT_0044ec0c + local_c * 2);
        for (sVar8 = local_c; sVar8 <= local_e; sVar8 = sVar8 + 1) {
          if (*psVar7 == 1) {
            pbVar1 = (byte *)(*(int *)(DAT_0044ebec + sVar3 * 4) + 0x16);
            *pbVar1 = *pbVar1 | 1;
            local_6 = local_6 + -1;
            *psVar7 = 0;
          }
          psVar7 = psVar7 + 1;
        }
      }
      iVar2 = *(int *)(DAT_0044ebec + sVar3 * 4);
      pbVar1 = (byte *)(iVar2 + 0x16);
      *pbVar1 = *pbVar1 & 0xfe;
      *(undefined2 *)(iVar2 + 0x17) = 0;
      psVar7 = (short *)(&DAT_0044ec0c + local_c * 2);
      sVar8 = local_c;
    } while (local_e < local_c);
    do {
      if (*psVar7 == 1) {
        pbVar1 = (byte *)(*(int *)(DAT_0044ebec + sVar3 * 4) + 0x16);
        *pbVar1 = *pbVar1 | 1;
        break;
      }
      sVar8 = sVar8 + 1;
      psVar7 = psVar7 + 1;
    } while (sVar8 <= local_e);
  } while( true );
}

