/* Ghidra address: 00411f60; FUN_00411f60 */

undefined4 __cdecl FUN_00411f60(int param_1)

{
  undefined2 extraout_var;
  undefined4 uVar1;
  undefined2 extraout_var_00;
  short sVar2;
  short sVar3;
  
  if (DAT_00438210 == 1) {
    uVar1 = 3;
  }
  else if (*(short *)(param_1 + 0x7f) == 0) {
    if (*(char *)(param_1 + 0x12e) == '\0') {
      (**(code **)(**(int **)(param_1 + 0xc5) + 0xc))();
      *(undefined1 *)(param_1 + 0x12e) = 1;
      *(short *)(param_1 + 0x127) = *(short *)(param_1 + 0x1f) >> 2;
      *(int *)(param_1 + 0x138) = (int)*(short *)(param_1 + 0x1f);
    }
    *(short *)(param_1 + 0x1f) = *(short *)(param_1 + 0x1f) + -0x10;
    if (*(short *)(param_1 + 0x1f) < *(short *)(param_1 + 0x127)) {
      *(short *)(param_1 + 0x1f) = *(short *)(param_1 + 0x127);
      (**(code **)(**(int **)(param_1 + 0xc5) + 0x14))();
    }
    FUN_00401734(0x2d);
    if (*(char *)(param_1 + 0x12e) == '\x01') {
      uVar1 = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0x1f) = *(undefined2 *)(param_1 + 0x138);
      *(short *)(param_1 + 0x121) = *(short *)(param_1 + 0x121) + -1;
      if (*(short *)(param_1 + 0x121) == 0) {
        uVar1 = CONCAT22(extraout_var,2);
      }
      else {
        *(undefined1 *)(param_1 + 0x12e) = 0;
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
             0x20;
        FUN_0041a104((int)DAT_004f1434);
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
        (&DAT_004f4e98)[(short)((short)((int)sVar2 * *(int *)(DAT_004f1434 + 0x25b6)) + sVar3)] =
             *(undefined1 *)(param_1 + 0xb9);
        *(short *)(param_1 + 0x7f) = *(short *)(param_1 + 0x83);
        FUN_00404a24(DAT_004385a0,*(short *)(param_1 + 0x83));
        uVar1 = CONCAT22(extraout_var_00,1);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

