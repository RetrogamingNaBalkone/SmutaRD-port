/* Ghidra address: 0042ba40; FUN_0042ba40 */

undefined4 FUN_0042ba40(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000004;
  
  if ((in_stack_00000004 == 0) || (*(short *)(in_stack_00000004 + 0x14) != (short)in_stack_00000004)
     ) {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(in_stack_00000004 + 0xc) != 0) {
      if ((*(int *)(in_stack_00000004 + 8) < 0) && (iVar2 = FUN_0042bad4(), iVar2 != 0)) {
        return 0xffffffff;
      }
      if ((*(byte *)(in_stack_00000004 + 0x12) & 4) != 0) {
        FUN_00431320();
      }
    }
    uVar1 = FUN_0042e178();
    *(undefined2 *)(in_stack_00000004 + 0x12) = 0;
    *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
    *(undefined4 *)(in_stack_00000004 + 8) = 0;
    *(undefined1 *)(in_stack_00000004 + 0x16) = 0xff;
    if (*(short *)(in_stack_00000004 + 0x10) != 0) {
      FUN_0042c478();
      FUN_0042e47c();
      *(undefined2 *)(in_stack_00000004 + 0x10) = 0;
    }
  }
  return uVar1;
}

