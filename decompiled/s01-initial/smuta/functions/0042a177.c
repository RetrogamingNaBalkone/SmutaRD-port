/* Ghidra address: 0042a177; FUN_0042a177 */

void FUN_0042a177(void)

{
  undefined4 uVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + 0x44) != '\0') {
    if ((*(byte *)(in_stack_00000004 + 0x1a) & 2) != 0) {
      uVar1 = *DAT_0049aa2c;
      FUN_0042a125();
      *DAT_0049aa2c = uVar1;
    }
    *(undefined1 *)(in_stack_00000004 + 0x44) = 0;
  }
  if (*(char *)(in_stack_00000004 + 0x45) != '\0') {
    if (((*(byte *)(*(int *)(in_stack_00000004 + 0x3c) + 4) & 2) != 0) &&
       ((*(byte *)(*(int *)(in_stack_00000004 + 0x3c) + 0xc) & 2) != 0)) {
      FUN_0042a125();
    }
    *(undefined1 *)(in_stack_00000004 + 0x45) = 0;
  }
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    FUN_00429684();
  }
  return;
}

