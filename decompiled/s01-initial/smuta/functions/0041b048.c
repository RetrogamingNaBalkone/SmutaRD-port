/* Ghidra address: 0041b048; FUN_0041b048 */

void FUN_0041b048(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = in_stack_00000008;
  while (iVar2 = iVar2 >> 1, iVar3 = iVar2, 0 < iVar2) {
    for (; iVar3 < in_stack_00000008; iVar3 = iVar3 + 1) {
      iVar4 = iVar3 - iVar2;
      while ((-1 < iVar4 &&
             (*(short *)(*(int *)(in_stack_00000004 + iVar4 * 4) + 0x17) <
              *(short *)(*(int *)(in_stack_00000004 + (iVar2 + iVar4) * 4) + 0x17)))) {
        uVar1 = *(undefined4 *)(in_stack_00000004 + iVar4 * 4);
        *(undefined4 *)(in_stack_00000004 + iVar4 * 4) =
             *(undefined4 *)(in_stack_00000004 + (iVar2 + iVar4) * 4);
        *(undefined4 *)(in_stack_00000004 + (iVar2 + iVar4) * 4) = uVar1;
        iVar4 = iVar4 - iVar2;
      }
    }
  }
  return;
}

