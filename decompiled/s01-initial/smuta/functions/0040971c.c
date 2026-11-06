/* Ghidra address: 0040971c; FUN_0040971c */

void FUN_0040971c(void)

{
  int iVar1;
  int in_stack_00000004;
  undefined2 in_stack_0000000c;
  
  if (*(short *)(in_stack_00000004 + 4) != 0) {
    FUN_00427b9f();
  }
  iVar1 = thunk_FUN_0042e284();
  *(short *)(in_stack_00000004 + 6) = (short)iVar1;
  if ((short)iVar1 == -1) {
    FUN_00427b9f();
  }
  *(undefined2 *)(in_stack_00000004 + 4) = in_stack_0000000c;
  return;
}

