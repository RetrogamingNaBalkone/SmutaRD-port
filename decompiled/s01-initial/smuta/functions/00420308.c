/* Ghidra address: 00420308; FUN_00420308 */

undefined4 FUN_00420308(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 extraout_var;
  undefined4 uVar1;
  undefined2 extraout_var_00;
  short sVar2;
  short sVar3;
  
  if (DAT_00436c18 + -1 == 0) {
    uVar1 = 3;
  }
  else if (*(short *)(param_4 + 0x7e) == 0) {
    if (*(char *)(param_4 + 0x12d) == '\0') {
      FUN_0040a7a4(DAT_00436c18 + -1,CONCAT31((int3)((uint)param_2 >> 8),*(char *)(param_4 + 0x12d))
                   ,*(undefined4 *)(param_4 + 0xc4),*(undefined4 *)(param_4 + 0xc4),0);
      *(undefined1 *)(param_4 + 0x12d) = 1;
      *(short *)(param_4 + 0x126) = *(short *)(param_4 + 0x1f) >> 2;
      *(int *)(param_4 + 0x137) = (int)*(short *)(param_4 + 0x1f);
    }
    *(short *)(param_4 + 0x1f) = *(short *)(param_4 + 0x1f) + -0x10;
    if (*(short *)(param_4 + 0x1f) < *(short *)(param_4 + 0x126)) {
      *(short *)(param_4 + 0x1f) = *(short *)(param_4 + 0x126);
      FUN_0040a7fc();
    }
    FUN_00424d90();
    if (*(char *)(param_4 + 0x12d) == '\x01') {
      uVar1 = 0;
    }
    else {
      *(undefined2 *)(param_4 + 0x1f) = *(undefined2 *)(param_4 + 0x137);
      *(short *)(param_4 + 0x120) = *(short *)(param_4 + 0x120) + -1;
      if (*(short *)(param_4 + 0x120) == 0) {
        uVar1 = CONCAT22(extraout_var,2);
      }
      else {
        *(undefined1 *)(param_4 + 0x12d) = 0;
        sVar2 = (short)(*(int *)(param_4 + 0x38) / (int)DAT_0048aab4[0x3a7]);
        sVar3 = (short)(*(int *)(param_4 + 0x30) / (int)DAT_0048aab4[0x3a7]);
        if (sVar3 < 0) {
          sVar3 = 0;
        }
        if (*DAT_0048aab4 + -1 < (int)sVar3) {
          sVar3 = *DAT_0048aab4 + -1;
        }
        if (sVar2 < 0) {
          sVar2 = 0;
        }
        if (DAT_0048aab4[2] + -1 < (int)sVar2) {
          sVar2 = DAT_0048aab4[2] + -1;
        }
        (&DAT_0048e518)[(short)(sVar2 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar3)] =
             0x20;
        FUN_004152d8();
        sVar2 = (short)(*(int *)(param_4 + 0x38) / (int)DAT_0048aab4[0x3a7]);
        sVar3 = (short)(*(int *)(param_4 + 0x30) / (int)DAT_0048aab4[0x3a7]);
        if (sVar3 < 0) {
          sVar3 = 0;
        }
        if (*DAT_0048aab4 + -1 < (int)sVar3) {
          sVar3 = *DAT_0048aab4 + -1;
        }
        if (sVar2 < 0) {
          sVar2 = 0;
        }
        if (DAT_0048aab4[2] + -1 < (int)sVar2) {
          sVar2 = DAT_0048aab4[2] + -1;
        }
        (&DAT_0048e518)[(short)((short)((int)sVar2 * *(int *)(DAT_0048aab4 + 0x25b6)) + sVar3)] =
             *(undefined1 *)(param_4 + 0xb8);
        *(undefined2 *)(param_4 + 0x7e) = *(undefined2 *)(param_4 + 0x82);
        FUN_00408944();
        uVar1 = CONCAT22(extraout_var_00,1);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

