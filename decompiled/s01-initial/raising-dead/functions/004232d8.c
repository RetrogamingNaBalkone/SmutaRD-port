/* Ghidra address: 004232d8; FUN_004232d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_004232d8(void)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (DAT_00439f60 == 0) {
    local_c = 2;
    local_14 = 0;
    DAT_00439f60 = mciSendCommandA(DAT_0053c770,0x814,0x102,(DWORD_PTR)&local_14);
    if (DAT_00439f60 != 0) {
      FUN_00423160(DAT_00439f60,s_MCI_STATUS_00439fa1);
    }
    DAT_00439f68 = local_10;
    _DAT_0053c78c = 0;
    DAT_00439f60 = mciSendCommandA(DAT_0053c770,0x808,2,0x53c78c);
  }
  return;
}

