/* Ghidra address: 004312f8; FUN_004312f8 */

int * __cdecl FUN_004312f8(int *param_1,int *param_2)

{
  int local_8;
  
  FUN_0043109c(param_1,&local_8);
  if ((*(byte *)(*param_1 + 0xc) & 0x86) == 0) {
    *param_2 = local_8;
  }
  return param_1;
}

