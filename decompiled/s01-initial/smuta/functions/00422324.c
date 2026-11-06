/* Ghidra address: 00422324; FUN_00422324 */

void FUN_00422324(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 0x79) < 1) {
    if ((*(char *)(in_stack_00000004 + 0x74) == '\x01') &&
       (0 < *(short *)(in_stack_00000004 + 0x70))) {
      *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xffef;
      *(short *)(in_stack_00000004 + 0x70) = *(short *)(in_stack_00000004 + 0x70) + -1;
      FUN_00427d84();
      uVar1 = FUN_0040a830();
      if ((short)uVar1 == 0) {
        FUN_0040a7dc();
        return;
      }
    }
    else {
      *(undefined1 *)(in_stack_00000004 + 0x74) = 2;
      *(undefined2 *)(in_stack_00000004 + 0x70) = 0;
      *(undefined2 *)(in_stack_00000004 + 0x1b) = *(undefined2 *)(in_stack_00000004 + 0x8d);
      FUN_0040a7fc();
      *(byte *)(in_stack_00000004 + 0x21) = ~*(byte *)(in_stack_00000004 + 0x21);
      *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xfff7;
      if ((*(byte *)(in_stack_00000004 + 0x8d) & 8) == 0) {
        *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 2;
      }
      FUN_0040886c();
      *(int *)(in_stack_00000004 + 0x75) = *(int *)(in_stack_00000004 + 0x75) + -1;
      FUN_00427d42();
    }
  }
  return;
}

