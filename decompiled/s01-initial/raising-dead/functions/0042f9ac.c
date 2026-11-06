/* Ghidra address: 0042f9ac; FUN_0042f9ac */

char * __cdecl FUN_0042f9ac(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar1 = param_1 + param_2;
  pcVar4 = param_1;
  pcVar5 = param_1;
  while( true ) {
    pcVar2 = FUN_00429f34(pcVar4,'\r',(int)pcVar1 - (int)pcVar4);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = pcVar1;
    }
    uVar3 = (int)pcVar2 - (int)pcVar4;
    if (pcVar5 != pcVar4) {
      FUN_00429f54((undefined4 *)pcVar5,(undefined4 *)pcVar4,uVar3);
    }
    if (pcVar1 + -1 <= pcVar2) break;
    pcVar4 = pcVar2 + 1;
    pcVar5 = pcVar5 + uVar3;
  }
  return pcVar5 + (uVar3 - (int)param_1);
}

