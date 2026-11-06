/* Ghidra address: 00401358; FUN_00401358 */

void __cdecl FUN_00401358(short param_1)

{
  FUN_0040bbb4(0);
  DAT_004381da = DAT_004381da + param_1;
  if (DAT_004381da < 0x21) {
    if (DAT_004381da < 8) {
      DAT_004381da = 8;
    }
  }
  else {
    DAT_004381da = 0x20;
  }
  DAT_004381bc = DAT_004381da;
  return;
}

