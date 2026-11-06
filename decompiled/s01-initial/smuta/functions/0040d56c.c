/* Ghidra address: 0040d56c; FUN_0040d56c */

void FUN_0040d56c(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  undefined4 in_stack_0000000c;
  
  iVar2 = FUN_0040d47c();
  iVar1 = *(int *)(in_stack_00000004 + 2);
  *(undefined2 *)(iVar1 + 0x18 + iVar2 * 0x1e) = 2;
  *(undefined4 *)(iVar1 + 0x1a + iVar2 * 0x1e) = in_stack_0000000c;
  return;
}

