/* Ghidra address: 00427430; FUN_00427430 */

void __cdecl FUN_00427430(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 0x32) = param_2;
  *(undefined4 *)(param_1 + 0x36) = param_3;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(int *)(param_1 + 0x42) = *(int *)(param_1 + 0x32) + -1;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x36) + -1;
  *(undefined1 *)(param_1 + 0x34c) = param_4;
  return;
}

