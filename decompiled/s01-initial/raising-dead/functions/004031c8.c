/* Ghidra address: 004031c8; FUN_004031c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_004031c8(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  FUN_0040cae4(param_1,param_3);
  *param_1 = &PTR_FUN_00438588;
  FUN_00401bc4(param_2,param_4);
  FUN_0040ca78();
  FUN_0040ca2c(param_1[1],&DAT_0043d608);
  FUN_0040dab4();
  if ((1 < _DAT_0043f464) && (param_4 == 0)) {
    FUN_00402dd4((undefined4 *)&DAT_0043f464,(undefined4 *)&DAT_0043f468);
  }
  FUN_004231bc();
  FUN_004234a4(_DAT_0043f464);
  if (_DAT_0043f464 == DAT_00438324) {
    DAT_004381b8 = 1;
  }
  return param_1;
}

