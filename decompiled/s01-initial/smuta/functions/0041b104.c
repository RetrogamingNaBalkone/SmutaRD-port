/* Ghidra address: 0041b104; FUN_0041b104 */

void FUN_0041b104(void)

{
  int *in_stack_00000004;
  
  if ((*in_stack_00000004 == 0) && (in_stack_00000004[2] != 0)) {
    FUN_0041b104();
  }
  if ((*(byte *)(in_stack_00000004[3] + 0x16) & 1) != 0) {
    (**(code **)(*(int *)in_stack_00000004[3] + 8))();
  }
  if (in_stack_00000004[1] != 0) {
    FUN_0041b104();
  }
  return;
}

