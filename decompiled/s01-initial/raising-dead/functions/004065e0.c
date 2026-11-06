/* Ghidra address: 004065e0; FUN_004065e0 */

void __cdecl FUN_004065e0(short param_1,short param_2,short param_3)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = (int)param_1 * (int)param_2 * 2;
  psVar2 = FUN_004235d4(iVar1 + 0x12);
  *psVar2 = param_1;
  psVar2[1] = param_2;
  psVar2[2] = param_3;
  *(int *)(psVar2 + 5) = iVar1;
  *(short **)(psVar2 + 7) = psVar2 + 9;
  psVar2[4] = 0;
  psVar2[3] = 1;
  return;
}

