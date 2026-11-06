/* Ghidra address: 0041b5cc; FUN_0041b5cc */

void FUN_0041b5cc(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  short *in_stack_00000004;
  int *in_stack_00000010;
  int *in_stack_00000014;
  int local_2c;
  int local_28;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_0041038c();
  local_10 = 0;
  do {
    if (DAT_0048aaac <= local_10) {
LAB_0041b731:
      *in_stack_00000010 = local_8;
      *in_stack_00000014 = local_c;
      return;
    }
    iVar1 = local_2c / (int)in_stack_00000004[0x3a7];
    iVar2 = local_28 / (int)in_stack_00000004[0x3a7];
    pcVar3 = &DAT_00494d50 + iVar2 * 0x40 + iVar1;
    local_c = iVar2;
    local_8 = iVar1;
    if (*pcVar3 != '\x01') {
      if (*pcVar3 == '\0') {
        local_c._0_2_ = (short)iVar2;
        local_8._0_2_ = (short)iVar1;
        if ((short)local_8 < 0) {
          local_8._0_2_ = 0;
        }
        if (*in_stack_00000004 + -1 < (int)(short)local_8) {
          local_8._0_2_ = *in_stack_00000004 + -1;
        }
        if ((short)local_c < 0) {
          local_c._0_2_ = 0;
        }
        if (in_stack_00000004[2] + -1 < (int)(short)local_c) {
          local_c._0_2_ = in_stack_00000004[2] + -1;
        }
        iVar1 = (int)(short)((short)local_8 +
                            (short)local_c * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6));
        (&DAT_00495d50)[DAT_00499d50] = iVar1;
        DAT_00499d50 = DAT_00499d50 + 1;
        *pcVar3 = '\x01';
        if (((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[iVar1] * 2 + 0x187)
                       + 0x1b) & 2) != 0) &&
           ((((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61d)[iVar1] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0 &&
             ((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61b)[iVar1] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0)) ||
            (((*(byte *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_0048f61c)[*in_stack_00000004 + iVar1] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0 &&
             ((*(byte *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_0048f61c)[iVar1 - *in_stack_00000004] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0)))))) {
          *pcVar3 = '\x02';
          goto LAB_0041b731;
        }
      }
      else if (*pcVar3 == '\x02') goto LAB_0041b731;
    }
    FUN_004103cc();
    local_10 = local_10 + 1;
  } while( true );
}

