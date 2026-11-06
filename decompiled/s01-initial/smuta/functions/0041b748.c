/* Ghidra address: 0041b748; FUN_0041b748 */

void FUN_0041b748(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  short *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_14;
  short local_10;
  short local_c;
  
  for (local_14 = in_stack_0000000c + -1; local_14 <= in_stack_0000000c + 1; local_14 = local_14 + 1
      ) {
    for (iVar3 = in_stack_00000008 + -1; iVar3 <= in_stack_00000008 + 1; iVar3 = iVar3 + 1) {
      pcVar1 = &DAT_00494d50 + local_14 * 0x40 + iVar3;
      if (*pcVar1 == '\0') {
        local_10 = (short)local_14;
        local_c = (short)iVar3;
        if (local_c < 0) {
          local_c = 0;
        }
        if (*in_stack_00000004 + -1 < (int)local_c) {
          local_c = *in_stack_00000004 + -1;
        }
        if (local_10 < 0) {
          local_10 = 0;
        }
        if (in_stack_00000004[2] + -1 < (int)local_10) {
          local_10 = in_stack_00000004[2] + -1;
        }
        iVar2 = (int)(short)(local_c + local_10 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6)
                            );
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
    }
  }
  return;
}

