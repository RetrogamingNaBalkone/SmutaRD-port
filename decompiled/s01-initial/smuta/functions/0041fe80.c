/* Ghidra address: 0041fe80; FUN_0041fe80 */

undefined4 FUN_0041fe80(void)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  int in_stack_00000004;
  short in_stack_00000008;
  
  sVar3 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar1 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar1) {
    sVar1 = *DAT_0048aab4 + -1;
  }
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar3) {
    sVar3 = DAT_0048aab4[2] + -1;
  }
  sVar1 = (short)((int)sVar3 * *(int *)(DAT_0048aab4 + 0x25b6)) + sVar1;
  if (in_stack_00000008 == 0) {
    uVar2 = *(undefined4 *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048e518)[sVar1] * 2 + 0x187);
  }
  else if (in_stack_00000008 == 1) {
    uVar2 = *(undefined4 *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar1] * 2 + 0x187);
  }
  else {
    uVar2 = *(undefined4 *)(DAT_0048aab4 + (uint)(byte)(&DAT_00490720)[sVar1] * 2 + 0x187);
  }
  return uVar2;
}

