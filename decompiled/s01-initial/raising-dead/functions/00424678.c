/* Ghidra address: 00424678; FUN_00424678 */

void __cdecl FUN_00424678(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  if (*(int *)(param_1 + 0x29) < *(int *)(param_1 + 0x1d)) {
    *param_2 = *(undefined2 *)(param_1 + 0x1d);
    *param_3 = *(undefined2 *)(param_1 + 0x29);
    return;
  }
  *param_2 = *(undefined2 *)(param_1 + 0x29);
  *param_3 = *(undefined2 *)(param_1 + 0x1d);
  return;
}

