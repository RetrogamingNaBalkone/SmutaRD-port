/* Ghidra address: 0042b5de; FUN_0042b5de */

undefined4 FUN_0042b5de(void)

{
  undefined4 uVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18);
  if (in_stack_00000004 != 0) {
    *(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18) = in_stack_00000004;
  }
  return uVar1;
}

