/* Ghidra address: 0040cf70; FUN_0040cf70 */

void __cdecl FUN_0040cf70(int param_1,LPCSTR param_2,short param_3)

{
  char *pcVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  
  if (*(short *)(param_1 + 4) != 0) {
    pcVar1 = FUN_00404d88(0xd);
    FUN_0040e524(pcVar1);
  }
  if (param_3 == 2) {
    sVar3 = -31999;
    uVar4 = 0x80;
  }
  else {
    sVar3 = -0x8000;
    uVar4 = 0x100;
  }
  iVar2 = thunk_FUN_004302c8(param_2,(int)sVar3,uVar4);
  *(int *)(param_1 + 6) = iVar2;
  if (iVar2 == -1) {
    pcVar1 = FUN_00404d88(0xe);
    FUN_0040e524(pcVar1);
  }
  *(short *)(param_1 + 4) = param_3;
  return;
}

