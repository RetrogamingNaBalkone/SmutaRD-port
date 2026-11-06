/* Ghidra address: 00410808; FUN_00410808 */

void __stdcall FUN_00410808(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x23);
  *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) & 0xbbe7dbc3;
  if ((((uVar2 & 0x400) != 0) || ((uVar2 & 0x10) != 0)) || ((uVar2 & 0x20) != 0)) {
    if (*(short *)(param_1 + 0xa1) < 1) {
      *(short *)(param_1 + 0x1f) = *(short *)(param_1 + 0x1f) - *(short *)(param_1 + 0x7d);
      *(short *)(param_1 + 0xa1) = *(short *)(param_1 + 0xa1) + -1;
      if (*(short *)(param_1 + 0xa1) < -8) {
        *(undefined2 *)(param_1 + 0xa1) = 1;
      }
    }
    else {
      *(short *)(param_1 + 0x1f) = *(short *)(param_1 + 0x1f) + *(short *)(param_1 + 0x7d);
      *(short *)(param_1 + 0xa1) = *(short *)(param_1 + 0xa1) + 1;
      if (8 < *(short *)(param_1 + 0xa1)) {
        *(undefined2 *)(param_1 + 0xa1) = 0xffff;
      }
    }
  }
  if (((uVar2 & 4) == 0) && ((uVar2 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xab) = 0;
  }
  else {
    *(int *)(param_1 + 0xab) = *(int *)(param_1 + 0xab) + 0x29;
    if (0xfa < *(int *)(param_1 + 0xab)) {
      *(undefined4 *)(param_1 + 0xab) = 0xfa;
    }
  }
  if ((((uVar2 & 0x400) == 0) && ((uVar2 & 0x10) == 0)) &&
     (((uVar2 & 0x20) == 0 && (((uVar2 & 0x100000) == 0 && ((uVar2 & 0x80000) == 0)))))) {
    piVar1 = (int *)(param_1 + 0xa7);
    *piVar1 = *piVar1 + -0x29;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0xa7) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0xa7) = *(int *)(param_1 + 0xa7) + 0x29;
    if (0xfa < *(int *)(param_1 + 0xa7)) {
      *(undefined4 *)(param_1 + 0xa7) = 0xfa;
    }
    *(uint *)(param_1 + 0xb1) = uVar2;
  }
  FUN_005481cd();
  return;
}

