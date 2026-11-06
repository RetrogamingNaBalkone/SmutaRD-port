/* Ghidra address: 00411238; FUN_00411238 */

void __cdecl FUN_00411238(int param_1,int param_2,int param_3)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short local_12;
  
  sVar4 = (short)(*(int *)(param_1 + 0x39) / (int)DAT_004f1434[0x3a7]);
  sVar5 = (short)(*(int *)(param_1 + 0x31) / (int)DAT_004f1434[0x3a7]);
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  if (*DAT_004f1434 + -1 < (int)sVar5) {
    sVar5 = *DAT_004f1434 + -1;
  }
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (DAT_004f1434[2] + -1 < (int)sVar4) {
    sVar4 = DAT_004f1434[2] + -1;
  }
  sVar5 = sVar5 + sVar4 * (short)*(undefined4 *)(DAT_004f1434 + 0x25b6);
  if (*(short *)(param_1 + 0x7b) == 0) {
    uVar2 = FUN_004167f8(DAT_004f1434,*(int *)(param_1 + 0x31),*(int *)(param_1 + 0x39),100);
    sVar4 = (short)uVar2;
  }
  else {
    uVar2 = FUN_004167f8(DAT_004f1434,*(int *)(param_1 + 0x31),*(int *)(param_1 + 0x39),0xaa);
    sVar4 = (short)uVar2;
  }
  iVar3 = FUN_00410aec(param_1);
  sVar4 = -(short)iVar3 - sVar4;
  iVar3 = *(int *)(DAT_004f1434 + (uint)(byte)(&DAT_004f5f9c)[sVar5] * 2 + 0x187);
  if ((*(short *)(iVar3 + 0x18) == 7) && (*(short *)(iVar3 + 0x7a) != 0)) {
    *(short *)(iVar3 + 0x7a) = *(short *)(iVar3 + 0x7a) + -1;
  }
  (&DAT_004f4e98)[sVar5] = 0x20;
  if (*(short *)(param_1 + 0x7b) == 0) {
    FUN_004177ec(DAT_004f1434,(int *)(param_1 + 0x31),(int *)(param_1 + 0x39),param_2,param_3,
                 (short *)(param_1 + 0x35),(int)*(short *)(param_1 + 0x1f),*(int *)(param_1 + 0x51))
    ;
  }
  else {
    FUN_004177ec(DAT_004f1434,(int *)(param_1 + 0x31),(int *)(param_1 + 0x39),param_2,param_3,
                 (short *)(param_1 + 0x35),30000,*(int *)(param_1 + 0x51));
  }
  sVar5 = (short)(*(int *)(param_1 + 0x39) / (int)DAT_004f1434[0x3a7]);
  sVar6 = (short)(*(int *)(param_1 + 0x31) / (int)DAT_004f1434[0x3a7]);
  if (sVar6 < 0) {
    sVar6 = 0;
  }
  if (*DAT_004f1434 + -1 < (int)sVar6) {
    sVar6 = *DAT_004f1434 + -1;
  }
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  if (DAT_004f1434[2] + -1 < (int)sVar5) {
    sVar5 = DAT_004f1434[2] + -1;
  }
  sVar6 = sVar6 + sVar5 * (short)*(undefined4 *)(DAT_004f1434 + 0x25b6);
  if (*(short *)(*(int *)(DAT_004f1434 + (uint)(byte)(&DAT_004f5f9c)[sVar6] * 2 + 0x187) + 0x18) ==
      7) {
    psVar1 = (short *)(*(int *)(DAT_004f1434 + (uint)(byte)(&DAT_004f5f9c)[sVar6] * 2 + 0x187) +
                      0x7a);
    *psVar1 = *psVar1 + 1;
  }
  if (*(short *)(param_1 + 0x7b) == 0) {
    uVar2 = FUN_004167f8(DAT_004f1434,*(int *)(param_1 + 0x31),*(int *)(param_1 + 0x39),100);
    sVar5 = (short)uVar2;
  }
  else {
    uVar2 = FUN_004167f8(DAT_004f1434,*(int *)(param_1 + 0x31),*(int *)(param_1 + 0x39),0xaa);
    sVar5 = (short)uVar2;
  }
  iVar3 = FUN_00410aec(param_1);
  sVar5 = -(short)iVar3 - sVar5;
  *(int *)(param_1 + 0x35) = *(int *)(param_1 + 0x35) + 0x4b;
  if (*(int *)(param_1 + 0x35) < (int)sVar4) {
    sVar4 = *(short *)(param_1 + 0x35);
  }
  if (sVar5 <= sVar4) {
    *(int *)(param_1 + 0x35) = (int)sVar5;
  }
  (&DAT_004f4e98)[sVar6] = *(undefined1 *)(param_1 + 0xb9);
  return;
}

