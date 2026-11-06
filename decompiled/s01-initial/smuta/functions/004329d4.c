/* Ghidra address: 004329d4; FUN_004329d4 */

undefined2 * FUN_004329d4(void)

{
  int iVar1;
  uint *puVar2;
  undefined2 *in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000014;
  
  *in_stack_00000004 = 1;
  *(undefined4 *)(in_stack_00000004 + 7) = 0;
  *(int *)(in_stack_00000004 + 3) = in_stack_00000014 + in_stack_0000000c;
  iVar1 = FUN_00432ba4();
  *(int *)(in_stack_00000004 + 5) = iVar1;
  puVar2 = FUN_00431428();
  *(uint **)(in_stack_00000004 + 1) = puVar2;
  if (*(int *)(in_stack_00000004 + 1) == 0) {
    FUN_004292ec();
  }
  FUN_00428fe4();
  FUN_00428fe4();
  *(undefined1 *)(*(int *)(in_stack_00000004 + 1) + in_stack_00000014 + in_stack_0000000c) = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

