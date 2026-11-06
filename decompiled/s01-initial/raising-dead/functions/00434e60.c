/* Ghidra address: 00434e60; FUN_00434e60 */

undefined4 __cdecl FUN_00434e60(uint param_1,int param_2)

{
  if (param_2 == 1) {
    if (((&DAT_0053e30d)[param_1 & 0xff] & 8) != 0) {
      return 2;
    }
  }
  else if (((param_2 == 0) || (param_2 == 2)) || (param_2 == -1)) {
    if (((&DAT_0053e30d)[param_1 & 0xff] & 4) != 0) {
      return 1;
    }
    if (((*(ushort *)(&DAT_0043bf2e + (param_1 & 0xff) * 2) & 0x1d4) != 0) ||
       (((&DAT_0053e30d)[param_1 & 0xff] & 3) != 0)) {
      return 0;
    }
  }
  return 0xffffffff;
}

