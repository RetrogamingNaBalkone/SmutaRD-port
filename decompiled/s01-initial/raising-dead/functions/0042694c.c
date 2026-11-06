/* Ghidra address: 0042694c; FUN_0042694c */

void __cdecl FUN_0042694c(short param_1,int *param_2,short param_3,short param_4,short param_5)

{
  int *piVar1;
  int iVar2;
  
  if (0x167 < param_3) {
    param_3 = param_3 + -0x168;
  }
  if (param_3 < 0) {
    param_3 = param_3 + 0x168;
  }
  if (0x167 < param_4) {
    param_4 = param_4 + -0x168;
  }
  if (param_4 < 0) {
    param_4 = param_4 + 0x168;
  }
  if (0x167 < param_5) {
    param_5 = param_5 + -0x168;
  }
  if (param_5 < 0) {
    param_5 = param_5 + 0x168;
  }
  for (; param_1 != 0; param_1 = param_1 + -1) {
    piVar1 = param_2 + 2;
    iVar2 = param_2[1];
    param_2[1] = (&DAT_0053cfc0)[param_3] * iVar2 - *piVar1 * (&DAT_0053ca1c)[param_3] >> 0xf;
    *piVar1 = *piVar1 * (&DAT_0053cfc0)[param_3] + (&DAT_0053ca1c)[param_3] * iVar2 >> 0xf;
    iVar2 = param_2[2];
    param_2[2] = (&DAT_0053cfc0)[param_4] * iVar2 - *param_2 * (&DAT_0053ca1c)[param_4] >> 0xf;
    *param_2 = *param_2 * (&DAT_0053cfc0)[param_4] + (&DAT_0053ca1c)[param_4] * iVar2 >> 0xf;
    piVar1 = param_2 + 1;
    iVar2 = *param_2;
    *param_2 = (&DAT_0053cfc0)[param_5] * iVar2 - *piVar1 * (&DAT_0053ca1c)[param_5] >> 0xf;
    *piVar1 = *piVar1 * (&DAT_0053cfc0)[param_5] + (&DAT_0053ca1c)[param_5] * iVar2 >> 0xf;
    param_2 = param_2 + 3;
  }
  return;
}

