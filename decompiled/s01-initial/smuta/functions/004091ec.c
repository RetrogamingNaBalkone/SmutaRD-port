/* Ghidra address: 004091ec; FUN_004091ec */

void FUN_004091ec(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short in_stack_00000004;
  int *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  short in_stack_00000014;
  
  if (0x167 < in_stack_0000000c) {
    in_stack_0000000c = in_stack_0000000c + -0x168;
  }
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = in_stack_0000000c + 0x168;
  }
  if (0x167 < in_stack_00000010) {
    in_stack_00000010 = in_stack_00000010 + -0x168;
  }
  if (in_stack_00000010 < 0) {
    in_stack_00000010 = in_stack_00000010 + 0x168;
  }
  if (0x167 < in_stack_00000014) {
    in_stack_00000014 = in_stack_00000014 + -0x168;
  }
  if (in_stack_00000014 < 0) {
    in_stack_00000014 = in_stack_00000014 + 0x168;
  }
  for (; in_stack_00000004 != 0; in_stack_00000004 = in_stack_00000004 + -1) {
    piVar1 = in_stack_00000008 + 2;
    iVar2 = in_stack_00000008[1];
    iVar3 = (int)in_stack_0000000c;
    in_stack_00000008[1] =
         *(int *)(&DAT_00446554 + iVar3 * 4) * iVar2 - *piVar1 * *(int *)(&DAT_00445fb0 + iVar3 * 4)
         >> 0xf;
    *piVar1 = *piVar1 * *(int *)(&DAT_00446554 + iVar3 * 4) +
              *(int *)(&DAT_00445fb0 + iVar3 * 4) * iVar2 >> 0xf;
    iVar2 = in_stack_00000008[2];
    iVar3 = (int)in_stack_00000010;
    in_stack_00000008[2] =
         *(int *)(&DAT_00446554 + iVar3 * 4) * iVar2 -
         *in_stack_00000008 * *(int *)(&DAT_00445fb0 + iVar3 * 4) >> 0xf;
    *in_stack_00000008 =
         *in_stack_00000008 * *(int *)(&DAT_00446554 + iVar3 * 4) +
         *(int *)(&DAT_00445fb0 + iVar3 * 4) * iVar2 >> 0xf;
    piVar1 = in_stack_00000008 + 1;
    iVar2 = *in_stack_00000008;
    iVar3 = (int)in_stack_00000014;
    *in_stack_00000008 =
         *(int *)(&DAT_00446554 + iVar3 * 4) * iVar2 - *piVar1 * *(int *)(&DAT_00445fb0 + iVar3 * 4)
         >> 0xf;
    *piVar1 = *piVar1 * *(int *)(&DAT_00446554 + iVar3 * 4) +
              *(int *)(&DAT_00445fb0 + iVar3 * 4) * iVar2 >> 0xf;
    in_stack_00000008 = in_stack_00000008 + 3;
  }
  return;
}

