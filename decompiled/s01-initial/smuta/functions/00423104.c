/* Ghidra address: 00423104; FUN_00423104 */

undefined4 FUN_00423104(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    if (*(int *)(*(int *)(in_stack_00000004 + 0x2c) + 0x1c) != 0) {
      FUN_0041e4b4();
      FUN_0041da94();
    }
    (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x2c) + 0x14) + 4))();
    uVar2 = FUN_0041db7c();
    *(undefined4 *)(in_stack_00000004 + 100) = uVar2;
  }
  *(int *)(in_stack_00000004 + 0x50) =
       (int)(short)(**(short **)(in_stack_00000004 + 100) * *(short *)(in_stack_00000004 + 0x1d)) >>
       1;
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

