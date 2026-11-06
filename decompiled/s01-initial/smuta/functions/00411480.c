/* Ghidra address: 00411480; FUN_00411480 */

undefined4 FUN_00411480(void)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000004;
  int *in_stack_00000008;
  short in_stack_0000000c;
  int in_stack_00000010;
  short local_74;
  short local_72;
  int local_8;
  
  iVar7 = *in_stack_00000008;
  local_8 = in_stack_00000008[2];
  FUN_0041da64();
  if (in_stack_00000010 == 0) {
    iVar6 = *(int *)(&DAT_00445fb0 + local_72 * 4) * in_stack_00000008[6];
    iVar5 = *(int *)(&DAT_00446554 + local_72 * 4) * in_stack_00000008[6];
  }
  else {
    FUN_0041da64();
    iVar1 = in_stack_00000008[6];
    iVar5 = (*(int *)(&DAT_00446554 + local_72 * 4) * *(int *)(&DAT_00446554 + local_74 * 4) >> 0xf)
            * iVar1;
    iVar6 = (*(int *)(&DAT_00445fb0 + local_72 * 4) * *(int *)(&DAT_00446554 + local_74 * 4) >> 0xf)
            * iVar1;
    in_stack_00000008[1] =
         in_stack_00000008[1] + (*(int *)(&DAT_00445fb0 + local_74 * 4) * iVar1 >> 0xf);
  }
  local_8 = local_8 - (iVar5 >> 0xf);
  iVar7 = (iVar6 >> 0xf) + iVar7;
  sVar4 = (short)(local_8 / (int)DAT_0048aab4[0x3a7]);
  sVar2 = (short)(iVar7 / (int)DAT_0048aab4[0x3a7]);
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar2) {
    sVar2 = *DAT_0048aab4 + -1;
  }
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar4) {
    sVar4 = DAT_0048aab4[2] + -1;
  }
  sVar2 = sVar4 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar2;
  *in_stack_00000008 = iVar7;
  in_stack_00000008[2] = local_8;
  if (in_stack_0000000c == 0) {
    uVar3 = *(undefined4 *)(in_stack_00000004 + 0x30e + (uint)(byte)(&DAT_0048e518)[sVar2] * 4);
  }
  else if (in_stack_0000000c == 1) {
    uVar3 = *(undefined4 *)(in_stack_00000004 + 0x30e + (uint)(byte)(&DAT_0048f61c)[sVar2] * 4);
  }
  else {
    uVar3 = *(undefined4 *)(in_stack_00000004 + 0x30e + (uint)(byte)(&DAT_00490720)[sVar2] * 4);
  }
  return uVar3;
}

