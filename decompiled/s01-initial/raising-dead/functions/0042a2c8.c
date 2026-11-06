/* Ghidra address: 0042a2c8; FUN_0042a2c8 */

undefined4 * __cdecl FUN_0042a2c8(undefined4 *param_1,uint *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = FUN_0042a144(param_2);
  if (param_3 < pcVar1) {
    FUN_00429f54(param_1,param_2,(uint)param_3);
  }
  else {
    FUN_00429f54(param_1,param_2,(uint)pcVar1);
    FUN_00429fc4((undefined4 *)(pcVar1 + (int)param_1),0,(int)param_3 - (int)pcVar1);
  }
  return param_1;
}

