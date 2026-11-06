/* Ghidra address: 00429a94; FUN_00429a94 */

void FUN_00429a94(void)

{
  uint *puVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  if (in_stack_00000004 == *(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x28)) {
    puVar1 = (uint *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
    return;
  }
  FUN_00431320();
  return;
}

