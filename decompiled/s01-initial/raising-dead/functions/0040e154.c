/* Ghidra address: 0040e154; FUN_0040e154 */

undefined4 __cdecl FUN_0040e154(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 10) == (int *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 10) + 0x14))();
  return uVar1;
}

