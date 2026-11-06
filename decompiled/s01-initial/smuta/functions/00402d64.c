/* Ghidra address: 00402d64; FUN_00402d64 */

void FUN_00402d64(void)

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
  int in_stack_00000004;
  short in_stack_00000008;
  short local_32;
  undefined2 *local_30;
  int local_28;
  int local_10;
  short local_8;
  short local_6;
  
  iVar3 = DAT_00439cfa + -1;
  DAT_004435e8 = 0;
  sVar2 = DAT_00439cf4;
  while( true ) {
    if (sVar2 == DAT_00439cf6) {
      return;
    }
    local_6 = in_stack_00000008 + sVar2;
    if (local_6 < DAT_00439cf8) {
      if (local_6 < 0) {
        local_6 = DAT_00439cf8 + -1;
      }
    }
    else {
      local_6 = 0;
    }
    local_10 = *(int *)(DAT_00439d04 + sVar2 * 0xc);
    iVar1 = *(int *)(DAT_00439d04 + 8 + sVar2 * 0xc);
    iVar10 = *(int *)(DAT_00439d04 + local_6 * 0xc);
    iVar7 = *(int *)(DAT_00439d04 + 8 + local_6 * 0xc);
    if (iVar1 <= DAT_004435b8) break;
    if (iVar7 < DAT_004435b8) {
      DAT_004435b0 = DAT_004435b8;
      iVar10 = iVar10 + ((DAT_004435b8 - iVar7) * (local_10 - iVar10)) / (iVar1 - iVar7);
      iVar7 = DAT_004435b8;
    }
    uVar4 = DAT_004435e0 / iVar1;
    local_8 = (short)(DAT_004435e0 / iVar7) - (short)uVar4;
    sVar2 = local_6;
    if (local_8 != 0) {
      if (local_8 < 0) {
        local_8 = -local_8;
      }
      local_10 = (DAT_0044f6cc / iVar1) * local_10;
      iVar10 = (DAT_0044f6cc / iVar7) * iVar10 - local_10;
      if (DAT_004435e8 == 0) {
        DAT_004435ea = DAT_0044ebd2 + (short)uVar4;
      }
      local_28 = iVar1 << 0x10;
      local_30 = &DAT_00443fb4 + DAT_004435e8;
      psVar9 = (short *)(DAT_004435e8 * 10 + in_stack_00000004);
      DAT_004435e8 = DAT_004435e8 + local_8;
      local_32 = 0;
      if (0 < local_8) {
        do {
          *local_30 = (short)((uint)local_28 >> 0x10);
          local_30 = local_30 + 1;
          local_28 = local_28 + ((iVar7 - iVar1) * 0x10000) / (int)local_8;
          iVar11 = local_10 >> 0xf;
          *psVar9 = (short)iVar11 + DAT_0044ebd0;
          sVar6 = (short)uVar4;
          if (sVar6 == 0) {
            sVar6 = 1;
          }
          iVar8 = (DAT_004435c0 * iVar11 + DAT_004435bc) / (int)sVar6 + DAT_004435c4;
          iVar5 = (DAT_004435cc * iVar11 + DAT_004435c8) / (int)sVar6 + DAT_004435d0;
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
          uVar4 = (uint)(ushort)(sVar6 + DAT_004435ec);
          local_32 = local_32 + 1;
          psVar9 = psVar9 + 5;
        } while (local_32 < local_8);
      }
    }
  }
  return;
}

