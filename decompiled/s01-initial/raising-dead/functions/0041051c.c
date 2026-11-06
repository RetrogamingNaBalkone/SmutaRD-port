/* Ghidra address: 0041051c; FUN_0041051c */

undefined4 __cdecl FUN_0041051c(int param_1)

{
  if (*(short *)(param_1 + 0x90) == 1000) {
    (**(code **)(**(int **)(param_1 + 0x6d) + 0x18))();
    (**(code **)(**(int **)(param_1 + 0x6d) + 0xc))();
  }
  return 0;
}

