/* Ghidra address: 00424cac; FUN_00424cac */

void __cdecl FUN_00424cac(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  if (*(int *)(param_1 + 0x25) < *(int *)(param_1 + 0x19)) {
    *param_2 = *(undefined2 *)(param_1 + 0x19);
    *param_3 = *(undefined2 *)(param_1 + 0x25);
    return;
  }
  *param_2 = *(undefined2 *)(param_1 + 0x25);
  *param_3 = *(undefined2 *)(param_1 + 0x19);
  return;
}

