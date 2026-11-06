/* Ghidra address: 0042051c; FUN_0042051c */

void __cdecl FUN_0042051c(short *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  short local_8;
  short local_6;
  
  if ((param_2 == param_4) || (param_3 == param_5)) {
    local_30 = param_2;
    local_2c = param_3;
    local_28 = param_4;
    local_24 = param_5;
    FUN_00422f98(&local_30);
    FUN_00423034((int)&local_30);
    while ((local_20 != local_28 || (local_1c != local_24))) {
      pcVar1 = &DAT_004fc670 + local_1c * 0x40 + local_20;
      if ((*pcVar1 != '\x01') && (*pcVar1 == '\0')) {
        local_6 = (short)local_1c;
        local_8 = (short)local_20;
        if (local_8 < 0) {
          local_8 = 0;
        }
        if (*param_1 + -1 < (int)local_8) {
          local_8 = *param_1 + -1;
        }
        if (local_6 < 0) {
          local_6 = 0;
        }
        if (param_1[2] + -1 < (int)local_6) {
          local_6 = param_1[2] + -1;
        }
        iVar2 = (int)(short)(local_6 * (short)*(undefined4 *)(param_1 + 0x25b6) + local_8);
        (&DAT_004fd670)[DAT_00501670] = iVar2;
        DAT_00501670 = DAT_00501670 + 1;
        *pcVar1 = '\x01';
        if (((*(byte *)(*(int *)(param_1 + (uint)(byte)(&DAT_004f5f9c)[iVar2] * 2 + 0x187) + 0x1b) &
             2) != 0) &&
           ((((*(byte *)(*(int *)(param_1 + (uint)(byte)(&DAT_004f5f9d)[iVar2] * 2 + 0x187) + 0x1b)
              & 2) != 0 &&
             ((*(byte *)(*(int *)(param_1 + (uint)(byte)(&DAT_004f5f9b)[iVar2] * 2 + 0x187) + 0x1b)
              & 2) != 0)) ||
            (((*(byte *)(*(int *)(param_1 +
                                 (uint)(byte)(&DAT_004f5f9c)[*param_1 + iVar2] * 2 + 0x187) + 0x1b)
              & 2) != 0 &&
             ((*(byte *)(*(int *)(param_1 +
                                 (uint)(byte)(&DAT_004f5f9c)[iVar2 - *param_1] * 2 + 0x187) + 0x1b)
              & 2) != 0)))))) {
          *pcVar1 = '\x02';
        }
      }
      FUN_00423034((int)&local_30);
    }
  }
  else {
    FUN_0042051c(param_1,param_2,param_3,param_2,param_5);
    FUN_0042051c(param_1,param_2,param_5,param_4,param_5);
    FUN_0042051c(param_1,param_4,param_5,param_4,param_3);
    FUN_0042051c(param_1,param_4,param_3,param_2,param_3);
  }
  return;
}

