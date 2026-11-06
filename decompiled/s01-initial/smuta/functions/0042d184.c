/* Ghidra address: 0042d184; FUN_0042d184 */

void FUN_0042d184(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x50) != 0) {
    iVar1 = (**(code **)(in_stack_00000004 + 0x54))();
    if (iVar1 == 0) {
      *(undefined4 *)(in_stack_00000004 + 0x60) = 1;
    }
    *(undefined4 *)(in_stack_00000004 + 0x50) = 0;
  }
  return;
}

