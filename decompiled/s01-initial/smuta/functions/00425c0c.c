/* Ghidra address: 00425c0c; FUN_00425c0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00425c0c(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (DAT_004351f0 == 0) {
    if (DAT_00436b9a == 0) {
      uVar2 = FUN_00427f4c();
      FUN_00409a20();
      FUN_00409a20();
      if (DAT_0049a34c == 0) {
        DAT_0049a350 = FUN_00409a78();
        DAT_0049a34c = DAT_0049a350 - DAT_0049a348;
        while (DAT_0049a34c == 0) {
          DAT_0049a350 = FUN_00409a78();
          DAT_0049a34c = DAT_0049a350 - DAT_0049a348;
        }
        DAT_0049a348 = DAT_0049a350;
      }
      DAT_0049a34c = DAT_0049a34c - 1;
      if (2 < DAT_0049a34c) {
        DAT_0049a34c = 2;
      }
      FUN_00409a38();
      FUN_00409a38();
      FUN_00427da7();
      iVar3 = FUN_00409a58();
      DAT_0049a328 = iVar3 + DAT_0049a328 >> 1;
      FUN_00409a8c();
      puVar4 = (undefined4 *)(DAT_0049a388 + 0x30);
      puVar5 = &DAT_0049a354;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      FUN_00409a38();
      FUN_0041b890();
      FUN_00409a8c();
      iVar3 = FUN_00409a58();
      DAT_0049a31c = iVar3 + DAT_0049a31c >> 1;
      if (DAT_00436c34 == 5) {
        FUN_0041d5a0();
      }
      else {
        if (DAT_0049a34c == 0) {
          FUN_00409a38();
        }
        FUN_0041d5a0();
        if (DAT_0049a34c == 0) {
          FUN_00409a8c();
          DAT_0049a320 = FUN_00409a58();
        }
      }
      if ((DAT_0049a34c == 0) || (DAT_00436c34 == 5)) {
        FUN_00408088();
        FUN_00408534();
        (**(code **)(*DAT_0044f640 + 0x38))();
      }
      _DAT_00437640 = 0;
      FUN_00409a8c();
      iVar3 = FUN_00409a58();
      _DAT_0049a318 = iVar3 + 1;
      DAT_00436c14 = ((uint)((int)(1000 / (ulonglong)_DAT_0049a318) + DAT_00436c14) >> 1) + 1;
      if (DAT_00436c14 < 4) {
        DAT_00436c14 = 4;
      }
      if (uVar2 == 0) {
        uVar1 = 1;
      }
      else if ((uVar2 & 0x4000) == 0) {
        uVar1 = 1;
      }
      else {
        (**(code **)(*DAT_0044f640 + 0x34))();
        FUN_0040b074();
        FUN_00425b40();
        uVar1 = 10;
      }
    }
    else {
      uVar1 = 10;
    }
  }
  else {
    FUN_00408aa0();
    uVar1 = 1;
  }
  return uVar1;
}

