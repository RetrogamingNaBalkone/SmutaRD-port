/* Ghidra address: 00409554; FUN_00409554 */

void FUN_00409554(void)

{
  int iVar1;
  ushort uVar2;
  ushort in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  uVar2 = 0;
  if (in_stack_00000004 != 0) {
    do {
      iVar1 = in_stack_00000008[2];
      if (in_stack_00000008[2] < in_stack_00000010) {
        iVar1 = in_stack_00000010;
      }
      if (0 < iVar1) {
        *in_stack_00000008 = (*in_stack_00000008 * in_stack_0000000c) / (iVar1 + 1);
        in_stack_00000008[1] = (in_stack_00000008[1] * in_stack_0000000c) / (iVar1 + 1);
        in_stack_00000008 = in_stack_00000008 + 3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < in_stack_00000004);
  }
  return;
}

