/* Ghidra address: 00436158; FUN_00436158 */

uint __cdecl FUN_00436158(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -4) & 0xfffffffc;
}

