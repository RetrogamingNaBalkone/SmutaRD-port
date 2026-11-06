/* Ghidra address: 0041ebec; FUN_0041ebec */

void FUN_0041ebec(void)

{
  int *piVar1;
  uint uVar2;
  int in_stack_00000004;
  
  uVar2 = *(uint *)(in_stack_00000004 + 0x22);
  *(uint *)(in_stack_00000004 + 0x22) = *(uint *)(in_stack_00000004 + 0x22) & 0xbbe7dbc3;
  if ((((uVar2 & 0x400) != 0) || ((uVar2 & 0x10) != 0)) || ((uVar2 & 0x20) != 0)) {
    if (*(short *)(in_stack_00000004 + 0xa0) < 1) {
      *(short *)(in_stack_00000004 + 0x1f) =
           *(short *)(in_stack_00000004 + 0x1f) - *(short *)(in_stack_00000004 + 0x7c);
      *(short *)(in_stack_00000004 + 0xa0) = *(short *)(in_stack_00000004 + 0xa0) + -1;
      if (*(short *)(in_stack_00000004 + 0xa0) < -8) {
        *(undefined2 *)(in_stack_00000004 + 0xa0) = 1;
      }
    }
    else {
      *(short *)(in_stack_00000004 + 0x1f) =
           *(short *)(in_stack_00000004 + 0x1f) + *(short *)(in_stack_00000004 + 0x7c);
      *(short *)(in_stack_00000004 + 0xa0) = *(short *)(in_stack_00000004 + 0xa0) + 1;
      if (8 < *(short *)(in_stack_00000004 + 0xa0)) {
        *(undefined2 *)(in_stack_00000004 + 0xa0) = 0xffff;
      }
    }
  }
  if (((uVar2 & 4) == 0) && ((uVar2 & 8) == 0)) {
    *(undefined4 *)(in_stack_00000004 + 0xaa) = 0;
  }
  else {
    *(int *)(in_stack_00000004 + 0xaa) = *(int *)(in_stack_00000004 + 0xaa) + 0x29;
    if (0xfa < *(int *)(in_stack_00000004 + 0xaa)) {
      *(undefined4 *)(in_stack_00000004 + 0xaa) = 0xfa;
    }
  }
  if ((((uVar2 & 0x400) == 0) && ((uVar2 & 0x10) == 0)) &&
     (((uVar2 & 0x20) == 0 && (((uVar2 & 0x100000) == 0 && ((uVar2 & 0x80000) == 0)))))) {
    piVar1 = (int *)(in_stack_00000004 + 0xa6);
    *piVar1 = *piVar1 + -0x29;
    if (*piVar1 < 0) {
      *(undefined4 *)(in_stack_00000004 + 0xa6) = 0;
    }
  }
  else {
    *(int *)(in_stack_00000004 + 0xa6) = *(int *)(in_stack_00000004 + 0xa6) + 0x29;
    if (0xfa < *(int *)(in_stack_00000004 + 0xa6)) {
      *(undefined4 *)(in_stack_00000004 + 0xa6) = 0xfa;
    }
    *(uint *)(in_stack_00000004 + 0xb0) = uVar2;
  }
  FUN_004a3145();
  return;
}

