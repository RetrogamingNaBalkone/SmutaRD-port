/* Ghidra address: 004268dc; FUN_004268dc */

void __cdecl FUN_004268dc(short param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  for (; param_1 != 0; param_1 = param_1 + -1) {
    *param_2 = (*param_2 * param_3) / param_4;
    piVar1 = param_2 + 2;
    param_2[1] = (param_2[1] * param_3) / param_4;
    param_2 = param_2 + 3;
    *piVar1 = (*piVar1 * param_3) / param_4;
  }
  return;
}

