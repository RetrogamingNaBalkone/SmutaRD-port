/* Ghidra address: 00404a70; FUN_00404a70 */

void __cdecl FUN_00404a70(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x18) = param_2;
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 6;
  return;
}

