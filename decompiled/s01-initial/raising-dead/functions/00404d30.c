/* Ghidra address: 00404d30; FUN_00404d30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00404d30(undefined4 param_1)

{
  uint uVar1;
  
  DAT_004385ac = 1;
  DAT_0043faf0 = param_1;
  _DAT_0043da0c = 0;
  uVar1 = thunk_FUN_00548000();
  if ((((uVar1 == 0x200) || (uVar1 == 0x800)) || (uVar1 == 0x4000)) || ((uVar1 & 0x400000) != 0)) {
    FUN_0040dab4();
  }
  return;
}

