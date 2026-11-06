/* Ghidra address: 0042b4fa; FUN_0042b4fa */

undefined4 FUN_0042b4fa(void)

{
  undefined4 uVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x14);
  if (in_stack_00000004 != 0) {
    *(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x14) = in_stack_00000004;
  }
  return uVar1;
}

