/* Ghidra address: 0042de50; FUN_0042de50 */

void __cdecl FUN_0042de50(char *param_1,char *param_2,uint *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  int iVar2;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    *param_1 = *param_2;
    param_1[1] = ':';
    param_1 = param_1 + 2;
  }
  if ((param_3 != (uint *)0x0) && ((char)*param_3 != '\0')) {
    param_1 = (char *)FUN_0042a41c(param_1,(char *)param_3);
    if ((param_1[-1] == '\\') || (param_1[-1] == '/')) {
      pcVar1 = FUN_0042a144(param_3);
      iVar2 = FUN_00434fe4((char *)param_3,(int)(pcVar1 + -1));
      if (iVar2 != 2) goto LAB_0042deaf;
    }
    *param_1 = '\\';
    param_1 = param_1 + 1;
  }
LAB_0042deaf:
  if (param_4 != (char *)0x0) {
    param_1 = (char *)FUN_0042a41c(param_1,param_4);
  }
  if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
    if (*param_5 != '.') {
      *param_1 = '.';
      param_1 = param_1 + 1;
    }
    param_1 = (char *)FUN_0042a41c(param_1,param_5);
  }
  *param_1 = '\0';
  return;
}

