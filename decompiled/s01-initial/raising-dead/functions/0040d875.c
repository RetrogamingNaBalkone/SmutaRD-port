/* Ghidra address: 0040d875; FUN_0040d875 */

uint __stdcall FUN_0040d875(void)

{
  SHORT SVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint unaff_ESI;
  
  uVar2 = FUN_00548014();
  uVar2 = unaff_ESI | uVar2;
  iVar3 = thunk_FUN_00548150(0x53);
  iVar5 = 0;
  while (iVar4 = thunk_FUN_00548150(iVar5 + 0x30), iVar4 == 0) {
    iVar5 = iVar5 + 1;
    if (9 < iVar5) {
      iVar3 = thunk_FUN_00548150(0xbc);
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x80000;
      }
      iVar3 = thunk_FUN_00548150(0xbe);
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x100000;
      }
      iVar3 = thunk_FUN_00548150(0x12);
      if (iVar3 == 0) {
        iVar3 = thunk_FUN_00548150(0x25);
        if (iVar3 != 0) {
          uVar2 = uVar2 | 4;
        }
        iVar3 = thunk_FUN_00548150(0x27);
        if (iVar3 != 0) {
          uVar2 = uVar2 | 8;
        }
      }
      else {
        iVar3 = thunk_FUN_00548150(0x25);
        if (iVar3 != 0) {
          uVar2 = uVar2 | 0x80000;
        }
        iVar3 = thunk_FUN_00548150(0x27);
        if (iVar3 != 0) {
          uVar2 = uVar2 | 0x100000;
        }
      }
      iVar3 = thunk_FUN_00548150(0x26);
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x400;
      }
      iVar3 = thunk_FUN_00548150(0x28);
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x20;
      }
      iVar3 = thunk_FUN_00548150(0x11);
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x200;
      }
      SVar1 = GetKeyState(0xd);
      if (SVar1 != 0) {
        uVar2 = uVar2 | 0x800;
      }
      iVar3 = thunk_FUN_00548150(0x21);
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x8000000;
      }
      iVar3 = thunk_FUN_00548150(0x22);
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x10000000;
      }
      iVar3 = thunk_FUN_00548150(0x24);
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x20000000;
      }
      iVar3 = thunk_FUN_00548150(0x10);
      if ((iVar3 == 0) && (SVar1 = GetKeyState(0x14), SVar1 == 0)) {
        DAT_004398ec = 0;
      }
      else {
        uVar2 = uVar2 | 0x2000;
        SVar1 = GetKeyState(0x10);
        if (SVar1 != 0) {
          DAT_004398ec = 2;
        }
        SVar1 = GetKeyState(0x14);
        if (SVar1 != 0) {
          DAT_004398ec = 1;
        }
      }
      SVar1 = GetKeyState(0x1b);
      if (SVar1 != 0) {
        uVar2 = uVar2 | 0x4000;
      }
      iVar3 = FUN_0040d830(0x6b);
      if ((iVar3 != 0) || (iVar3 = FUN_0040d830(0xbb), iVar3 != 0)) {
        uVar2 = uVar2 | 0x20000;
      }
      iVar3 = FUN_0040d830(0x6d);
      if ((iVar3 != 0) || (iVar3 = FUN_0040d830(0xbd), iVar3 != 0)) {
        uVar2 = uVar2 | 0x10000;
      }
      iVar3 = thunk_FUN_00548150(0x44);
      if (iVar3 != 0) {
        FUN_00404248();
      }
      iVar3 = thunk_FUN_00548150(0x52);
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x80000000;
      }
      iVar3 = thunk_FUN_00548150(0x70);
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x8000;
      }
      iVar3 = thunk_FUN_00548150(0x50);
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
    DAT_004f4e94 = 1;
    return uVar2;
  }
  if (iVar5 != 2) {
    return uVar2;
  }
  FUN_00411dbc();
  return uVar2;
}

