/* Ghidra address: 004088a8; FUN_004088a8 */

void FUN_004088a8(void)

{
  undefined2 uVar1;
  int *piVar2;
  int in_stack_00000004;
  
  if ((-1 < *(int *)(in_stack_00000004 + 0x95)) &&
     (*(int *)(in_stack_00000004 + 0x95) = *(int *)(in_stack_00000004 + 0x95) + -1,
     *(int *)(in_stack_00000004 + 0x95) == 0)) {
    FUN_0040afbc();
    piVar2 = DAT_0044f640;
    uVar1 = DAT_00445f8e;
    *(undefined2 *)(DAT_0044f640 + 8) = 0x28;
    *(undefined2 *)((int)piVar2 + 0x22) = uVar1;
    *(undefined2 *)(piVar2 + 4) = DAT_00445f8e;
    (**(code **)(*piVar2 + 0x3c))();
    FUN_00401ae4();
  }
  return;
}

