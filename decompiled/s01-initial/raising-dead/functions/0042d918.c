/* Ghidra address: 0042d918; FUN_0042d918 */

char * __cdecl FUN_0042d918(byte *param_1,char *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  if ((*(byte *)((int)param_3 + 0x12) & 8) == 0) {
    pcVar3 = (char *)param_3[3];
    if ((pcVar3 == (char *)0x0) || (pcVar3 < param_2)) {
      if ((param_3[3] == 0) || ((param_3[2] == 0 || (iVar2 = FUN_0042d4d4(param_3), iVar2 == 0)))) {
        pcVar3 = FUN_0042fc00((int)*(char *)((int)param_3 + 0x16),(char *)param_1,param_2);
        if ((pcVar3 == (char *)0xffffffff) || (pcVar3 < param_2)) {
          param_2 = (char *)0x0;
        }
      }
      else {
        param_2 = (char *)0x0;
      }
    }
    else {
      if (-1 < (int)(param_2 + param_3[2])) {
        if (param_3[2] == 0) {
          param_3[2] = -1 - (int)pcVar3;
        }
        else {
          iVar2 = FUN_0042d4d4(param_3);
          if (iVar2 != 0) {
            return (char *)0x0;
          }
        }
      }
      FUN_00429f54((undefined4 *)*param_3,(undefined4 *)param_1,(uint)param_2);
      param_3[2] = (int)(param_2 + param_3[2]);
      *param_3 = (int)(param_2 + *param_3);
    }
  }
  else {
    for (; pcVar3 != (char *)0x0; pcVar3 = pcVar3 + -1) {
      uVar1 = FUN_0042dd38(*param_1,param_3);
      if (uVar1 == 0xffffffff) {
        return (char *)0x0;
      }
      param_1 = param_1 + 1;
    }
  }
  return param_2;
}

