/* Ghidra address: 00404a24; FUN_00404a24 */

void __cdecl FUN_00404a24(int param_1,short param_2)

{
  *(uint *)(param_1 + 0x9d) = (uint)(param_2 < *(short *)(param_1 + 0x16));
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 6;
  *(short *)(param_1 + 0x16) = param_2;
  return;
}

