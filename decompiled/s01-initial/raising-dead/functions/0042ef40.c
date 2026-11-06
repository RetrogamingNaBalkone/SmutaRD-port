/* Ghidra address: 0042ef40; FUN_0042ef40 */

void __cdecl FUN_0042ef40(undefined1 param_1,int param_2)

{
  if (0x4f < *(int *)(param_2 + 0x50)) {
    FUN_0042ef10(param_2);
  }
  *(undefined1 *)(param_2 + *(int *)(param_2 + 0x50)) = param_1;
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
  return;
}

