/* Ghidra address: 00421cb8; FUN_00421cb8 */

void FUN_00421cb8(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 0xaf) == 1) {
    *(short *)(in_stack_00000004 + 0xb1) = *(short *)(in_stack_00000004 + 0xb1) + -1;
    if (*(short *)(in_stack_00000004 + 0xb1) == 0) {
      *(undefined2 *)(in_stack_00000004 + 0xaf) = 4;
    }
    FUN_00427d84();
  }
  else if (*(short *)(in_stack_00000004 + 0xaf) == 5) {
    *(short *)(in_stack_00000004 + 0xb1) = *(short *)(in_stack_00000004 + 0xb1) + 1;
    if (*(short *)(in_stack_00000004 + 0xb1) == 3) {
      *(undefined2 *)(in_stack_00000004 + 0xaf) = 0;
      FUN_00427d42();
    }
    FUN_00427d84();
  }
  else {
    if (*(short *)(in_stack_00000004 + 0xaf) == 2) {
      *(short *)(in_stack_00000004 + 0x70) = *(short *)(in_stack_00000004 + 0x70) + 1;
      if (*(short *)(in_stack_00000004 + 0x70) == *(short *)(in_stack_00000004 + 0xad)) {
        (**(code **)(*(int *)(DAT_00499d54 + 0x14) + 0x24))();
      }
      if (*(short *)(*(int *)(in_stack_00000004 + 0x68) + 4) == *(short *)(in_stack_00000004 + 0x70)
         ) {
        *(undefined2 *)(in_stack_00000004 + 0xaf) = 4;
        *(ushort *)(in_stack_00000004 + 0xaf) = *(ushort *)(in_stack_00000004 + 0xaf) | 3;
        *(undefined2 *)(in_stack_00000004 + 0x70) = 0;
        if (*(short *)(*(int *)(in_stack_00000004 + 0x68) + 4) <
            *(short *)(in_stack_00000004 + 0xad)) {
          (**(code **)(*(int *)(DAT_00499d54 + 0x14) + 0x24))();
        }
      }
    }
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 8;
    FUN_0041e4b4();
    uVar1 = FUN_00426a95();
    *(undefined4 *)(in_stack_00000004 + 100) = uVar1;
    FUN_00427d84();
  }
  return;
}

