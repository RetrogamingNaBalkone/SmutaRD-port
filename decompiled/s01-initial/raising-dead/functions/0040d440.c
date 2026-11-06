/* Ghidra address: 0040d440; FUN_0040d440 */

void __cdecl FUN_0040d440(short *param_1,byte *param_2)

{
  param_1[2] = (ushort)param_2[2] << 8;
  param_1[1] = (ushort)param_2[1] << 8;
  *param_1 = (ushort)*param_2 << 8;
  return;
}

