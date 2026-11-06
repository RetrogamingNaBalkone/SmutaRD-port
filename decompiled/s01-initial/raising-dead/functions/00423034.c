/* Ghidra address: 00423034; FUN_00423034 */

void __cdecl FUN_00423034(int param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x18) + 0x7fff >> 0x10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x1c) + 0x7fff >> 0x10;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24);
  return;
}

