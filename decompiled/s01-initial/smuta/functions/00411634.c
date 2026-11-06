/* Ghidra address: 00411634; FUN_00411634 */

undefined4 FUN_00411634(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  short in_stack_00000010;
  short local_6;
  
  sVar1 = (short)((in_stack_0000000c - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  sVar3 = (short)((in_stack_00000008 - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*in_stack_00000004 + -1 < (int)sVar3) {
    sVar3 = *in_stack_00000004 + -1;
  }
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (in_stack_00000004[2] + -1 < (int)sVar1) {
    sVar1 = in_stack_00000004[2] + -1;
  }
  sVar2 = (short)((in_stack_00000010 + in_stack_0000000c) / (int)in_stack_00000004[0x3a7]);
  sVar4 = (short)((in_stack_00000008 - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (*in_stack_00000004 + -1 < (int)sVar4) {
    sVar4 = *in_stack_00000004 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (in_stack_00000004[2] + -1 < (int)sVar2) {
    sVar2 = in_stack_00000004[2] + -1;
  }
  local_6 = *(short *)(*(int *)(in_stack_00000004 +
                               (uint)(byte)(&DAT_00490720)
                                           [(short)(sVar3 + sVar1 * (short)*(undefined4 *)
                                                                            (in_stack_00000004 +
                                                                            0x25b6))] * 2 + 0x187) +
                      0x1f);
  if (*(short *)(*(int *)(in_stack_00000004 +
                         (uint)(byte)(&DAT_00490720)
                                     [(short)(sVar3 + sVar1 * (short)*(undefined4 *)
                                                                      (in_stack_00000004 + 0x25b6))]
                         * 2 + 0x187) + 0x1f) <
      *(short *)(*(int *)(in_stack_00000004 +
                         (uint)(byte)(&DAT_00490720)
                                     [(short)(sVar4 + sVar2 * (short)*(undefined4 *)
                                                                      (in_stack_00000004 + 0x25b6))]
                         * 2 + 0x187) + 0x1f)) {
    local_6 = *(short *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_00490720)
                                             [(short)(sVar4 + sVar2 * (short)*(undefined4 *)
                                                                              (in_stack_00000004 +
                                                                              0x25b6))] * 2 + 0x187)
                        + 0x1f);
  }
  sVar1 = (short)((in_stack_0000000c - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  sVar3 = (short)((in_stack_00000010 + in_stack_00000008) / (int)in_stack_00000004[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*in_stack_00000004 + -1 < (int)sVar3) {
    sVar3 = *in_stack_00000004 + -1;
  }
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (in_stack_00000004[2] + -1 < (int)sVar1) {
    sVar1 = in_stack_00000004[2] + -1;
  }
  if (local_6 < *(short *)(*(int *)(in_stack_00000004 +
                                   (uint)(byte)(&DAT_00490720)
                                               [(short)(sVar3 + (short)((int)sVar1 *
                                                                       *(int *)(in_stack_00000004 +
                                                                               0x25b6)))] * 2 +
                                   0x187) + 0x1f)) {
    local_6 = *(short *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_00490720)
                                             [(short)(sVar3 + (short)((int)sVar1 *
                                                                     *(int *)(in_stack_00000004 +
                                                                             0x25b6)))] * 2 + 0x187)
                        + 0x1f);
  }
  return CONCAT22((short)((uint)((int)sVar1 * *(int *)(in_stack_00000004 + 0x25b6)) >> 0x10),local_6
                 );
}

