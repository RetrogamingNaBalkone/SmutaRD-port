/* Ghidra address: 00413e4c; FUN_00413e4c */

void __cdecl FUN_00413e4c(int param_1)

{
  if ((*(short *)(param_1 + 0xb0) != 3) && (*(short *)(param_1 + 0xb0) != 0)) {
    *(undefined2 *)(param_1 + 0xb0) = 3;
    *(undefined2 *)(param_1 + 0xb2) = 0;
    *(undefined2 *)(param_1 + 0x71) = 0;
  }
  return;
}

