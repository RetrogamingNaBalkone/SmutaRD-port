/* Ghidra address: 0040d5d0; FUN_0040d5d0 */

int FUN_0040d5d0(void)

{
  int iVar1;
  int in_stack_00000004;
  undefined4 *in_stack_0000000c;
  
  iVar1 = FUN_0040d47c();
  (**(code **)(*(int *)(in_stack_00000004 + 6) + 0x14))();
  *in_stack_0000000c = *(undefined4 *)(*(int *)(in_stack_00000004 + 2) + 0x10 + iVar1 * 0x1e);
  return in_stack_00000004 + 6;
}

