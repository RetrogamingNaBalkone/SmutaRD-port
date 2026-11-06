/* Ghidra address: 004320b4; FUN_004320b4 */

undefined4 FUN_004320b4(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *in_stack_00000004;
  int in_stack_0000000c;
  
  uVar4 = 0;
  iVar3 = *in_stack_00000004;
  if (iVar3 < -0x3fffff6e) {
    if (iVar3 == -0x3fffff6f) {
      iVar3 = 2;
      uVar4 = 8;
    }
    else if (iVar3 == -0x3ffffffb) {
      iVar3 = 3;
    }
    else if (iVar3 == -0x3fffffe3) {
      iVar3 = 1;
    }
    else if (iVar3 == -0x3fffff72) {
      iVar3 = 2;
      uVar4 = 4;
    }
    else {
      if (iVar3 != -0x3fffff70) {
        return 1;
      }
      iVar3 = 2;
      uVar4 = 1;
    }
  }
  else if (iVar3 == -0x3fffff6e) {
    iVar3 = 2;
    uVar4 = 0x49;
  }
  else if (iVar3 == -0x3fffff6d) {
    iVar3 = 2;
    uVar4 = 0x10;
  }
  else if (iVar3 == -0x3fffff6c) {
    iVar3 = 2;
  }
  else {
    if (iVar3 != -0x3fffff6a) {
      return 1;
    }
    iVar3 = 1;
  }
  pcVar1 = *(code **)(&DAT_00438cf4 + iVar3 * 4);
  if (pcVar1 == (code *)0x1) {
    uVar2 = 0;
  }
  else if (pcVar1 == (code *)0x0) {
    uVar2 = 1;
  }
  else {
    *(undefined4 *)(&DAT_00438cf4 + iVar3 * 4) = 0;
    if (((iVar3 == 1) || (iVar3 == 3)) || (iVar3 == 2)) {
      FUN_0042fa88();
      FUN_0042fae0();
      (*pcVar1)();
      *(uint *)(in_stack_0000000c + 0x20) = *(uint *)(in_stack_0000000c + 0x20) & ~uVar4;
    }
    else {
      (*pcVar1)();
    }
    uVar2 = 0;
  }
  return uVar2;
}

