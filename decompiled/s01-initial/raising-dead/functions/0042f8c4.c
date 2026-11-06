/* Ghidra address: 0042f8c4; thunk_FUN_0042fc00 */

char * __cdecl thunk_FUN_0042fc00(uint param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  DWORD DVar3;
  undefined4 auStack_8c [32];
  DWORD DStack_c;
  char *pcStack_8;
  
  if (param_1 < DAT_0043b4c0) {
    if (param_3 + 1 < (char *)0x2) {
      param_3 = (char *)0x0;
    }
    else {
      if ((*(byte *)((int)&DAT_0043b4c4 + param_1 * 4 + 1) & 8) != 0) {
        FUN_00430250(param_1,0,2);
      }
      pcVar1 = param_2;
      pcVar2 = param_3;
      if ((*(byte *)((int)&DAT_0043b4c4 + param_1 * 4 + 1) & 0x40) == 0) {
        param_3 = (char *)FUN_0043011c(param_1,param_2,(DWORD)param_3);
      }
      else {
        for (; pcVar2 != (char *)0x0; pcVar2 = pcVar2 + -(int)pcStack_8) {
          pcStack_8 = pcVar2;
          DVar3 = FUN_0042fb48(pcVar1,(int *)&pcStack_8,auStack_8c,0x80);
          DStack_c = FUN_0043011c(param_1,auStack_8c,DVar3);
          if (DVar3 != DStack_c) {
            if (DStack_c == 0xffffffff) {
              return (char *)0xffffffff;
            }
            return pcVar1 + (DStack_c - (int)param_2);
          }
          pcVar1 = pcVar1 + (int)pcStack_8;
        }
      }
    }
  }
  else {
    param_3 = (char *)FUN_0043000c(-6);
  }
  return param_3;
}

