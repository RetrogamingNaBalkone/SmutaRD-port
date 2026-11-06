/* Ghidra address: 00422e58; FUN_00422e58 */

void __cdecl FUN_00422e58(int param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0x10) >> 0x10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x14) >> 0x10;
  return;
}

