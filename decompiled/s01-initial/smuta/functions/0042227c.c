/* Ghidra address: 0042227c; FUN_0042227c */

void FUN_0042227c(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000004;
  
  if ((*(char *)(in_stack_00000004 + 0x74) == '\x02') &&
     (*(short *)(in_stack_00000004 + 0x70) <= *(short *)(in_stack_00000004 + 0x83))) {
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 8;
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xfffd;
    FUN_00427d84();
    uVar1 = FUN_0040a830();
    if ((short)uVar1 == 0) {
      FUN_0040a7dc();
    }
    *(short *)(in_stack_00000004 + 0x70) = *(short *)(in_stack_00000004 + 0x70) + 1;
    iVar2 = (int)*(short *)(in_stack_00000004 + 0x83);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if (iVar2 >> 2 < (int)*(short *)(in_stack_00000004 + 0x70)) {
      *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x10;
      return;
    }
  }
  else {
    *(undefined1 *)(in_stack_00000004 + 0x74) = 1;
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x10;
    FUN_0040a7fc();
    *(byte *)(in_stack_00000004 + 0x21) = ~*(byte *)(in_stack_00000004 + 0x21);
    FUN_0040886c();
    *(int *)(in_stack_00000004 + 0x75) = *(int *)(in_stack_00000004 + 0x75) + -1;
    FUN_00427d42();
  }
  return;
}

