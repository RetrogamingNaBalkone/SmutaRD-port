/* Ghidra address: 00414cbc; FUN_00414cbc */

void __cdecl FUN_00414cbc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (*(short *)(iVar2 + 0x12f) < 1) {
    FUN_0041020c(iVar2,*(int *)(iVar2 + 0x129));
    return;
  }
  piVar1 = (int *)(param_1 + 0x3c);
  *piVar1 = *piVar1 + -0x29;
  if (*piVar1 < 0) {
    FUN_0041020c(*(int *)(param_1 + 0x34),*(int *)(*(int *)(param_1 + 0x34) + 0x119));
  }
  return;
}

