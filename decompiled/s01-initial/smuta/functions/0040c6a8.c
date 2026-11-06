/* Ghidra address: 0040c6a8; FUN_0040c6a8 */

void FUN_0040c6a8(void)

{
  uint *puVar1;
  undefined2 in_stack_00000008;
  undefined2 in_stack_0000000c;
  
  puVar1 = FUN_00430cec();
  *(undefined2 *)puVar1 = in_stack_00000008;
  *(undefined2 *)((int)puVar1 + 2) = in_stack_0000000c;
  return;
}

