/* Ghidra address: 0042df3c; FUN_0042df3c */

char * __cdecl FUN_0042df3c(char *param_1,ushort *param_2)

{
  int iVar1;
  
  do {
    *param_2 = *param_2 + 1;
    if (*param_2 == 0) {
      *param_2 = 1;
    }
    param_1 = FUN_0042deec(param_1,(char *)0x0,*param_2);
    iVar1 = thunk_FUN_00430180(param_1,0);
  } while (iVar1 == 0);
  return param_1;
}

