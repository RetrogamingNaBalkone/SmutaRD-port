/* Ghidra address: 00422ab0; FUN_00422ab0 */

void FUN_00422ab0(void)

{
  int *piVar1;
  int in_stack_00000004;
  
  if (*(short *)(*(int *)(in_stack_00000004 + 0x34) + 0x12e) < 1) {
    FUN_0041e5f0();
    return;
  }
  piVar1 = (int *)(in_stack_00000004 + 0x3c);
  *piVar1 = *piVar1 + -0x29;
  if (*piVar1 < 0) {
    FUN_0041e5f0();
  }
  return;
}

