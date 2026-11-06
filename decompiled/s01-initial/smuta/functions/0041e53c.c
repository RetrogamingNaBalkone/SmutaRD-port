/* Ghidra address: 0041e53c; FUN_0041e53c */

undefined4 FUN_0041e53c(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 100) == 0) {
    FUN_00427b9f();
  }
  if (((*(byte *)(in_stack_00000004 + 0x1c) & 8) != 0) &&
     (**(short **)(in_stack_00000004 + 0x68) != 0)) {
    FUN_0041e4b4();
    uVar2 = FUN_004269f7();
    *(undefined4 *)(in_stack_00000004 + 100) = uVar2;
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

