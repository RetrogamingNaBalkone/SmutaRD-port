/* Ghidra address: 00428b90; FUN_00428b90 */

void __cdecl FUN_00428b90(undefined4 param_1,ushort param_2,ushort param_3)

{
  uint *puVar1;
  
  puVar1 = FUN_004350c0((uint)param_2 * (uint)param_3 + 4,1);
  *(ushort *)puVar1 = param_2;
  *(ushort *)((int)puVar1 + 2) = param_3;
  return;
}

