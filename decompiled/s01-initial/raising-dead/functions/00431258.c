/* Ghidra address: 00431258; FUN_00431258 */

int * __cdecl FUN_00431258(int *param_1,undefined2 *param_2)

{
  undefined2 local_8 [2];
  
  FUN_0043109c(param_1,(int *)local_8);
  if ((*(byte *)(*param_1 + 0xc) & 0x86) == 0) {
    *param_2 = local_8[0];
  }
  return param_1;
}

