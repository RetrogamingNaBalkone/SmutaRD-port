/* Ghidra address: 0040f25c; FUN_0040f25c */

undefined4 __cdecl FUN_0040f25c(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  while (*(int *)(**(int **)(param_1 + 8) + 0xc) == 0) {
    piVar1 = FUN_00431354((int *)(*(int *)(param_1 + 8) + 0x3e),param_2,param_3,10);
    iVar4 = *piVar1;
    if ((*(byte *)(iVar4 + 0xc) & 0x86) != 0) {
      iVar4 = 0;
    }
    if ((iVar4 == 0) || ((*param_2 != '#' && (*param_2 != '\0')))) break;
  }
  if (*(int *)(**(int **)(param_1 + 8) + 0xc) == 0) {
    pcVar3 = param_2;
    if (*param_2 == '[') {
      while( true ) {
        pcVar3 = pcVar3 + 1;
        if (*pcVar3 == ']') break;
        *param_2 = *pcVar3;
        param_2 = param_2 + 1;
      }
      *param_2 = '\0';
      uVar2 = CONCAT22((short)((uint)pcVar3 >> 0x10),1);
    }
    else {
      uVar2 = CONCAT22((short)((uint)*(int **)(param_1 + 8) >> 0x10),2);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

