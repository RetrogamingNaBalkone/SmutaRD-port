/* Ghidra address: 00406c38; FUN_00406c38 */

void __cdecl FUN_00406c38(int param_1,ushort param_2,short param_3,short param_4)

{
  if (param_3 == 0) {
    param_3 = 1;
  }
  if (param_3 < param_4) {
    param_4 = param_3;
  }
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) | param_2;
  *(short *)(param_1 + 6) = param_3;
  *(short *)(param_1 + 8) = param_4;
  return;
}

