/* Ghidra address: 00421be4; FUN_00421be4 */

void FUN_00421be4(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 0xaf) == 0) {
    *(undefined2 *)(in_stack_00000004 + 0x70) = 0;
    *(undefined2 *)(in_stack_00000004 + 0xaf) = 1;
    *(undefined2 *)(in_stack_00000004 + 0xb5) = 0;
    *(undefined2 *)(in_stack_00000004 + 0xb3) = 0;
    FUN_0041e4b4();
    uVar1 = FUN_004269f7();
    *(undefined4 *)(in_stack_00000004 + 100) = uVar1;
    FUN_00427c8d();
    *(undefined2 *)(in_stack_00000004 + 0xb1) = 2;
  }
  return;
}

