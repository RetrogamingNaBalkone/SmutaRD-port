/* Ghidra address: 0040fc08; FUN_0040fc08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040fc08(void)

{
  SHORT SVar1;
  SHORT SVar2;
  SHORT SVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  short sVar7;
  short sVar8;
  bool bVar9;
  
  DAT_0044f954 = 0;
  if (DAT_004346b4 < 0x101) {
    sVar5 = DAT_004346b4;
    if (DAT_004346b4 < -0x100) {
      sVar5 = -0x100;
    }
  }
  else {
    sVar5 = 0x100;
  }
  if (DAT_004346b8 < 0x101) {
    sVar8 = DAT_004346b8;
    if (DAT_004346b8 < -0x100) {
      sVar8 = -0x100;
    }
  }
  else {
    sVar8 = 0x100;
  }
  SVar1 = GetAsyncKeyState(1);
  SVar2 = GetAsyncKeyState(2);
  SVar3 = GetAsyncKeyState(0x12);
  if ((SVar3 == 0) && ((DAT_0043764c != 0 || (SVar2 == 0)))) {
    if (sVar5 < 1) {
      if (sVar5 < 0) {
        DAT_0044f954 = DAT_0044f954 | 8;
      }
    }
    else {
      DAT_0044f954 = DAT_0044f954 | 4;
    }
    if (sVar5 < 1) {
      sVar5 = -sVar5;
    }
    bVar9 = sVar5 != 0;
    sVar5 = 0;
    if (bVar9) {
      uVar6 = FUN_0042fc2c();
      sVar5 = (short)uVar6;
    }
    if (0x12 < sVar5) {
      sVar5 = 0x12;
    }
    if (sVar8 < 1) {
      if (sVar8 < 0) {
        DAT_0044f954 = DAT_0044f954 | 0x20;
      }
    }
    else {
      DAT_0044f954 = DAT_0044f954 | 0x10;
    }
    DAT_00435808 = sVar5;
    uVar6 = FUN_0042fc2c();
    sVar8 = (short)uVar6;
    _DAT_0043580a = sVar8;
    if (0x1d6 < sVar8) {
      sVar8 = 0x1d6;
      _DAT_0043580a = sVar8;
    }
  }
  else {
    sVar7 = sVar5;
    if (sVar5 < 1) {
      sVar7 = -sVar5;
    }
    sVar4 = sVar8;
    if (sVar8 < 1) {
      sVar4 = -sVar8;
    }
    if (((sVar7 < sVar4) && (DAT_0043764c == 0)) && (SVar2 != 0)) {
      if (0 < sVar8) {
        FUN_00424d90();
      }
      if (sVar8 < 0) {
        FUN_00424d20();
      }
      sVar8 = 0;
      sVar5 = 0;
    }
    else {
      SVar3 = GetAsyncKeyState(0x12);
      if (SVar3 != 0) {
        if (0 < sVar5) {
          DAT_0044f954 = DAT_0044f954 | 0x80000;
        }
        if (sVar5 < 0) {
          DAT_0044f954 = DAT_0044f954 | 0x100000;
        }
        uVar6 = FUN_0042fc2c();
        sVar5 = (short)uVar6;
        _DAT_0043580a = sVar5;
        if (0x10e < sVar5) {
          sVar5 = 0x10e;
          _DAT_0043580a = sVar5;
        }
      }
    }
  }
  if (SVar1 != 0) {
    DAT_0044f954 = DAT_0044f954 | 0x200;
  }
  if ((SVar2 != 0) && (DAT_0043764c != 0)) {
    DAT_0044f954 = DAT_0044f954 | 0x10;
    _DAT_0043580a = 0x96;
  }
  if (((sVar5 != 0) || (sVar8 != 0)) || (SVar2 != 0)) {
    DAT_0044f954 = DAT_0044f954 | 0x40000000;
  }
  if (DAT_00434278 == 1) {
    DAT_00434278 = 0;
    DAT_0044f954 = DAT_0044f954 | 0x20000000;
  }
  return DAT_0044f954;
}

