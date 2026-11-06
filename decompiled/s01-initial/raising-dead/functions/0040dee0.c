/* Ghidra address: 0040dee0; FUN_0040dee0 */

void __cdecl FUN_0040dee0(int param_1)

{
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x48))();
  }
  return;
}

