/* Ghidra address: 00404ae4; FUN_00404ae4 */

void __cdecl FUN_00404ae4(int param_1,short param_2)

{
  if (0 < param_2) {
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 0x202;
    *(short *)(param_1 + 0x2a) = param_2;
  }
  return;
}

