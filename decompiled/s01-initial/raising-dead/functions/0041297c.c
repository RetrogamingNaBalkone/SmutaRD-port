/* Ghidra address: 0041297c; FUN_0041297c */

void __cdecl FUN_0041297c(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  
  *(int *)(param_2 + 8) = (int)*(short *)(param_1 + 0x7f);
  *(int *)(param_2 + 0xc) = (int)*(short *)(param_1 + 0x83);
  iVar4 = 0;
  puVar1 = (undefined4 *)(param_2 + 0x10);
  psVar3 = (short *)(param_1 + 0xf1);
  piVar2 = (int *)(param_1 + 0xc9);
  do {
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      *puVar1 = 1;
      puVar1[10] = (int)*psVar3;
      puVar1[0x14] = (int)psVar3[10];
    }
    iVar4 = iVar4 + 1;
    psVar3 = psVar3 + 1;
    puVar1 = puVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 10);
  *(int *)(param_2 + 0x88) = (int)*(short *)(param_1 + 0x119);
  return;
}

