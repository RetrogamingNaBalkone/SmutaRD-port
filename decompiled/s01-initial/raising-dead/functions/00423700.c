/* Ghidra address: 00423700; FUN_00423700 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00423700(char *param_1,undefined4 param_2)

{
  DAT_0053c830 = FUN_0041606c(param_1);
  DAT_0053c834 = FUN_0041606c(s_CURSOR_SP_0043a007);
  *(undefined2 *)((int)DAT_0053c830 + 4) = 8;
  *(undefined2 *)((int)DAT_0053c834 + 4) = 8;
  _DAT_0053c828 = FUN_00433130();
  _DAT_0053c82c = FUN_00433130();
  _DAT_0053c820 = FUN_00433130();
  _DAT_0053c824 = FUN_00433130();
  DAT_0053c814 = 0;
  DAT_00439ff0 = param_2;
  DAT_00439ff4 = FUN_00433130();
  DAT_00439ff8 = FUN_00433130();
  DAT_0053c818 = FUN_00433130();
  DAT_0053c81c = FUN_00433130();
  FUN_00429e9c((short *)&DAT_0053c838);
  FUN_00423660();
  FUN_0040dab4();
  return;
}

