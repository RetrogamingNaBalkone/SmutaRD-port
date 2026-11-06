/* Ghidra address: 0040f670; FUN_0040f670 */

void __cdecl FUN_0040f670(int *param_1,int param_2)

{
  short sVar1;
  
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x10))();
  for (sVar1 = 0; sVar1 < *(short *)(param_2 + 4); sVar1 = sVar1 + 1) {
    FUN_00406678(param_1);
  }
  return;
}

