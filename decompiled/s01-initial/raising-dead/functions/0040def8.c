/* Ghidra address: 0040def8; FUN_0040def8 */

void __cdecl FUN_0040def8(int param_1)

{
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x48))();
  }
  return;
}

