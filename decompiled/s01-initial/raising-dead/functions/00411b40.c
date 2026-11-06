/* Ghidra address: 00411b40; FUN_00411b40 */

undefined4 __cdecl FUN_00411b40(int param_1,short param_2)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  
  sVar3 = (short)(*(int *)(param_1 + 0x39) / (int)DAT_004f1434[0x3a7]);
  sVar1 = (short)(*(int *)(param_1 + 0x31) / (int)DAT_004f1434[0x3a7]);
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (*DAT_004f1434 + -1 < (int)sVar1) {
    sVar1 = *DAT_004f1434 + -1;
  }
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (DAT_004f1434[2] + -1 < (int)sVar3) {
    sVar3 = DAT_004f1434[2] + -1;
  }
  sVar1 = (short)((int)sVar3 * *(int *)(DAT_004f1434 + 0x25b6)) + sVar1;
  if (param_2 == 0) {
    uVar2 = *(undefined4 *)(DAT_004f1434 + (uint)(byte)(&DAT_004f4e98)[sVar1] * 2 + 0x187);
  }
  else if (param_2 == 1) {
    uVar2 = *(undefined4 *)(DAT_004f1434 + (uint)(byte)(&DAT_004f5f9c)[sVar1] * 2 + 0x187);
  }
  else {
    uVar2 = *(undefined4 *)(DAT_004f1434 + (uint)(byte)(&DAT_004f70a0)[sVar1] * 2 + 0x187);
  }
  return uVar2;
}

