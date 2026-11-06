/* Ghidra address: 00426b10; FUN_00426b10 */

void __cdecl FUN_00426b10(short param_1,int *param_2,short param_3,short param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
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
  for (; param_1 != 0; param_1 = param_1 + -1) {
    iVar3 = param_2[2];
    param_2[2] = (&DAT_0053cfc0)[param_4] * iVar3 - *param_2 * (&DAT_0053ca1c)[param_4] >> 0xf;
    piVar1 = param_2 + 1;
    *param_2 = *param_2 * (&DAT_0053cfc0)[param_4] + (&DAT_0053ca1c)[param_4] * iVar3 >> 0xf;
    piVar2 = param_2 + 2;
    param_2 = param_2 + 3;
    iVar3 = *piVar1;
    *piVar1 = (&DAT_0053cfc0)[param_3] * iVar3 - *piVar2 * (&DAT_0053ca1c)[param_3] >> 0xf;
    *piVar2 = *piVar2 * (&DAT_0053cfc0)[param_3] + (&DAT_0053ca1c)[param_3] * iVar3 >> 0xf;
  }
  return;
}

