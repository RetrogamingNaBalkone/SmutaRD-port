/* Ghidra address: 0042ed54; FUN_0042ed54 */

int * FUN_0042ed54(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                  undefined2 *param_5)

{
  undefined4 local_8;
  
  local_8 = param_3;
  FUN_0042ed28(&local_8,param_2,param_3,param_4,&local_8);
  if ((*(byte *)(*param_4 + 0xc) & 0x86) == 0) {
    *param_5 = (undefined2)local_8;
  }
  return param_4;
}

