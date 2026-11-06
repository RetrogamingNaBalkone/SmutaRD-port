/* Ghidra address: 00423cf8; FUN_00423cf8 */

void FUN_00423cf8(void)

{
  int iVar1;
  int in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  
  if ((*(short *)(in_stack_00000004 + 0x12e) != 0) && ((*in_stack_00000008 & 0x40000) != 0)) {
    *in_stack_00000008 = *in_stack_00000008 & 0xfffbffff;
    *(short *)(in_stack_00000004 + 0x12e) =
         *(short *)(in_stack_00000004 + 0x12e) - *(short *)(in_stack_0000000c + 0x7c);
    *(undefined1 *)(in_stack_00000004 + 0xfe) = 1;
    if (*(short *)(in_stack_00000004 + 0x132) == 0) {
      iVar1 = *(int *)(in_stack_00000004 + 0x118);
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      iVar1 = *(int *)(iVar1 + 0x34);
      *(undefined2 *)(iVar1 + 0x110) = *(undefined2 *)(iVar1 + 0x112);
    }
    if (*(short *)(in_stack_00000004 + 0x12e) < 1) {
      *(undefined2 *)(in_stack_00000004 + 0x12e) = 0;
      FUN_0041e5f0();
    }
  }
  return;
}

