/* Ghidra address: 0040fb88; FUN_0040fb88 */

void __cdecl FUN_0040fb88(int param_1)

{
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
    }
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
  }
  return;
}

