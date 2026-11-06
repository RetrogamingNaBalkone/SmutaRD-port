/* Ghidra address: 00406e38; FUN_00406e38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406e38(void)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined3 uVar17;
  bool bVar18;
  int local_34;
  
  iVar7 = DAT_00439da0;
  puVar12 = (ushort *)((&DAT_004449b8)[(int)DAT_00439d8c >> 1] + ((int)DAT_00439d8e >> 1) * 2);
  if ((((DAT_00439cfc == 0x40) && (DAT_00439da6 == 0)) && (DAT_00439da4 == 0)) &&
     (DAT_00439da8 == 0)) {
    iVar9 = (DAT_00439d94 >> 0x10) + DAT_00439d00;
    puVar8 = (undefined1 *)((&DAT_004390f0)[DAT_00439d8c] + (int)DAT_00439d8e);
    uVar15 = (int)DAT_00439d92 - (int)DAT_00439d8c;
    uVar14 = uVar15;
    puVar16 = DAT_004390d0;
    uVar13 = DAT_00439d98;
    DAT_00445db8 = iVar9;
    do {
      uVar3 = uVar13 >> 10;
      uVar13 = uVar13 + iVar7;
      puVar16 = (undefined1 *)
                CONCAT31((int3)((uint)puVar16 >> 8),*(undefined1 *)((uVar3 & 0xfc0) + iVar9));
      *puVar8 = *puVar16;
      iVar4 = DAT_004449b4;
      iVar10 = DAT_00443fac;
      puVar8 = puVar8 + _DAT_00443fa0;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
    uVar15 = uVar15 >> 1;
    do {
      *puVar12 = (ushort)iVar4;
      puVar12 = (ushort *)((int)puVar12 + iVar10);
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  else {
    iVar7 = (int)DAT_00439cfa;
    iVar10 = (DAT_00439da0 >> 0x10) * iVar7;
    pcVar11 = (char *)(((int)DAT_00439d98 >> 0x10) * iVar7 + DAT_00439d00 + (DAT_00439d94 >> 0x10));
    uVar13 = DAT_00439da0 * 0x10000;
    puVar8 = (undefined1 *)((&DAT_004390f0)[DAT_00439d8c] + (int)DAT_00439d8e);
    iVar9 = DAT_00450aa0 + 0xa008;
    uVar14 = (int)DAT_00439d92 - (int)DAT_00439d8c;
    local_34 = uVar14 + 2;
    _DAT_00445dbc = 0;
    uVar15 = DAT_00439d98 << 0x10;
    uVar6 = (ushort)DAT_004449b4;
    puVar16 = DAT_004390d0;
    if (DAT_00439da8 == 0) {
      if (DAT_00439da4 == 0) {
        if (DAT_00439da6 == 0) {
          iVar9 = uVar14 + 1;
          do {
            cVar1 = *pcVar11;
            uVar17 = (undefined3)((uint)puVar16 >> 8);
            pcVar11 = pcVar11 + iVar10;
            uVar2 = *(undefined1 *)CONCAT31(uVar17,cVar1);
            puVar16 = (undefined1 *)CONCAT31(uVar17,uVar2);
            bVar18 = CARRY4(uVar15,uVar13);
            uVar15 = uVar15 + uVar13;
            if (bVar18) {
              pcVar11 = pcVar11 + iVar7;
            }
            *puVar8 = uVar2;
            iVar5 = DAT_004449b4;
            iVar4 = DAT_00443fac;
            puVar8 = puVar8 + _DAT_00443fa0;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          uVar14 = uVar14 >> 1;
          do {
            *puVar12 = (ushort)iVar5;
            puVar12 = (ushort *)((int)puVar12 + iVar4);
            uVar14 = uVar14 - 1;
          } while (-1 < (int)uVar14);
        }
        else {
          while (local_34 != 1) {
            uVar17 = (undefined3)((uint)puVar16 >> 8);
            puVar16 = (undefined1 *)CONCAT31(uVar17,*pcVar11);
            if ((*pcVar11 != '\0') && ((short)uVar6 <= (short)*puVar12)) {
              uVar2 = *puVar16;
              puVar16 = (undefined1 *)CONCAT31(uVar17,uVar2);
              *puVar12 = uVar6;
              *puVar8 = uVar2;
            }
            puVar8 = puVar8 + _DAT_00443fa0;
            pcVar11 = pcVar11 + iVar10;
            uVar14 = uVar15 + uVar13;
            if (CARRY4(uVar15,uVar13)) {
              pcVar11 = pcVar11 + iVar7;
            }
            local_34 = local_34 + -2;
            if (local_34 == 0) {
              return;
            }
            uVar17 = (undefined3)((uint)puVar16 >> 8);
            puVar16 = (undefined1 *)CONCAT31(uVar17,*pcVar11);
            if ((*pcVar11 != '\0') && ((short)uVar6 <= (short)*puVar12)) {
              uVar2 = *puVar16;
              puVar16 = (undefined1 *)CONCAT31(uVar17,uVar2);
              *puVar12 = uVar6;
              *puVar8 = uVar2;
            }
            puVar12 = (ushort *)((int)puVar12 + DAT_00443fac);
            puVar8 = puVar8 + _DAT_00443fa0;
            pcVar11 = pcVar11 + iVar10;
            uVar15 = uVar14 + uVar13;
            if (CARRY4(uVar14,uVar13)) {
              pcVar11 = pcVar11 + iVar7;
            }
          }
        }
      }
      else {
        while (local_34 = local_34 + -1, local_34 != 0) {
          if ((DAT_004449b4 <= (int)(uint)*puVar12) && (*pcVar11 != '\0')) {
            *puVar8 = *(undefined1 *)((uint)CONCAT11(*pcVar11,*puVar8) + iVar9);
            *puVar12 = (ushort)DAT_004449b4;
          }
          if ((_DAT_00445dbc & 1) != 0) {
            puVar12 = (ushort *)((int)puVar12 + DAT_00443fac);
          }
          _DAT_00445dbc = _DAT_00445dbc ^ 1;
          puVar8 = puVar8 + _DAT_00443fa0;
          pcVar11 = pcVar11 + iVar10;
          bVar18 = CARRY4(uVar15,uVar13);
          uVar15 = uVar15 + uVar13;
          if (bVar18) {
            pcVar11 = pcVar11 + iVar7;
          }
        }
      }
    }
    else {
      while (local_34 != 1) {
        uVar17 = (undefined3)((uint)puVar16 >> 8);
        puVar16 = (undefined1 *)CONCAT31(uVar17,*pcVar11);
        if (*pcVar11 != '\0') {
          uVar2 = *puVar16;
          puVar16 = (undefined1 *)CONCAT31(uVar17,uVar2);
          *puVar12 = uVar6;
          *puVar8 = uVar2;
        }
        puVar8 = puVar8 + _DAT_00443fa0;
        pcVar11 = pcVar11 + iVar10;
        uVar14 = uVar15 + uVar13;
        if (CARRY4(uVar15,uVar13)) {
          pcVar11 = pcVar11 + iVar7;
        }
        local_34 = local_34 + -2;
        if (local_34 == 0) {
          return;
        }
        uVar17 = (undefined3)((uint)puVar16 >> 8);
        puVar16 = (undefined1 *)CONCAT31(uVar17,*pcVar11);
        if (*pcVar11 != '\0') {
          uVar2 = *puVar16;
          puVar16 = (undefined1 *)CONCAT31(uVar17,uVar2);
          *puVar12 = uVar6;
          *puVar8 = uVar2;
        }
        puVar12 = (ushort *)((int)puVar12 + DAT_00443fac);
        puVar8 = puVar8 + _DAT_00443fa0;
        pcVar11 = pcVar11 + iVar10;
        uVar15 = uVar14 + uVar13;
        if (CARRY4(uVar14,uVar13)) {
          pcVar11 = pcVar11 + iVar7;
        }
      }
    }
  }
  return;
}

