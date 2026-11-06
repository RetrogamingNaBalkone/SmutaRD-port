/* Ghidra address: 00404ac8; FUN_00404ac8 */

void __cdecl FUN_00404ac8(int param_1,short param_2)

{
  if (param_2 != 0) {
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 0x12;
    *(short *)(param_1 + 0x1e) = param_2;
  }
  return;
}

