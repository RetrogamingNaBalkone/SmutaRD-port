/* Ghidra address: 0040ffb4; FUN_0040ffb4 */

void __cdecl FUN_0040ffb4(int param_1,undefined1 param_2,short param_3)

{
  short sVar1;
  short sVar2;
  
  sVar2 = (short)(*(int *)(param_1 + 0x39) / (int)DAT_004f1434[0x3a7]);
  sVar1 = (short)(*(int *)(param_1 + 0x31) / (int)DAT_004f1434[0x3a7]);
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (*DAT_004f1434 + -1 < (int)sVar1) {
    sVar1 = *DAT_004f1434 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (DAT_004f1434[2] + -1 < (int)sVar2) {
    sVar2 = DAT_004f1434[2] + -1;
  }
  sVar1 = sVar2 * (short)*(undefined4 *)(DAT_004f1434 + 0x25b6) + sVar1;
  if (param_3 == 0) {
    (&DAT_004f4e98)[sVar1] = param_2;
  }
  else if (param_3 == 1) {
    (&DAT_004f5f9c)[sVar1] = param_2;
  }
  else {
    (&DAT_004f70a0)[sVar1] = param_2;
  }
  return;
}

