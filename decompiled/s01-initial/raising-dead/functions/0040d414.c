/* Ghidra address: 0040d414; FUN_0040d414 */

void __cdecl FUN_0040d414(short *param_1,byte *param_2)

{
  param_1[2] = (ushort)param_2[2] << 10;
  param_1[1] = (ushort)param_2[1] << 10;
  *param_1 = (ushort)*param_2 << 10;
  return;
}

