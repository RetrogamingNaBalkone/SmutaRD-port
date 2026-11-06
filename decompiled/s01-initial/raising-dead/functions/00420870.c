/* Ghidra address: 00420870; FUN_00420870 */

void __cdecl FUN_00420870(short *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int local_14;
  short local_10;
  short local_c;
  
  for (local_14 = param_3 + -1; local_14 <= param_3 + 1; local_14 = local_14 + 1) {
    for (iVar3 = param_2 + -1; iVar3 <= param_2 + 1; iVar3 = iVar3 + 1) {
      pcVar1 = &DAT_004fc670 + local_14 * 0x40 + iVar3;
      if (*pcVar1 == '\0') {
        local_10 = (short)local_14;
        local_c = (short)iVar3;
        if (local_c < 0) {
          local_c = 0;
        }
        if (*param_1 + -1 < (int)local_c) {
          local_c = *param_1 + -1;
        }
        if (local_10 < 0) {
          local_10 = 0;
        }
        if (param_1[2] + -1 < (int)local_10) {
          local_10 = param_1[2] + -1;
        }
        iVar2 = (int)(short)(local_c + local_10 * (short)*(undefined4 *)(param_1 + 0x25b6));
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
    }
  }
  return;
}

