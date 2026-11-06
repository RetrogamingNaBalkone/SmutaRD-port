/* Ghidra address: 004093b0; FUN_004093b0 */

void FUN_004093b0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short in_stack_00000004;
  int *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  
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
  for (; in_stack_00000004 != 0; in_stack_00000004 = in_stack_00000004 + -1) {
    iVar3 = in_stack_00000008[2];
    iVar4 = (int)in_stack_00000010;
    in_stack_00000008[2] =
         *(int *)(&DAT_00446554 + iVar4 * 4) * iVar3 -
         *in_stack_00000008 * *(int *)(&DAT_00445fb0 + iVar4 * 4) >> 0xf;
    piVar1 = in_stack_00000008 + 1;
    *in_stack_00000008 =
         *in_stack_00000008 * *(int *)(&DAT_00446554 + iVar4 * 4) +
         *(int *)(&DAT_00445fb0 + iVar4 * 4) * iVar3 >> 0xf;
    piVar2 = in_stack_00000008 + 2;
    in_stack_00000008 = in_stack_00000008 + 3;
    iVar3 = *piVar1;
    iVar4 = (int)in_stack_0000000c;
    *piVar1 = *(int *)(&DAT_00446554 + iVar4 * 4) * iVar3 -
              *piVar2 * *(int *)(&DAT_00445fb0 + iVar4 * 4) >> 0xf;
    *piVar2 = *piVar2 * *(int *)(&DAT_00446554 + iVar4 * 4) +
              *(int *)(&DAT_00445fb0 + iVar4 * 4) * iVar3 >> 0xf;
  }
  return;
}

