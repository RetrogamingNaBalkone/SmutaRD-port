/* Ghidra address: 0042f47c; FUN_0042f47c */

undefined4 FUN_0042f47c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_004319bc();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *(int *)(in_stack_00000004 + 8) = iVar1;
  *(int *)(in_stack_00000004 + 0xc) = iVar1 + 0x400;
  *(undefined2 *)(in_stack_00000004 + 4) = 1;
  return 1;
}

