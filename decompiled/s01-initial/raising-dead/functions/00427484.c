/* Ghidra address: 00427484; FUN_00427484 */

void __cdecl FUN_00427484(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[4];
  *(short *)(param_1 + 4) = (short)param_1[5];
  (**(code **)(*param_1 + 0x3c))();
  *(short *)(param_1 + 4) = (short)iVar1;
  return;
}

