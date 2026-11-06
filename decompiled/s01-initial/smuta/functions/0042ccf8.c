/* Ghidra address: 0042ccf8; FUN_0042ccf8 */

undefined4 FUN_0042ccf8(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  int in_stack_0000000c;
  uint in_stack_00000010;
  
  if (((*(short *)(in_stack_00000004 + 0x14) == (short)in_stack_00000004) && (in_stack_0000000c < 3)
      ) && (in_stack_00000010 < 0x80000000)) {
    if (*(int *)(in_stack_00000004 + 8) != 0) {
      FUN_0042c0a4();
    }
    uVar1 = FUN_0042b9c0();
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

