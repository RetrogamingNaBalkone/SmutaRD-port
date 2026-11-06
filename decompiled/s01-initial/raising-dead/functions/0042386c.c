/* Ghidra address: 0042386c; FUN_0042386c */

int __stdcall FUN_0042386c(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_00423660();
  uVar1 = thunk_FUN_00548000();
  FUN_0040dab4();
  iVar2 = FUN_00429ebc((short *)&DAT_0053c838);
  if ((((uVar1 & 0x40000000) != 0) && (iVar2 < 500)) || (uVar1 == 0)) {
    return 0;
  }
  FUN_00429ef0((short *)&DAT_0053c838);
  FUN_00429e9c((short *)&DAT_0053c838);
  if ((((uVar1 & 4) == 0) && ((uVar1 & 0x10) == 0)) && ((uVar1 & 0x400) == 0)) {
    if (((uVar1 & 8) != 0) || ((uVar1 & 0x20) != 0)) {
      DAT_0053c814 = DAT_0053c814 + 1;
      DAT_0053c814 = DAT_0053c814 % DAT_00439ff0;
    }
  }
  else if (DAT_0053c814 < 1) {
    DAT_0053c814 = DAT_00439ff0 + -1;
  }
  else {
    DAT_0053c814 = DAT_0053c814 + -1;
  }
  if (((uVar1 & 0x800) == 0) && ((uVar1 & 0x200) == 0)) {
    if ((uVar1 & 0x4000) != 0) {
      return -1;
    }
    return 0;
  }
  return DAT_0053c814 + 1;
}

