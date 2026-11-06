/* Ghidra address: 00413e80; FUN_00413e80 */

undefined4 __cdecl FUN_00413e80(int param_1)

{
  if (*(short *)(param_1 + 0xb0) == 1) {
    *(undefined2 *)(param_1 + 0xb0) = 4;
    *(undefined2 *)(param_1 + 0x71) = 0;
    *(undefined2 *)(param_1 + 0xb2) = 0;
    return 1;
  }
  return 0;
}

