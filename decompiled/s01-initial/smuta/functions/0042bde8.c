/* Ghidra address: 0042bde8; FUN_0042bde8 */

int FUN_0042bde8(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  
  uVar1 = FUN_0042bd1c();
  *(short *)(in_stack_00000004 + 0x12) = (short)uVar1;
  if ((short)uVar1 == 0) {
LAB_0042be33:
    *(undefined1 *)(in_stack_00000004 + 0x16) = 0xff;
    *(undefined2 *)(in_stack_00000004 + 0x12) = 0;
    in_stack_00000004 = 0;
  }
  else {
    if (*(char *)(in_stack_00000004 + 0x16) < '\0') {
      iVar2 = FUN_0042e284();
      *(char *)(in_stack_00000004 + 0x16) = (char)iVar2;
      if ((char)iVar2 < '\0') goto LAB_0042be33;
    }
    if ((*(byte *)((int)&DAT_00437f28 + *(char *)(in_stack_00000004 + 0x16) * 4 + 1) & 0x20) != 0) {
      *(ushort *)(in_stack_00000004 + 0x12) = *(ushort *)(in_stack_00000004 + 0x12) | 0x200;
    }
    iVar2 = FUN_0042ccf8();
    if (iVar2 == 0) {
      *(undefined2 *)(in_stack_00000004 + 0x10) = 0;
    }
    else {
      FUN_0042ba40();
      in_stack_00000004 = 0;
    }
  }
  return in_stack_00000004;
}

