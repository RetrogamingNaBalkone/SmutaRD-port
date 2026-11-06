/* Ghidra address: 0041e39c; FUN_0041e39c */

void FUN_0041e39c(void)

{
  short sVar1;
  short sVar2;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  short in_stack_0000000c;
  
  sVar2 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar1 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar1) {
    sVar1 = *DAT_0048aab4 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar2) {
    sVar2 = DAT_0048aab4[2] + -1;
  }
  sVar1 = sVar2 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar1;
  if (in_stack_0000000c == 0) {
    (&DAT_0048e518)[sVar1] = in_stack_00000008;
  }
  else if (in_stack_0000000c == 1) {
    (&DAT_0048f61c)[sVar1] = in_stack_00000008;
  }
  else {
    (&DAT_00490720)[sVar1] = in_stack_00000008;
  }
  return;
}

