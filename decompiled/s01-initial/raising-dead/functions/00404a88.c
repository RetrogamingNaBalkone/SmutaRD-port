/* Ghidra address: 00404a88; FUN_00404a88 */

void __cdecl FUN_00404a88(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x1c) = param_2;
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 10;
  return;
}

