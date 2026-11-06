/* Ghidra address: 0040f644; FUN_0040f644 */

void __cdecl FUN_0040f644(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(short *)(param_1 + 4); iVar1 = iVar1 + 1) {
    FUN_0040663c(*(int *)(*(int *)(param_1 + 8) + 6 + iVar1 * 10));
  }
  return;
}

