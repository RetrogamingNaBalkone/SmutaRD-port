/* Ghidra address: 00427808; FUN_00427808 */

void __cdecl FUN_00427808(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  
  for (sVar1 = 0; sVar1 < param_4; sVar1 = sVar1 + 1) {
    (**(code **)(*param_1 + 4))();
  }
  return;
}

