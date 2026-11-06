/* Ghidra address: 00434fc4; FUN_00434fc4 */

ushort __cdecl FUN_00434fc4(uint param_1)

{
  if (0xff < param_1) {
    return 0;
  }
  return *(ushort *)(&DAT_0043bf2e + param_1 * 2) & 8;
}

