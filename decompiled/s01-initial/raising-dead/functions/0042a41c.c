/* Ghidra address: 0042a41c; FUN_0042a41c */

void __cdecl FUN_0042a41c(char *param_1,char *param_2)

{
  char cVar1;
  
  while (((cVar1 = *param_2, *param_1 = cVar1, cVar1 != '\0' &&
          (cVar1 = param_2[1], param_1[1] = cVar1, cVar1 != '\0')) &&
         (cVar1 = param_2[2], param_1[2] = cVar1, cVar1 != '\0'))) {
    cVar1 = param_2[3];
    param_2 = param_2 + 4;
    param_1[3] = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    param_1 = param_1 + 4;
  }
  return;
}

