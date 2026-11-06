/* Ghidra address: 004270dc; FUN_004270dc */

int __cdecl FUN_004270dc(int *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  do {
    if (*param_1 <= iVar4) {
      pcVar3 = FUN_00404d88(0x45);
      FUN_0040e524(pcVar3);
      return 0;
    }
    pcVar2 = (char *)(iVar4 * 0x10e + param_1[1]);
    pcVar3 = param_2;
    do {
      if (*pcVar2 != *pcVar3) goto LAB_00427120;
      bVar5 = true;
      if (*pcVar2 == '\0') break;
      pcVar1 = pcVar2 + 1;
      if (*pcVar1 != pcVar3[1]) goto LAB_00427120;
      pcVar2 = pcVar2 + 2;
      pcVar3 = pcVar3 + 2;
      bVar5 = *pcVar1 == '\0';
    } while (!bVar5);
    if (bVar5) {
      return iVar4;
    }
LAB_00427120:
    iVar4 = iVar4 + 1;
  } while( true );
}

