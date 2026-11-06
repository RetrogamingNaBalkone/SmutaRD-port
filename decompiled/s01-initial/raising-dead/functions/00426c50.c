/* Ghidra address: 00426c50; FUN_00426c50 */

void __cdecl FUN_00426c50(uint param_1,int *param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  
  for (sVar1 = 0; (int)sVar1 < (int)(param_1 & 0xffff); sVar1 = sVar1 + 1) {
    *param_2 = *param_2 + param_3;
    param_2[1] = param_2[1] + param_4;
    param_2[2] = param_2[2] + param_5;
    param_2 = param_2 + 3;
  }
  return;
}

