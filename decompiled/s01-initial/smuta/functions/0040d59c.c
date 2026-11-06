/* Ghidra address: 0040d59c; FUN_0040d59c */

undefined4 FUN_0040d59c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_0040d47c();
  if ((*(byte *)(*(int *)(in_stack_00000004 + 2) + 0x18 + iVar1 * 0x1e) & 2) != 0) {
    return *(undefined4 *)(*(int *)(in_stack_00000004 + 2) + 0x1a + iVar1 * 0x1e);
  }
  return 0;
}

