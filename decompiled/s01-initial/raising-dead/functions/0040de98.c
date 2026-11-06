/* Ghidra address: 0040de98; FUN_0040de98 */

undefined4 __cdecl FUN_0040de98(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  if (param_1[6] != 0) {
    sVar1 = (**(code **)(*param_1 + 0x1c))();
    if (sVar1 == 0) {
      (**(code **)(*(int *)param_1[6] + 0x34))();
      (**(code **)(*(int *)param_1[6] + 0x3c))();
      uVar2 = (**(code **)(*(int *)param_1[6] + 0x30))();
      return uVar2;
    }
  }
  return 0;
}

