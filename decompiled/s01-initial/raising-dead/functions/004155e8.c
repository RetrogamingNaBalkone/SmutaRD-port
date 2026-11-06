/* Ghidra address: 004155e8; FUN_004155e8 */

void __cdecl FUN_004155e8(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x137);
  *(short *)(param_1 + 0x137) = *(short *)(param_1 + 0x137) + -1;
  if (0 < sVar1) {
    (**(code **)(*(int *)(param_1 + 0x14) + 0x24))();
    *(int *)(param_1 + 0x139) = *(short *)(param_1 + 0x135) * 0x18;
  }
  return;
}

