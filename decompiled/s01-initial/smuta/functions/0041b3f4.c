/* Ghidra address: 0041b3f4; FUN_0041b3f4 */

void FUN_0041b3f4(void)

{
  char *pcVar1;
  int iVar2;
  short *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int local_20;
  int local_1c;
  short local_8;
  short local_6;
  
  if ((in_stack_00000008 == in_stack_00000010) || (in_stack_0000000c == in_stack_00000014)) {
    FUN_0041050c();
    FUN_004105a8();
    while ((local_20 != in_stack_00000010 || (local_1c != in_stack_00000014))) {
      pcVar1 = &DAT_00494d50 + local_1c * 0x40 + local_20;
      if ((*pcVar1 != '\x01') && (*pcVar1 == '\0')) {
        local_6 = (short)local_1c;
        local_8 = (short)local_20;
        if (local_8 < 0) {
          local_8 = 0;
        }
        if (*in_stack_00000004 + -1 < (int)local_8) {
          local_8 = *in_stack_00000004 + -1;
        }
        if (local_6 < 0) {
          local_6 = 0;
        }
        if (in_stack_00000004[2] + -1 < (int)local_6) {
          local_6 = in_stack_00000004[2] + -1;
        }
        iVar2 = (int)(short)(local_6 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_8)
        ;
        (&DAT_00495d50)[DAT_00499d50] = iVar2;
        DAT_00499d50 = DAT_00499d50 + 1;
        *pcVar1 = '\x01';
        if (((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[iVar2] * 2 + 0x187)
                       + 0x1b) & 2) != 0) &&
           ((((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61d)[iVar2] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0 &&
             ((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61b)[iVar2] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0)) ||
            (((*(byte *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_0048f61c)[*in_stack_00000004 + iVar2] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0 &&
             ((*(byte *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_0048f61c)[iVar2 - *in_stack_00000004] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0)))))) {
          *pcVar1 = '\x02';
        }
      }
      FUN_004105a8();
    }
  }
  else {
    FUN_0041b3f4();
    FUN_0041b3f4();
    FUN_0041b3f4();
    FUN_0041b3f4();
  }
  return;
}

