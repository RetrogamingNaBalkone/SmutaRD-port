/* Ghidra address: 00403f2c; FUN_00403f2c */

int FUN_00403f2c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x20);
  if ((iVar1 == 0) && (*(short *)(in_stack_00000004 + 0xe) == 8)) {
    iVar1 = 0x100;
  }
  return in_stack_00000004 + iVar1 * 4 + 0x28;
}

