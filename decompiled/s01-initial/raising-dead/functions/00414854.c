/* Ghidra address: 00414854; FUN_00414854 */

void __cdecl FUN_00414854(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004151ec(*(int *)(param_1 + 0x34));
  if ((iVar1 == 0) && (iVar1 = FUN_004151b4(*(int *)(param_1 + 0x34)), iVar1 == 0)) {
    return;
  }
  FUN_0041020c(*(int *)(param_1 + 0x34),*(int *)(*(int *)(param_1 + 0x34) + 0x119));
  return;
}

