/* Ghidra address: 0040fa54; FUN_0040fa54 */

bool __cdecl FUN_0040fa54(int param_1)

{
  return (int)*(short *)(param_1 + 0x30) == *(short *)(*(int *)(param_1 + 0x1c) + 2) + -1;
}

