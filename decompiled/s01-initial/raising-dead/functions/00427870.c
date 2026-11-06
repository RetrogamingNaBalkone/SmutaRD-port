/* Ghidra address: 00427870; FUN_00427870 */

void __cdecl FUN_00427870(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  for (; param_3 <= param_4; param_3 = param_3 + 1) {
    (**(code **)(*param_1 + 4))();
  }
  return;
}

