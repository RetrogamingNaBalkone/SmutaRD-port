/* Ghidra address: 0040fbc8; FUN_0040fbc8 */

void __cdecl FUN_0040fbc8(int param_1)

{
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  }
  return;
}

