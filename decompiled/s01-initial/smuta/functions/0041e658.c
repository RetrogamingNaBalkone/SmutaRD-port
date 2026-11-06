/* Ghidra address: 0041e658; FUN_0041e658 */

void FUN_0041e658(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5)

{
  LPVOID pvVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_5 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_5 + 0x3e;
  }
  FUN_0042ec88(param_4 + 0x74,iVar2,param_3,(int *)iVar2,(undefined2 *)(param_4 + 0x74));
  if (*(short *)(param_4 + 0x74) < 0) {
    *(short *)(param_4 + 0x74) = -*(short *)(param_4 + 0x74);
    *(undefined1 *)(param_4 + 0x8e) = 0;
  }
  FUN_0042e838();
  pvVar1 = FUN_0041d904();
  *(LPVOID *)(param_4 + 0x76) = pvVar1;
  FUN_0042e838();
  pvVar1 = FUN_0041d904();
  *(LPVOID *)(param_4 + 0x7a) = pvVar1;
  FUN_0042e838();
  pvVar1 = FUN_0041d95a();
  *(LPVOID *)(param_4 + 0x86) = pvVar1;
  FUN_0042e838();
  puVar3 = &DAT_00499d58;
  pvVar1 = FUN_0041d95a();
  *(LPVOID *)(param_4 + 0x8a) = pvVar1;
  (**(code **)(*(int *)(param_4 + 0x14) + 0x34))(pvVar1,*(int *)(param_4 + 0x14),puVar3,param_4,0);
  (**(code **)(*(int *)(param_4 + 0x14) + 0x38))();
  return;
}

