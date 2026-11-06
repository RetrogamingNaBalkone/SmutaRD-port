/* Ghidra address: 0042369c; FUN_0042369c */

void FUN_0042369c(void)

{
  short sVar1;
  int in_stack_00000004;
  
  sVar1 = *(short *)(in_stack_00000004 + 0x136);
  *(short *)(in_stack_00000004 + 0x136) = *(short *)(in_stack_00000004 + 0x136) + -1;
  if (0 < sVar1) {
    (**(code **)(*(int *)(in_stack_00000004 + 0x14) + 0x24))();
    *(int *)(in_stack_00000004 + 0x138) = *(short *)(in_stack_00000004 + 0x134) * 0x18;
  }
  return;
}

