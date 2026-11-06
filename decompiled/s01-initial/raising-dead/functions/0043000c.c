/* Ghidra address: 0043000c; FUN_0043000c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0043000c(int param_1)

{
  if (param_1 < 0) {
    if (-param_1 < DAT_0043b664) {
      DAT_0043c8b4 = -param_1;
      _DAT_0053e308 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (param_1 < 299) goto LAB_00430022;
  param_1 = 1;
LAB_00430022:
  _DAT_0053e308 = param_1;
  DAT_0043c8b4 = (int)(char)(&DAT_0043bb1c)[param_1];
  return 0xffffffff;
}

