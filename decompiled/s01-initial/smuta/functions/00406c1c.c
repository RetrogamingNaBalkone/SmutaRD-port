/* Ghidra address: 00406c1c; FUN_00406c1c */

void FUN_00406c1c(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined3 uVar11;
  undefined1 *puVar10;
  short sVar12;
  uint uVar13;
  uint uVar14;
  undefined2 uVar15;
  short sVar16;
  undefined2 *puVar17;
  int iVar18;
  short local_40;
  int local_34;
  int local_30;
  undefined2 local_28;
  undefined4 *local_18;
  ushort *local_14;
  
  local_40 = DAT_004435ea;
  local_14 = &DAT_00443fb4;
  local_18 = &DAT_004429ac;
  for (sVar16 = 0; iVar3 = DAT_00439d00, sVar16 < DAT_004435e8; sVar16 = sVar16 + 1) {
    puVar10 = (undefined1 *)*local_18;
    iVar5 = sVar16 * 10;
    iVar18 = sVar16 * 10;
    sVar6 = (&DAT_00439daa)[sVar16 * 5];
    sVar12 = (&DAT_0043bbaa)[sVar16 * 5];
    if (((DAT_00434098 <= sVar12) && (sVar6 <= DAT_0043409a)) && (sVar6 < sVar12)) {
      iVar4 = (int)(0x10000 / (longlong)((int)sVar12 - (int)sVar6));
      local_34 = *(int *)((int)&DAT_00439dac + iVar18);
      iVar8 = (*(int *)((int)&DAT_0043bbac + iVar5) - local_34) * iVar4;
      local_30 = *(int *)((int)&DAT_00439db0 + iVar18);
      iVar4 = (*(int *)((int)&DAT_0043bbb0 + iVar5) - local_30) * iVar4;
      local_34 = local_34 * 0x10000;
      local_30 = local_30 * 0x10000;
      if (DAT_0043409a < sVar12) {
        sVar12 = DAT_0043409a;
      }
      if (sVar6 < DAT_00434098) {
        local_34 = local_34 + ((int)DAT_00434098 - (int)sVar6) * iVar8;
        local_30 = local_30 + ((int)DAT_00434098 - (int)sVar6) * iVar4;
        sVar6 = DAT_00434098;
      }
      iVar5 = (int)sVar6;
      puVar17 = (undefined2 *)((&DAT_004390f0)[local_40] + iVar5);
      DAT_004449b4 = (uint)*local_14;
      puVar9 = (undefined4 *)((&DAT_004449b8)[(int)local_40 >> 1] + (iVar5 >> 1) * 2);
      local_30._0_2_ = (undefined2)(local_30 >> 6);
      uVar14 = CONCAT22((short)(local_34 >> 6),(undefined2)local_30);
      local_28 = (undefined2)(iVar4 >> 6);
      iVar18 = CONCAT22((short)(iVar8 >> 6),local_28);
      uVar7 = sVar12 - iVar5;
      do {
        uVar1 = uVar14 >> 10;
        uVar2 = uVar14 >> 0x1a;
        uVar13 = uVar14 + iVar18;
        uVar11 = (undefined3)((uint)puVar10 >> 8);
        uVar14 = uVar13 + iVar18;
        puVar10 = (undefined1 *)
                  CONCAT31(uVar11,*(undefined1 *)
                                   (((uVar13 >> 10 & 0x3f) << 6 | uVar13 >> 0x1a) + iVar3));
        *puVar17 = CONCAT11(*puVar10,*(undefined1 *)
                                      CONCAT31(uVar11,*(undefined1 *)
                                                       (((uVar1 & 0x3f) << 6 | uVar2) + iVar3)));
        puVar17 = puVar17 + 1;
        uVar7 = uVar7 - 2;
      } while (-1 < (int)uVar7);
      uVar15 = (undefined2)DAT_004449b4;
      uVar7 = (uint)(sVar12 - iVar5) >> 2;
      do {
        *puVar9 = CONCAT22(uVar15,uVar15);
        puVar9 = puVar9 + 1;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
    local_40 = local_40 + DAT_004435ec;
  }
  return;
}

