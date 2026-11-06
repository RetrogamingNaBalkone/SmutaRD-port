/* Ghidra address: 004231bc; FUN_004231bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_004231bc(void)

{
  uint uVar1;
  short asStack_10 [6];
  
  if (DAT_00439f60 == 0) {
    FUN_00429fc4((undefined4 *)&DAT_0053c76c,0,0x14);
    FUN_00429e84(asStack_10);
    FUN_00429e9c(asStack_10);
    _DAT_0053c774 = 0x204;
    do {
      DAT_00439f60 = mciSendCommandA(0,0x803,0x3102,0x53c76c);
      if (DAT_00439f60 == 0) break;
      uVar1 = FUN_00429ebc(asStack_10);
    } while (uVar1 < 0x7d1);
    if (DAT_00439f60 == 0) {
      _DAT_0053c784 = 10;
      DAT_00439f60 = mciSendCommandA(DAT_0053c770,0x80d,0x400,0x53c780);
      if (DAT_00439f60 != 0) {
        FUN_00423160(DAT_00439f60,s_MCI_SET_00439f99);
      }
    }
    else {
      FUN_00423160(DAT_00439f60,s_MCI_OPEN_00439f90);
    }
  }
  return 0;
}

