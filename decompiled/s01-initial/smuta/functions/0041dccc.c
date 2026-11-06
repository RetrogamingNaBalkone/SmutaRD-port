/* Ghidra address: 0041dccc; FUN_0041dccc */

void FUN_0041dccc(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x2c) == 0) {
    if (**(short **)(in_stack_00000004 + 0x1c) == 0) {
      do {
        iVar1 = FUN_00426946();
        *(int *)(in_stack_00000004 + 0x20) = iVar1;
      } while (iVar1 == 0);
    }
    else {
      do {
        iVar1 = FUN_00426946();
        *(int *)(in_stack_00000004 + 0x20) = iVar1;
      } while (iVar1 == 0);
    }
    FUN_00427d84();
  }
  else {
    FUN_00427d42();
  }
  return;
}

