/* Ghidra address: 00408cf8; FUN_00408cf8 */

void __cdecl FUN_00408cf8(int param_1,short param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  short local_32;
  undefined2 *local_30;
  int local_28;
  int local_10;
  short local_8;
  short local_6;
  
  iVar3 = DAT_004c32d0 + -1;
  DAT_004cd1bc = 0;
  sVar2 = DAT_004c32ca;
  while( true ) {
    if (sVar2 == DAT_004c32cc) {
      return;
    }
    local_6 = param_2 + sVar2;
    if (local_6 < DAT_004c32ce) {
      if (local_6 < 0) {
        local_6 = DAT_004c32ce + -1;
      }
    }
    else {
      local_6 = 0;
    }
    local_10 = *(int *)(DAT_004c32d8 + sVar2 * 0xc);
    iVar1 = *(int *)(DAT_004c32d8 + 8 + sVar2 * 0xc);
    iVar10 = *(int *)(DAT_004c32d8 + local_6 * 0xc);
    iVar7 = *(int *)(DAT_004c32d8 + 8 + local_6 * 0xc);
    if (iVar1 <= DAT_004cd18c) break;
    if (iVar7 < DAT_004cd18c) {
      DAT_004cd184 = DAT_004cd18c;
      iVar10 = iVar10 + ((DAT_004cd18c - iVar7) * (local_10 - iVar10)) / (iVar1 - iVar7);
      iVar7 = DAT_004cd18c;
    }
    uVar4 = DAT_004cd1b4 / iVar1;
    local_8 = (short)(DAT_004cd1b4 / iVar7) - (short)uVar4;
    sVar2 = local_6;
    if (local_8 != 0) {
      if (local_8 < 0) {
        local_8 = -local_8;
      }
      local_10 = (DAT_0053c914 / iVar1) * local_10;
      iVar10 = (DAT_0053c914 / iVar7) * iVar10 - local_10;
      if (DAT_004cd1bc == 0) {
        DAT_004cd1be = DAT_0053d6ce + (short)uVar4;
      }
      local_28 = iVar1 << 0x10;
      local_30 = &DAT_004cd1f4 + DAT_004cd1bc;
      psVar9 = (short *)(DAT_004cd1bc * 10 + param_1);
      DAT_004cd1bc = DAT_004cd1bc + local_8;
      local_32 = 0;
      if (0 < local_8) {
        do {
          *local_30 = (short)((uint)local_28 >> 0x10);
          local_30 = local_30 + 1;
          local_28 = local_28 + ((iVar7 - iVar1) * 0x10000) / (int)local_8;
          iVar11 = local_10 >> 0xf;
          *psVar9 = (short)iVar11 + DAT_0053d6cc;
          sVar6 = (short)uVar4;
          if (sVar6 == 0) {
            sVar6 = 1;
          }
          iVar8 = (DAT_004cd194 * iVar11 + DAT_004cd190) / (int)sVar6 + DAT_004cd198;
          iVar5 = (DAT_004cd1a0 * iVar11 + DAT_004cd19c) / (int)sVar6 + DAT_004cd1a4;
          iVar11 = iVar3;
          if ((iVar8 <= iVar3) && (iVar11 = iVar8, iVar8 < 0)) {
            iVar11 = 0;
          }
          iVar8 = iVar3;
          if ((iVar5 <= iVar3) && (iVar8 = iVar5, iVar5 < 0)) {
            iVar8 = 0;
          }
          *(int *)(psVar9 + 1) = iVar11;
          *(int *)(psVar9 + 3) = iVar8;
          local_10 = local_10 + iVar10 / (int)local_8;
          uVar4 = (uint)(ushort)(sVar6 + DAT_004cd1c0);
          local_32 = local_32 + 1;
          psVar9 = psVar9 + 5;
        } while (local_32 < local_8);
      }
    }
  }
  return;
}

