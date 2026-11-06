/* Ghidra address: 004206f4; FUN_004206f4 */

void __cdecl
FUN_004206f4(short *param_1,int param_2,undefined4 param_3,int *param_4,int *param_5,
            undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_34 = param_2;
  local_30 = param_3;
  local_14 = param_6;
  FUN_00422e18(&local_34);
  local_10 = 0;
  do {
    if (DAT_004f142c <= local_10) {
LAB_00420859:
      *param_4 = local_8;
      *param_5 = local_c;
      return;
    }
    local_8 = local_2c / (int)param_1[0x3a7];
    local_c = local_28 / (int)param_1[0x3a7];
    pcVar1 = &DAT_004fc670 + local_c * 0x40 + local_8;
    if (*pcVar1 != '\x01') {
      if (*pcVar1 == '\0') {
        if ((short)local_8 < 0) {
          local_8._0_2_ = 0;
        }
        if (*param_1 + -1 < (int)(short)local_8) {
          local_8._0_2_ = *param_1 + -1;
        }
        if ((short)local_c < 0) {
          local_c._0_2_ = 0;
        }
        if (param_1[2] + -1 < (int)(short)local_c) {
          local_c._0_2_ = param_1[2] + -1;
        }
        iVar2 = (int)(short)((short)local_8 +
                            (short)local_c * (short)*(undefined4 *)(param_1 + 0x25b6));
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
          goto LAB_00420859;
        }
      }
      else if (*pcVar1 == '\x02') goto LAB_00420859;
    }
    FUN_00422e58((int)&local_34);
    local_10 = local_10 + 1;
  } while( true );
}

