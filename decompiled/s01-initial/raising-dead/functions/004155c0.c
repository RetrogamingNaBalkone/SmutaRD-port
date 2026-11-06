/* Ghidra address: 004155c0; FUN_004155c0 */

void __cdecl FUN_004155c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x139);
  *(int *)(param_1 + 0x139) = *(int *)(param_1 + 0x139) + -1;
  if (iVar1 < 1) {
    *(undefined2 *)(param_1 + 0x137) = *(undefined2 *)(param_1 + 0x133);
  }
  return;
}

