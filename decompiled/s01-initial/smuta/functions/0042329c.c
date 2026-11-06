/* Ghidra address: 0042329c; FUN_0042329c */

undefined4 FUN_0042329c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_0042319c();
  if ((*(int *)(in_stack_00000004 + 0x13c) <= iVar1) &&
     (*(char *)(in_stack_00000004 + 0xfe) == '\0')) {
    return 0;
  }
  *(undefined1 *)(in_stack_00000004 + 0xfe) = 0;
  return 1;
}

