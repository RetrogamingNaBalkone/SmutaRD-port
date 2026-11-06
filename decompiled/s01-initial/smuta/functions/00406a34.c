/* Ghidra address: 00406a34; FUN_00406a34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406a34(void)

{
  undefined1 local_38 [12];
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 local_20 [4];
  MCIDEVICEID local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  thunk_FUN_004a61b0();
  FUN_00429054();
  local_c = 0x40000000;
  local_8 = DAT_00443c44;
  _DAT_00434e38 = mciSendCommandA(0,0x803,0x30202,(DWORD_PTR)local_20);
  if (_DAT_00434e38 == 0) {
    local_28 = 0x1b;
    _DAT_00434e38 = mciSendCommandA(local_1c,0x811,0x100,(DWORD_PTR)local_2c);
    FUN_00429054();
    _DAT_00434e38 = mciSendCommandA(local_1c,0x806,0x2000002,(DWORD_PTR)local_38);
    if (_DAT_00434e38 == 0) {
      _DAT_00443f18 = 0;
      _DAT_00434e38 = mciSendCommandA(local_1c,0x808,2,0x443f18);
      _DAT_00434e38 = mciSendCommandA(local_1c,0x804,2,0x443f18);
      FUN_004281c6();
      thunk_FUN_004a61d0();
    }
    else {
      FUN_004066e0();
    }
  }
  else {
    FUN_004066e0();
  }
  return;
}

