/* Ghidra address: 0040d47c; FUN_0040d47c */

int FUN_0040d47c(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  short *in_stack_00000004;
  char *in_stack_00000008;
  
  iVar4 = 0;
  do {
    if (*in_stack_00000004 <= iVar4) {
      FUN_00427b9f();
      return 0;
    }
    pcVar2 = (char *)(iVar4 * 0x1e + *(int *)(in_stack_00000004 + 1));
    pcVar3 = in_stack_00000008;
    do {
      if (*pcVar2 != *pcVar3) goto LAB_0040d4bd;
      bVar5 = true;
      if (*pcVar2 == '\0') break;
      pcVar1 = pcVar2 + 1;
      if (*pcVar1 != pcVar3[1]) goto LAB_0040d4bd;
      pcVar2 = pcVar2 + 2;
      pcVar3 = pcVar3 + 2;
      bVar5 = *pcVar1 == '\0';
    } while (!bVar5);
    if (bVar5) {
      return iVar4;
    }
LAB_0040d4bd:
    iVar4 = iVar4 + 1;
  } while( true );
}

