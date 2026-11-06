/* Ghidra address: 00401b68; FUN_00401b68 */

undefined4 FUN_00401b68(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 4) != 0) {
    *(undefined4 *)(in_stack_00000004 + 4) = *(undefined4 *)(*(int *)(in_stack_00000004 + 4) + 0x12)
    ;
  }
  return *(undefined4 *)(in_stack_00000004 + 4);
}

