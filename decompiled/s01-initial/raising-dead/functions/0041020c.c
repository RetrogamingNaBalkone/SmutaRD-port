/* Ghidra address: 0041020c; FUN_0041020c */

void __cdecl FUN_0041020c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2d);
  (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))();
  *(int *)(param_1 + 0x2d) = param_2;
  (**(code **)(*(int *)(param_2 + 0x14) + 8))(param_2,*(int *)(param_2 + 0x14),iVar1,param_2);
  return;
}

