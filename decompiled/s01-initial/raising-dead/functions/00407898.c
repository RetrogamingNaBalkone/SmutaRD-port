/* Ghidra address: 00407898; FUN_00407898 */

undefined4 __cdecl FUN_00407898(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x12);
  }
  return *(undefined4 *)(param_1 + 4);
}

