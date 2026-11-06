/* Ghidra address: 00429a45; FUN_00429a45 */

uint * FUN_00429a45(void)

{
  uint *puVar1;
  int in_FS_OFFSET;
  uint in_stack_00000004;
  
  puVar1 = FUN_00431428();
  if (puVar1 == (uint *)0x0) {
    if ((0x80 < in_stack_00000004) ||
       ((*(byte *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 4) & 1) != 0)) {
      FUN_00431fd4();
    }
    puVar1 = (uint *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 4);
    *puVar1 = *puVar1 | 1;
    return *(uint **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x28);
  }
  return puVar1;
}

