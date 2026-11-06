/* Ghidra address: 00423358; FUN_00423358 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00423358(void)

{
  if (DAT_00439f60 == 0) {
    _DAT_0053c764 = DAT_00439f68;
    _DAT_0053c768 =
         (uint)CONCAT12(*(undefined1 *)(&DAT_0053c79a + DAT_00439f5c * 6),
                        CONCAT11(*(undefined1 *)(&DAT_0053c798 + DAT_00439f5c * 6),
                                 *(undefined1 *)(&DAT_0053c796 + DAT_00439f5c * 6)));
    _DAT_0053c760 = DAT_004cff1c;
    DAT_00439f60 = mciSendCommandA(DAT_0053c770,0x806,0xd,0x53c760);
    if (DAT_00439f60 != 0) {
      FUN_00423160(DAT_00439f60,s_MCI_RESUME_00439fac);
    }
  }
  return;
}

