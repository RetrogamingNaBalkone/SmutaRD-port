/* Ghidra address: 00416644; FUN_00416644 */

undefined4 __cdecl FUN_00416644(int param_1,int *param_2,short param_3,int param_4)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short local_10;
  short local_e;
  int local_c;
  int local_8;
  
  iVar6 = *param_2;
  local_c = param_2[2];
  FUN_0040f894(&local_e,(short)param_2[3]);
  if (param_4 == 0) {
    iVar5 = (&DAT_0053ca1c)[local_e] * param_2[6];
    local_8 = local_c - ((&DAT_0053cfc0)[local_e] * param_2[6] >> 0xf);
  }
  else {
    FUN_0040f894(&local_10,*(short *)((int)param_2 + 0x12));
    iVar1 = param_2[6];
    iVar5 = ((int)((&DAT_0053ca1c)[local_e] * (&DAT_0053cfc0)[local_10]) >> 0xf) * iVar1;
    local_8 = local_c - (((int)((&DAT_0053cfc0)[local_e] * (&DAT_0053cfc0)[local_10]) >> 0xf) *
                         iVar1 >> 0xf);
    param_2[1] = param_2[1] + ((&DAT_0053ca1c)[local_10] * iVar1 >> 0xf);
  }
  iVar6 = (iVar5 >> 0xf) + iVar6;
  sVar4 = (short)(local_8 / (int)DAT_004f1434[0x3a7]);
  sVar2 = (short)(iVar6 / (int)DAT_004f1434[0x3a7]);
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (*DAT_004f1434 + -1 < (int)sVar2) {
    sVar2 = *DAT_004f1434 + -1;
  }
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (DAT_004f1434[2] + -1 < (int)sVar4) {
    sVar4 = DAT_004f1434[2] + -1;
  }
  sVar2 = sVar4 * (short)*(undefined4 *)(DAT_004f1434 + 0x25b6) + sVar2;
  *param_2 = iVar6;
  param_2[2] = local_8;
  if (param_3 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x30e + (uint)(byte)(&DAT_004f4e98)[sVar2] * 4);
  }
  else if (param_3 == 1) {
    uVar3 = *(undefined4 *)(param_1 + 0x30e + (uint)(byte)(&DAT_004f5f9c)[sVar2] * 4);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x30e + (uint)(byte)(&DAT_004f70a0)[sVar2] * 4);
  }
  return uVar3;
}

