/* Ghidra address: 004105d0; FUN_004105d0 */

void __cdecl FUN_004105d0(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  char local_104 [256];
  
  FUN_00410270(param_1,param_2);
  piVar5 = (int *)(param_1 + 0x91);
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  piVar2 = FUN_00431288(piVar2,(undefined1 *)(param_1 + 0x90));
  FUN_0043109c(piVar2,piVar5);
  *(undefined1 *)(param_1 + 0x95) = 0;
  local_104[0] = '\0';
  FUN_00431404((int *)(param_2 + 0x3e),local_104,0xff,'\n');
  pcVar4 = (char *)(param_1 + 0x95);
  for (pcVar3 = local_104; cVar1 = *pcVar3, cVar1 != '\0'; pcVar3 = pcVar3 + 1) {
    if (cVar1 != ' ') {
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    }
  }
  *pcVar4 = '\0';
  return;
}

