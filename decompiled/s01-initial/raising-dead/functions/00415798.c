/* Ghidra address: 00415798; FUN_00415798 */

void __cdecl FUN_00415798(int *param_1)

{
  short *psVar1;
  short sVar2;
  
  psVar1 = *(short **)(*(int *)((int)param_1 + 0x2d) + 0x1c);
  if (psVar1 != (short *)0x0) {
    sVar2 = FUN_004100cc((int)param_1,psVar1);
    FUN_0040f8c4((short *)(*(int *)((int)param_1 + 0x2d) + 0x32),sVar2);
  }
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x2d) + 0x14) + 4))();
  if (*(int *)((int)param_1 + 0x16b) != 0) {
    FUN_0040e374(param_1);
  }
  return;
}

