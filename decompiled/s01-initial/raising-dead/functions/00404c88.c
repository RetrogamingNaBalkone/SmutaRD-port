/* Ghidra address: 00404c88; FUN_00404c88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00404c88(void)

{
  uint uVar1;
  
  if (DAT_004385ac == 0) {
    return 0;
  }
  if (DAT_004385ac == 100) {
    FUN_00404c74();
    DAT_004385ac = 0;
    return 0;
  }
  uVar1 = thunk_FUN_00548000();
  if ((((uVar1 != 0x200) && (uVar1 != 0x800)) && (uVar1 != 0x4000)) && ((uVar1 & 0x400000) == 0)) {
    if (0 < DAT_004385b0) {
      return 0;
    }
    FUN_00404b2c(8);
    DAT_004385b0 = DAT_004385b0 + 1;
    return 0;
  }
  FUN_00404c74();
  DAT_004385b0 = 0;
  DAT_004385ac = 100;
  FUN_0040dab4();
  _DAT_0043da0c = 1;
  if (uVar1 == 0x800) {
    return 1;
  }
  return 2;
}

