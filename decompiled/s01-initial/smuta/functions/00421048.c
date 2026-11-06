/* Ghidra address: 00421048; FUN_00421048 */

void FUN_00421048(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int in_stack_00000004;
  
  if ((*(int *)(in_stack_00000004 + 0x133) == 2) &&
     (*(short *)(in_stack_00000004 + 0x1f) = *(short *)(in_stack_00000004 + 0x1f) + 0x10,
     *(short *)(in_stack_00000004 + 0x126) < *(short *)(in_stack_00000004 + 0x1f))) {
    *(undefined2 *)(in_stack_00000004 + 0x1f) = *(undefined2 *)(in_stack_00000004 + 0x137);
    *(undefined4 *)(in_stack_00000004 + 0x133) = 0;
  }
  if (*(int *)(in_stack_00000004 + 0x133) < 0) {
    *(short *)(in_stack_00000004 + 0x1f) = *(short *)(in_stack_00000004 + 0x1f) + -0x10;
    if (*(short *)(in_stack_00000004 + 0x1f) < *(short *)(in_stack_00000004 + 0x126)) {
      *(short *)(in_stack_00000004 + 0x1f) = *(short *)(in_stack_00000004 + 0x126);
      *(short *)(in_stack_00000004 + 0x126) = *(short *)(in_stack_00000004 + 0x126) << 2;
      *(undefined4 *)(in_stack_00000004 + 0x133) = 1;
    }
  }
  iVar3 = FUN_0041fe80();
  if (*(short *)(iVar3 + 0x18) == 3) {
    uVar4 = FUN_00420890();
    if ((short)uVar4 != 0) {
      sVar1 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x24))();
      if (sVar1 != 0) {
        FUN_0041e39c();
      }
    }
  }
  else if (*(short *)(iVar3 + 0x18) == 10) {
    sVar1 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x24))();
    if (sVar1 != 0) {
      FUN_0041e39c();
    }
    FUN_00420de4();
    FUN_004089f8();
    FUN_00420890();
  }
  iVar3 = FUN_0041fe80();
  sVar1 = *(short *)(iVar3 + 0x18);
  if (sVar1 == 0xc) {
    *(uint *)(in_stack_00000004 + 0x22) = *(uint *)(in_stack_00000004 + 0x22) | 0x4000000;
    uVar4 = FUN_00411634();
    if ((int)(short)(-(*(short *)(in_stack_00000004 + 0x1f) >> 2) - (short)uVar4) ==
        *(int *)(in_stack_00000004 + 0x34)) {
      FUN_00420890();
    }
    sVar2 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x3c))();
    if (sVar2 != 0) {
      FUN_0041e39c();
    }
  }
  if ((sVar1 == 0xd) && (*(int *)(iVar3 + 0x90) == -3)) {
    (**(code **)(*(int *)(iVar3 + 0x14) + 0x3c))();
  }
  else if (((sVar1 == 0xd) && (iVar3 != *(int *)(in_stack_00000004 + 0x128))) ||
          (*(int *)(in_stack_00000004 + 0x133) == 1)) {
    if (*(int *)(in_stack_00000004 + 0x133) == 1) {
      *(undefined4 *)(in_stack_00000004 + 0x133) = 2;
      (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x12f) + 0x14) + 0x3c))();
    }
    else if (*(char *)(iVar3 + 0x1a) != *(char *)(in_stack_00000004 + 0x12e)) {
      if (*(int *)(iVar3 + 0x90) < 0) {
        *(char *)(in_stack_00000004 + 0x12e) = *(char *)(iVar3 + 0x1a);
        *(undefined4 *)(in_stack_00000004 + 0x133) = 0xffffffff;
        *(short *)(in_stack_00000004 + 0x126) = *(short *)(in_stack_00000004 + 0x1f) >> 2;
        *(int *)(in_stack_00000004 + 0x137) = (int)*(short *)(in_stack_00000004 + 0x1f);
        *(int *)(in_stack_00000004 + 0x12f) = iVar3;
      }
      else {
        (**(code **)(*(int *)(iVar3 + 0x14) + 0x3c))();
      }
    }
  }
  else {
    *(undefined1 *)(in_stack_00000004 + 0x12e) = *(undefined1 *)(iVar3 + 0x1a);
  }
  *(int *)(in_stack_00000004 + 0x128) = iVar3;
  FUN_0041ebec();
  return;
}

