/* Ghidra address: 0041e2c4; FUN_0041e2c4 */

int FUN_0041e2c4(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  undefined2 *in_stack_00000008;
  
  FUN_00427be8();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436a30;
  *(undefined2 *)(in_stack_00000004 + 0x18) = *in_stack_00000008;
  *(undefined1 *)(in_stack_00000004 + 0x1a) = *(undefined1 *)(in_stack_00000008 + 1);
  *(undefined4 *)(in_stack_00000004 + 0x68) = *(undefined4 *)((int)in_stack_00000008 + 0xb);
  *(undefined2 *)(in_stack_00000004 + 0x1b) = *(undefined2 *)((int)in_stack_00000008 + 0x13);
  *(undefined4 *)(in_stack_00000004 + 100) = *(undefined4 *)((int)in_stack_00000008 + 7);
  *(undefined2 *)(in_stack_00000004 + 0x1d) = *(undefined2 *)((int)in_stack_00000008 + 3);
  *(undefined2 *)(in_stack_00000004 + 0x1f) = *(undefined2 *)((int)in_stack_00000008 + 5);
  *(undefined1 *)(in_stack_00000004 + 0x21) = *(undefined1 *)((int)in_stack_00000008 + 0x15);
  *(undefined4 *)(in_stack_00000004 + 0x6c) = *(undefined4 *)((int)in_stack_00000008 + 0xf);
  *(undefined2 *)(in_stack_00000004 + 0x2a) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x70) = 0;
  if ((*(byte *)(in_stack_00000004 + 0x1c) & 8) != 0) {
    if (**(short **)(in_stack_00000004 + 0x68) == 0) {
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 100) = uVar1;
      FUN_00427c8d();
    }
    else {
      FUN_0041e4b4();
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 100) = uVar1;
    }
  }
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

