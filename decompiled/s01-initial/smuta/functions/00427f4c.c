/* Ghidra address: 00427f4c; FUN_00427f4c */

uint FUN_00427f4c(void)

{
  SHORT SVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_004a3000();
  iVar3 = thunk_FUN_004a318e();
  iVar5 = 0;
  while (iVar4 = thunk_FUN_004a318e(), iVar4 == 0) {
    iVar5 = iVar5 + 1;
    if (9 < iVar5) {
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x80000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x100000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 == 0) {
        iVar3 = thunk_FUN_004a318e();
        if (iVar3 != 0) {
          uVar2 = uVar2 | 4;
        }
        iVar3 = thunk_FUN_004a318e();
        if (iVar3 != 0) {
          uVar2 = uVar2 | 8;
        }
      }
      else {
        iVar3 = thunk_FUN_004a318e();
        if (iVar3 != 0) {
          uVar2 = uVar2 | 0x80000;
        }
        iVar3 = thunk_FUN_004a318e();
        if (iVar3 != 0) {
          uVar2 = uVar2 | 0x100000;
        }
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x400;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x20;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x200;
      }
      SVar1 = GetKeyState(0xd);
      if (SVar1 != 0) {
        uVar2 = uVar2 | 0x800;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x8000000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x10000000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x20000000;
      }
      iVar3 = thunk_FUN_004a318e();
      if ((iVar3 == 0) && (SVar1 = GetKeyState(0x14), SVar1 == 0)) {
        DAT_0043764c = 0;
      }
      else {
        uVar2 = uVar2 | 0x2000;
        SVar1 = GetKeyState(0x10);
        if (SVar1 != 0) {
          DAT_0043764c = 2;
        }
        SVar1 = GetKeyState(0x14);
        if (SVar1 != 0) {
          DAT_0043764c = 1;
        }
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x4000;
      }
      if (0 < DAT_0049a178) {
        iVar3 = thunk_FUN_004a318e();
        if (((uVar2 & 0x4000) != 0) && (DAT_00437654 == 1)) {
          iVar3 = -1;
        }
        iVar5 = thunk_FUN_004a318e();
        if (iVar5 != 0) {
          iVar3 = 0;
        }
        if (iVar3 < 0) {
          DAT_00437650 = 1;
        }
        else if (DAT_00437650 == 1) {
          DAT_00437654 = (uint)(DAT_00437654 == 0);
          DAT_00437650 = 0;
        }
        if (DAT_00437654 == 1) {
          uVar2 = uVar2 | 0x2000000;
        }
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        FUN_00408088();
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x80000000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x8000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x100;
      }
      return uVar2;
    }
  }
  if (iVar3 == 0) {
    return iVar5 + 0x400000;
  }
  if (iVar5 == 1) {
    DAT_0048e514 = 1;
    return uVar2;
  }
  if (iVar5 != 2) {
    return uVar2;
  }
  FUN_00420104();
  return uVar2;
}

