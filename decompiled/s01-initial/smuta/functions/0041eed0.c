/* Ghidra address: 0041eed0; FUN_0041eed0 */

int FUN_0041eed0(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int in_stack_00000004;
  short local_50;
  short local_40;
  short local_30;
  short local_20;
  
  sVar3 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar4 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar4) {
    sVar4 = *DAT_0048aab4 + -1;
  }
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar3) {
    sVar3 = DAT_0048aab4[2] + -1;
  }
  iVar2 = (int)*(short *)(*(int *)(DAT_0048aab4 +
                                  (uint)(byte)(&DAT_00490720)
                                              [(short)(sVar4 + sVar3 * (short)*(undefined4 *)
                                                                               (DAT_0048aab4 +
                                                                               0x25b6))] * 2 + 0x187
                                  ) + 0x74);
  sVar5 = (short)((*(int *)(in_stack_00000004 + 0x38) + -0xa0) / (int)DAT_0048aab4[0x3a7]);
  local_20 = (short)((*(int *)(in_stack_00000004 + 0x30) + -0xa0) / (int)DAT_0048aab4[0x3a7]);
  if (local_20 < 0) {
    local_20 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)local_20) {
    local_20 = *DAT_0048aab4 + -1;
  }
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar5) {
    sVar5 = DAT_0048aab4[2] + -1;
  }
  iVar1 = (int)*(short *)(*(int *)(DAT_0048aab4 +
                                  (uint)(byte)(&DAT_00490720)
                                              [(short)(sVar5 * (short)*(undefined4 *)
                                                                       (DAT_0048aab4 + 0x25b6) +
                                                      local_20)] * 2 + 0x187) + 0x74);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  sVar6 = (short)((*(int *)(in_stack_00000004 + 0x38) + -0xa0) / (int)DAT_0048aab4[0x3a7]);
  local_30 = (short)((*(int *)(in_stack_00000004 + 0x30) + 0xa0) / (int)DAT_0048aab4[0x3a7]);
  if (local_30 < 0) {
    local_30 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)local_30) {
    local_30 = *DAT_0048aab4 + -1;
  }
  if (sVar6 < 0) {
    sVar6 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar6) {
    sVar6 = DAT_0048aab4[2] + -1;
  }
  iVar1 = (int)*(short *)(*(int *)(DAT_0048aab4 +
                                  (uint)(byte)(&DAT_00490720)
                                              [(short)(sVar6 * (short)*(undefined4 *)
                                                                       (DAT_0048aab4 + 0x25b6) +
                                                      local_30)] * 2 + 0x187) + 0x74);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  sVar7 = (short)((*(int *)(in_stack_00000004 + 0x38) + 0xa0) / (int)DAT_0048aab4[0x3a7]);
  local_40 = (short)((*(int *)(in_stack_00000004 + 0x30) + -0xa0) / (int)DAT_0048aab4[0x3a7]);
  if (local_40 < 0) {
    local_40 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)local_40) {
    local_40 = *DAT_0048aab4 + -1;
  }
  if (sVar7 < 0) {
    sVar7 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar7) {
    sVar7 = DAT_0048aab4[2] + -1;
  }
  iVar1 = (int)*(short *)(*(int *)(DAT_0048aab4 +
                                  (uint)(byte)(&DAT_00490720)
                                              [(short)(sVar7 * (short)*(undefined4 *)
                                                                       (DAT_0048aab4 + 0x25b6) +
                                                      local_40)] * 2 + 0x187) + 0x74);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  sVar8 = (short)((*(int *)(in_stack_00000004 + 0x38) + 0xa0) / (int)DAT_0048aab4[0x3a7]);
  local_50 = (short)((*(int *)(in_stack_00000004 + 0x30) + 0xa0) / (int)DAT_0048aab4[0x3a7]);
  if (local_50 < 0) {
    local_50 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)local_50) {
    local_50 = *DAT_0048aab4 + -1;
  }
  if (sVar8 < 0) {
    sVar8 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar8) {
    sVar8 = DAT_0048aab4[2] + -1;
  }
  iVar1 = (int)*(short *)(*(int *)(DAT_0048aab4 +
                                  (uint)(byte)(&DAT_00490720)
                                              [(short)(sVar8 * (short)*(undefined4 *)
                                                                       (DAT_0048aab4 + 0x25b6) +
                                                      local_50)] * 2 + 0x187) + 0x74);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  if ((*(short *)(*(int *)(DAT_0048aab4 +
                          (uint)(byte)(&DAT_00490720)
                                      [(short)(sVar8 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6)
                                              + local_50)] * 2 + 0x187) + 0x18) == 0xc &&
       (*(short *)(*(int *)(DAT_0048aab4 +
                           (uint)(byte)(&DAT_00490720)
                                       [(short)(sVar7 * (short)*(undefined4 *)
                                                                (DAT_0048aab4 + 0x25b6) + local_40)]
                           * 2 + 0x187) + 0x18) == 0xc &&
       (*(short *)(*(int *)(DAT_0048aab4 +
                           (uint)(byte)(&DAT_00490720)
                                       [(short)(sVar6 * (short)*(undefined4 *)
                                                                (DAT_0048aab4 + 0x25b6) + local_30)]
                           * 2 + 0x187) + 0x18) == 0xc &&
       (*(short *)(*(int *)(DAT_0048aab4 +
                           (uint)(byte)(&DAT_00490720)
                                       [(short)(sVar5 * (short)*(undefined4 *)
                                                                (DAT_0048aab4 + 0x25b6) + local_20)]
                           * 2 + 0x187) + 0x18) == 0xc &&
       *(short *)(*(int *)(DAT_0048aab4 +
                          (uint)(byte)(&DAT_00490720)
                                      [(short)(sVar4 + sVar3 * (short)*(undefined4 *)
                                                                       (DAT_0048aab4 + 0x25b6))] * 2
                          + 0x187) + 0x18) == 0xc)))) ||
     (iVar2 < *(short *)(in_stack_00000004 + 0x1f) + 0x6e)) {
    iVar2 = (int)*(short *)(in_stack_00000004 + 0x1f) >> 2;
  }
  else {
    iVar2 = (int)*(short *)(in_stack_00000004 + 0x1f);
  }
  return iVar2;
}

