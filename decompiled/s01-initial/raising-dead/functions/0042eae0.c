/* Ghidra address: 0042eae0; FUN_0042eae0 */

undefined4 __cdecl FUN_0042eae0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_2 + -1) == '.') &&
     (iVar2 = FUN_00434fe4(param_1,(param_2 + -1) - (int)param_1), iVar2 == 0)) {
    param_2 = param_2 + -1;
  }
  iVar2 = FUN_00434fe4(param_1,(param_2 + -1) - (int)param_1);
  if (iVar2 == 2) {
    return 0;
  }
  cVar1 = *(char *)(param_2 + -1);
  if ((cVar1 == '\0') || (cVar1 == '/')) {
LAB_0042eb3c:
    uVar3 = 1;
  }
  else {
    if (cVar1 == ':') {
      if (*(char *)(param_2 + -3) == '\0') goto LAB_0042eb3c;
    }
    else if (cVar1 == '\\') goto LAB_0042eb3c;
    uVar3 = 0;
  }
  return uVar3;
}

