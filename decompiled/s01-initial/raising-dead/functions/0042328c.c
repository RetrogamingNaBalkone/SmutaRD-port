/* Ghidra address: 0042328c; FUN_0042328c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_0042328c(void)

{
  if (DAT_00439f60 == 0) {
    _DAT_0053c78c = 0;
    DAT_00439f60 = mciSendCommandA(DAT_0053c770,0x808,2,0x53c78c);
    DAT_00439f60 = mciSendCommandA(DAT_0053c770,0x804,2,0x53c78c);
  }
  return;
}

