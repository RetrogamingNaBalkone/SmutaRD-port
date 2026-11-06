/* Ghidra address: 00420fb4; FUN_00420fb4 */

void FUN_00420fb4(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 200 + *(short *)(in_stack_00000004 + 0x118) * 4) == 0) {
    FUN_00427d42();
    return;
  }
  if (*(short *)(*(int *)(in_stack_00000004 + 200 + *(short *)(in_stack_00000004 + 0x118) * 4) +
                0xaf) == 0) {
    *(short *)(in_stack_00000004 + 0x118) = *(short *)(in_stack_00000004 + 0x11a);
    if (*(short *)(in_stack_00000004 + 0x11a) != 0) {
      FUN_00421be4();
      FUN_0040895c();
    }
    FUN_00427d42();
  }
  return;
}

