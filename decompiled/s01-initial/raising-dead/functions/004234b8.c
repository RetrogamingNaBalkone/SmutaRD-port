/* Ghidra address: 004234b8; FUN_004234b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004234b8(undefined4 param_1)

{
  undefined4 local_38 [3];
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_20;
  MCIDEVICEID local_1c;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004232d8();
  FUN_00429fc4(&local_20,0,0x1c);
  local_14 = param_1;
  local_c = 0x40000000;
  local_8 = DAT_004cff1c;
  _DAT_00439f64 = mciSendCommandA(0,0x803,0x30202,(DWORD_PTR)&local_20);
  if (_DAT_00439f64 == 0) {
    local_28 = 0x1b;
    _DAT_00439f64 = mciSendCommandA(local_1c,0x811,0x100,(DWORD_PTR)local_2c);
    FUN_00429fc4(local_38,0,0xc);
    _DAT_00439f64 = mciSendCommandA(local_1c,0x806,0x2000002,(DWORD_PTR)local_38);
    if (_DAT_00439f64 == 0) {
      _DAT_0053c78c = 0;
      _DAT_00439f64 = mciSendCommandA(local_1c,0x808,2,0x53c78c);
      _DAT_00439f64 = mciSendCommandA(local_1c,0x804,2,0x53c78c);
      FUN_0040dab4();
      FUN_00423358();
    }
    else {
      FUN_00423160(_DAT_00439f64,s_AVI_MCI_PLAY_00439fcd);
    }
  }
  else {
    FUN_00423160(_DAT_00439f64,s_AVI_MCI_OPEN_00439fc0);
  }
  return;
}

