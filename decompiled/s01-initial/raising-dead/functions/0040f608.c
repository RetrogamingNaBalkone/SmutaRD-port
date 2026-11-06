/* Ghidra address: 0040f608; FUN_0040f608 */

void __cdecl FUN_0040f608(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(short *)(param_1 + 4); iVar1 = iVar1 + 1) {
    FUN_0040662c(*(LPCVOID *)(*(int *)(param_1 + 8) + 6 + iVar1 * 10));
  }
  FUN_004350ec(*(int *)(param_1 + 8));
  FUN_004350ec(param_1);
  return;
}

