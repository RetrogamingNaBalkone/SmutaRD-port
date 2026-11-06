/* Ghidra address: 00431324; FUN_00431324 */

int * __cdecl FUN_00431324(int *param_1,undefined2 *param_2)

{
  undefined2 local_8 [2];
  
  FUN_004312f8(param_1,(int *)local_8);
  if ((*(byte *)(*param_1 + 0xc) & 0x86) == 0) {
    *param_2 = local_8[0];
  }
  return param_1;
}

