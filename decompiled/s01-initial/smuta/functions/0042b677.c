/* Ghidra address: 0042b677; FUN_0042b677 */

undefined4 FUN_0042b677(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000004 == 0) {
    return 0;
  }
  return *(undefined4 *)
          (*(int *)((*(int *)(in_stack_00000004 + in_stack_00000008) -
                    *(int *)(*(int *)(in_stack_00000004 + in_stack_00000008) + -4)) + -0xc) + 0x20);
}

