/* Ghidra address: 0042de84; FUN_0042de84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042de84(void)

{
  uint uVar1;
  bool bVar2;
  UINT UVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  _STARTUPINFOA local_50;
  
  UVar3 = SetHandleCount(DAT_00437f24);
  if (UVar3 < DAT_00437f24) {
    DAT_00437f24 = UVar3;
  }
  PTR_LAB_0043856c = FUN_0042dde8;
  bVar2 = false;
  GetStartupInfoA(&local_50);
  if (local_50.cbReserved2 != 0) {
    uVar7 = *(uint *)local_50.lpReserved2;
    puVar8 = (uint *)((int)local_50.lpReserved2 + 4);
    if (uVar7 * 5 + 4 == (uint)local_50.cbReserved2) {
      bVar2 = true;
      iVar6 = 0;
      puVar9 = &DAT_00437f28;
      if (0 < (int)uVar7) {
        do {
          uVar1 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          uVar4 = 0;
          if ((uVar1 & 0x20) != 0) {
            uVar4 = 0x800;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar4 = uVar4 | 0x2000;
          }
          if ((uVar1 & 0x80) == 0) {
            uVar4 = uVar4 | 0x8000;
          }
          else {
            uVar4 = uVar4 | 0x4000;
          }
          iVar6 = iVar6 + 1;
          *puVar9 = *puVar9 & 3 | uVar4;
          puVar9 = puVar9 + 1;
        } while (iVar6 < (int)uVar7);
      }
      puVar5 = &DAT_00437f28 + uVar7;
      for (; uVar7 < DAT_00437f24; uVar7 = uVar7 + 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      FUN_00429008();
    }
  }
  if (!bVar2) {
    _DAT_0049ab1c = GetStdHandle(0xfffffff6);
    DAT_0049ab20 = GetStdHandle(0xfffffff5);
    _DAT_0049ab24 = GetStdHandle(0xfffffff4);
    iVar6 = 0;
    puVar8 = &DAT_00437f28;
    do {
      bVar2 = FUN_0042e1c4();
      if (CONCAT31(extraout_var,bVar2) == 0) {
        *puVar8 = *puVar8 & 0xffffdfff;
      }
      else {
        *puVar8 = *puVar8 | 0x2000;
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar6 < 3);
  }
  return;
}

