/* Ghidra address: 00427140; FUN_00427140 */

int __cdecl FUN_00427140(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  iVar1 = 0;
  piVar3 = (int *)(param_1[1] + 0x10a);
  while( true ) {
    if (*param_1 <= iVar1) {
      pcVar2 = FUN_00404d88(0x46);
      FUN_0040e524(pcVar2);
      return 0;
    }
    if (param_2 == *piVar3) break;
    iVar1 = iVar1 + 1;
    piVar3 = (int *)((int)piVar3 + 0x10e);
  }
  return param_1[1] + iVar1 * 0x10e;
}

