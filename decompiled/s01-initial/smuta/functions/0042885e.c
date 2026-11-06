/* Ghidra address: 0042885e; FUN_0042885e */

void FUN_0042885e(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  do {
    if (in_stack_00000008 == *(int *)(in_stack_00000004 + 0x10 + iVar1 * 0x14)) {
      *(undefined4 *)(in_stack_00000004 + 0x14 + iVar1 * 0x14) = 1;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}

