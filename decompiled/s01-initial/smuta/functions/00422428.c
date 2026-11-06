/* Ghidra address: 00422428; FUN_00422428 */

void FUN_00422428(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if ((int)*(short *)(in_stack_00000004 + 0x70) ==
      *(short *)(*(int *)(in_stack_00000004 + 0x68) + 4) + -1) {
    FUN_00427d42();
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x10;
    return;
  }
  do {
    iVar1 = FUN_00426946();
    *(int *)(in_stack_00000004 + 100) = iVar1;
  } while (iVar1 == 0);
  FUN_00427d84();
  return;
}

