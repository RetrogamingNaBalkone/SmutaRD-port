/* Ghidra address: 00432c44; FUN_00432c44 */

uint __cdecl FUN_00432c44(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  uVar1 = param_1 & 0xff;
  if (((&DAT_0043bf2e)[uVar1 * 2] & 2) != 0) {
    return uVar1 - 0x20;
  }
  return uVar1;
}

