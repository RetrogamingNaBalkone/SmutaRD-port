/* Ghidra address: 0041219c; FUN_0041219c */

void __cdecl FUN_0041219c(int param_1,byte param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  
  sVar2 = (short)(*(int *)(param_1 + 0x39) / (int)DAT_004f1434[0x3a7]);
  sVar3 = (short)(*(int *)(param_1 + 0x31) / (int)DAT_004f1434[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*DAT_004f1434 + -1 < (int)sVar3) {
    sVar3 = *DAT_004f1434 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (DAT_004f1434[2] + -1 < (int)sVar2) {
    sVar2 = DAT_004f1434[2] + -1;
  }
  (&DAT_004f4e98)[(short)(sVar2 * (short)*(undefined4 *)(DAT_004f1434 + 0x25b6) + sVar3)] = 0x20;
  iVar1 = *(int *)(DAT_004f1434 + (uint)param_2 * 2 + 0x187);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(iVar1 + 0x31);
  *(int *)(param_1 + 0x35) = *(int *)(iVar1 + 0x35) - (int)*(short *)(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(iVar1 + 0x39);
  sVar2 = (short)(*(int *)(param_1 + 0x39) / (int)DAT_004f1434[0x3a7]);
  sVar3 = (short)(*(int *)(param_1 + 0x31) / (int)DAT_004f1434[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*DAT_004f1434 + -1 < (int)sVar3) {
    sVar3 = *DAT_004f1434 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (DAT_004f1434[2] + -1 < (int)sVar2) {
    sVar2 = DAT_004f1434[2] + -1;
  }
  (&DAT_004f4e98)[(short)(sVar2 * (short)*(undefined4 *)(DAT_004f1434 + 0x25b6) + sVar3)] =
       *(undefined1 *)(param_1 + 0xb9);
  return;
}

