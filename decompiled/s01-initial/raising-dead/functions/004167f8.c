/* Ghidra address: 004167f8; FUN_004167f8 */

undefined4 __cdecl FUN_004167f8(short *param_1,int param_2,int param_3,short param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short local_6;
  
  sVar1 = (short)((param_3 - param_4) / (int)param_1[0x3a7]);
  sVar3 = (short)((param_2 - param_4) / (int)param_1[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*param_1 + -1 < (int)sVar3) {
    sVar3 = *param_1 + -1;
  }
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (param_1[2] + -1 < (int)sVar1) {
    sVar1 = param_1[2] + -1;
  }
  sVar2 = (short)((param_4 + param_3) / (int)param_1[0x3a7]);
  sVar4 = (short)((param_2 - param_4) / (int)param_1[0x3a7]);
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (*param_1 + -1 < (int)sVar4) {
    sVar4 = *param_1 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (param_1[2] + -1 < (int)sVar2) {
    sVar2 = param_1[2] + -1;
  }
  local_6 = *(short *)(*(int *)(param_1 +
                               (uint)(byte)(&DAT_004f70a0)
                                           [(short)(sVar3 + sVar1 * (short)*(undefined4 *)
                                                                            (param_1 + 0x25b6))] * 2
                               + 0x187) + 0x1f);
  if (*(short *)(*(int *)(param_1 +
                         (uint)(byte)(&DAT_004f70a0)
                                     [(short)(sVar3 + sVar1 * (short)*(undefined4 *)
                                                                      (param_1 + 0x25b6))] * 2 +
                         0x187) + 0x1f) <
      *(short *)(*(int *)(param_1 +
                         (uint)(byte)(&DAT_004f70a0)
                                     [(short)(sVar4 + sVar2 * (short)*(undefined4 *)
                                                                      (param_1 + 0x25b6))] * 2 +
                         0x187) + 0x1f)) {
    local_6 = *(short *)(*(int *)(param_1 +
                                 (uint)(byte)(&DAT_004f70a0)
                                             [(short)(sVar4 + sVar2 * (short)*(undefined4 *)
                                                                              (param_1 + 0x25b6))] *
                                 2 + 0x187) + 0x1f);
  }
  sVar1 = (short)((param_3 - param_4) / (int)param_1[0x3a7]);
  sVar3 = (short)((param_4 + param_2) / (int)param_1[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*param_1 + -1 < (int)sVar3) {
    sVar3 = *param_1 + -1;
  }
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (param_1[2] + -1 < (int)sVar1) {
    sVar1 = param_1[2] + -1;
  }
  if (local_6 < *(short *)(*(int *)(param_1 +
                                   (uint)(byte)(&DAT_004f70a0)
                                               [(short)(sVar3 + (short)((int)sVar1 *
                                                                       *(int *)(param_1 + 0x25b6)))]
                                   * 2 + 0x187) + 0x1f)) {
    local_6 = *(short *)(*(int *)(param_1 +
                                 (uint)(byte)(&DAT_004f70a0)
                                             [(short)(sVar3 + (short)((int)sVar1 *
                                                                     *(int *)(param_1 + 0x25b6)))] *
                                 2 + 0x187) + 0x1f);
  }
  return CONCAT22((short)((uint)((int)sVar1 * *(int *)(param_1 + 0x25b6)) >> 0x10),local_6);
}

