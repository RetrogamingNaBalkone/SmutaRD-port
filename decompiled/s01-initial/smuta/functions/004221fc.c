/* Ghidra address: 004221fc; FUN_004221fc */

undefined4 FUN_004221fc(void)

{
  ushort *puVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 100) == 0) {
    FUN_00427b9f();
  }
  else if (*(short *)(in_stack_00000004 + 0x81) != 10) {
    FUN_00409f40();
  }
  if ((*(byte *)(in_stack_00000004 + 0x1b) & 1) == 0) {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 & 0xfffe;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 | 1;
  }
  if ((*(byte *)(in_stack_00000004 + 0x1b) & 8) == 0) {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 & 0xfff7;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 | 8;
  }
  return *(undefined4 *)(in_stack_00000004 + 100);
}

