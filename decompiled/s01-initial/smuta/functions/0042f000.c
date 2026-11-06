/* Ghidra address: 0042f000; FUN_0042f000 */

void FUN_0042f000(void)

{
  int in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  *(undefined2 *)(in_stack_00000004 + 0x30) = 0;
  if (in_stack_0000000c == 0) {
    FUN_00429114();
  }
  else if (in_stack_0000000c < 0) {
    *(ushort *)(in_stack_00000004 + 0x30) = *(ushort *)(in_stack_00000004 + 0x30) | 4;
  }
  FUN_0042f678();
  if (in_stack_00000010 == 0) {
    FUN_0042f6e0();
  }
  else {
    FUN_0042f714();
    FUN_0042f6e0();
  }
  *(undefined4 *)(in_stack_00000004 + 0x28) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x2c) = 0;
  return;
}

