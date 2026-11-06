/* Ghidra address: 00424140; FUN_00424140 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __stdcall FUN_00424140(void)

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
  
  DAT_0053c90c = 0;
  if (DAT_004397cc < 0x101) {
    sVar5 = DAT_004397cc;
    if (DAT_004397cc < -0x100) {
      sVar5 = -0x100;
    }
  }
  else {
    sVar5 = 0x100;
  }
  if (DAT_004397d0 < 0x101) {
    sVar8 = DAT_004397d0;
    if (DAT_004397d0 < -0x100) {
      sVar8 = -0x100;
    }
  }
  else {
    sVar8 = 0x100;
  }
  SVar1 = GetAsyncKeyState(1);
  SVar2 = GetAsyncKeyState(2);
  SVar3 = GetAsyncKeyState(0x12);
  if ((SVar3 == 0) && ((DAT_004398ec != 0 || (SVar2 == 0)))) {
    if (sVar5 < 1) {
      if (sVar5 < 0) {
        DAT_0053c90c = DAT_0053c90c | 8;
      }
    }
    else {
      DAT_0053c90c = DAT_0053c90c | 4;
    }
    if (sVar5 < 1) {
      sVar5 = -sVar5;
    }
    bVar9 = sVar5 != 0;
    sVar5 = 0;
    if (bVar9) {
      uVar6 = FUN_00433130();
      sVar5 = (short)uVar6;
    }
    if (0x12 < sVar5) {
      sVar5 = 0x12;
    }
    if (sVar8 < 1) {
      if (sVar8 < 0) {
        DAT_0053c90c = DAT_0053c90c | 0x20;
      }
    }
    else {
      DAT_0053c90c = DAT_0053c90c | 0x10;
    }
    DAT_0043a024 = sVar5;
    uVar6 = FUN_00433130();
    _DAT_0043a026 = (short)uVar6;
    sVar8 = _DAT_0043a026;
    if (0x1d6 < _DAT_0043a026) {
      _DAT_0043a026 = 0x1d6;
      sVar8 = _DAT_0043a026;
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
    if (((sVar7 < sVar4) && (DAT_004398ec == 0)) && (SVar2 != 0)) {
      if (0 < sVar8) {
        FUN_00401734(sVar8);
      }
      if (sVar8 < 0) {
        FUN_004016c4(-sVar8);
      }
      sVar5 = 0;
      sVar8 = 0;
    }
    else {
      SVar3 = GetAsyncKeyState(0x12);
      if (SVar3 != 0) {
        if (0 < sVar5) {
          DAT_0053c90c = DAT_0053c90c | 0x80000;
        }
        if (sVar5 < 0) {
          DAT_0053c90c = DAT_0053c90c | 0x100000;
        }
        uVar6 = FUN_00433130();
        sVar5 = (short)uVar6;
        _DAT_0043a026 = sVar5;
        if (0x10e < sVar5) {
          sVar5 = 0x10e;
          _DAT_0043a026 = sVar5;
        }
      }
    }
  }
  if (SVar1 != 0) {
    DAT_0053c90c = DAT_0053c90c | 0x200;
  }
  if ((SVar2 != 0) && (DAT_004398ec != 0)) {
    DAT_0053c90c = DAT_0053c90c | 0x10;
    _DAT_0043a026 = 0x96;
  }
  if (((sVar5 != 0) || (sVar8 != 0)) || (SVar2 != 0)) {
    DAT_0053c90c = DAT_0053c90c | 0x40000000;
  }
  if (DAT_00439390 == 1) {
    DAT_00439390 = 0;
    DAT_0053c90c = DAT_0053c90c | 0x20000000;
  }
  return DAT_0053c90c;
}

