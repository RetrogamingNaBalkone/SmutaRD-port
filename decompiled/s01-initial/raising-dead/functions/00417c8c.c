/* Ghidra address: 00417c8c; FUN_00417c8c */

void __cdecl FUN_00417c8c(short *param_1,int *param_2,short param_3,int param_4)

{
  short sVar1;
  int local_c;
  int local_8;
  
  sVar1 = (short)param_2[3];
  if (param_3 != 0) {
    sVar1 = sVar1 + 0x5a;
  }
  if (0x167 < sVar1) {
    sVar1 = sVar1 + -0x168;
  }
  if (sVar1 < 0) {
    sVar1 = sVar1 + 0x168;
  }
  local_8 = *param_2;
  local_c = param_2[2];
  FUN_004177ec(param_1,&local_8,&local_c,((&DAT_0053ca1c)[sVar1] * param_2[6] >> 0xf) + local_8,
               local_c - ((&DAT_0053cfc0)[sVar1] * param_2[6] >> 0xf),(short *)(param_2 + 1),param_4
               ,param_2[8]);
  *param_2 = local_8;
  param_2[2] = local_c;
  return;
}

