/* Ghidra address: 00432c18; FUN_00432c18 */

uint __cdecl FUN_00432c18(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  uVar1 = param_1 & 0xff;
  if (((&DAT_0043bf2e)[uVar1 * 2] & 1) != 0) {
    return uVar1 + 0x20;
  }
  return uVar1;
}

