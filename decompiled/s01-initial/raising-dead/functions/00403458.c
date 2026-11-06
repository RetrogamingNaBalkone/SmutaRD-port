/* Ghidra address: 00403458; FUN_00403458 */

undefined4 * __cdecl FUN_00403458(undefined4 *param_1,undefined4 param_2,int param_3)

{
  FUN_0040cae4(param_1,param_2);
  *param_1 = &PTR_FUN_00438578;
  FUN_00429e84((undefined2 *)(param_1 + 4));
  FUN_0040148c();
  FUN_0040ca2c(param_1[1],&DAT_0043d608);
  param_1[3] = param_3;
  if (param_3 != 0) {
    FUN_00423700(s_MENU_SP_0043840b,6);
  }
  FUN_0040dab4();
  FUN_004231bc();
  FUN_004234a4(0);
  FUN_00429e9c((short *)(param_1 + 4));
  return param_1;
}

