/* Ghidra address: 0041f61c; FUN_0041f61c */

void FUN_0041f61c(void)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int in_stack_00000004;
  short local_12;
  
  sVar4 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar5 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar5) {
    sVar5 = *DAT_0048aab4 + -1;
  }
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar4) {
    sVar4 = DAT_0048aab4[2] + -1;
  }
  sVar5 = sVar5 + sVar4 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
  if (*(short *)(in_stack_00000004 + 0x7a) == 0) {
    uVar2 = FUN_00411634();
    sVar4 = (short)uVar2;
  }
  else {
    uVar2 = FUN_00411634();
    sVar4 = (short)uVar2;
  }
  iVar3 = FUN_0041eed0();
  sVar4 = -(short)iVar3 - sVar4;
  iVar3 = *(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar5] * 2 + 0x187);
  if ((*(short *)(iVar3 + 0x18) == 7) && (*(short *)(iVar3 + 0x79) != 0)) {
    *(short *)(iVar3 + 0x79) = *(short *)(iVar3 + 0x79) + -1;
  }
  (&DAT_0048e518)[sVar5] = 0x20;
  if (*(short *)(in_stack_00000004 + 0x7a) == 0) {
    FUN_00412628();
  }
  else {
    FUN_00412628();
  }
  sVar5 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar6 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar6 < 0) {
    sVar6 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar6) {
    sVar6 = *DAT_0048aab4 + -1;
  }
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar5) {
    sVar5 = DAT_0048aab4[2] + -1;
  }
  sVar6 = sVar6 + sVar5 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
  if (*(short *)(*(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar6] * 2 + 0x187) + 0x18) ==
      7) {
    psVar1 = (short *)(*(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar6] * 2 + 0x187) +
                      0x79);
    *psVar1 = *psVar1 + 1;
  }
  if (*(short *)(in_stack_00000004 + 0x7a) == 0) {
    uVar2 = FUN_00411634();
    sVar5 = (short)uVar2;
  }
  else {
    uVar2 = FUN_00411634();
    sVar5 = (short)uVar2;
  }
  iVar3 = FUN_0041eed0();
  sVar5 = -(short)iVar3 - sVar5;
  *(int *)(in_stack_00000004 + 0x34) = *(int *)(in_stack_00000004 + 0x34) + 0x4b;
  if (*(int *)(in_stack_00000004 + 0x34) < (int)sVar4) {
    sVar4 = *(short *)(in_stack_00000004 + 0x34);
  }
  if (sVar5 <= sVar4) {
    *(int *)(in_stack_00000004 + 0x34) = (int)sVar5;
  }
  (&DAT_0048e518)[sVar6] = *(undefined1 *)(in_stack_00000004 + 0xb8);
  return;
}

