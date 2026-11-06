/* Ghidra address: 00408534; FUN_00408534 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408534(void)

{
  short *psVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int in_stack_00000004;
  _MEMORYSTATUS local_24;
  
  piVar3 = DAT_0044f640;
  uVar2 = DAT_00445f8e;
  *(undefined2 *)(DAT_0044f640 + 8) = 0x28;
  *(undefined2 *)((int)piVar3 + 0x22) = uVar2;
  if ((*(byte *)(in_stack_00000004 + 0x14) & 4) != 0) {
    FUN_004267f4();
  }
  if ((*(byte *)(in_stack_00000004 + 0x14) & 8) != 0) {
    FUN_004267f4();
  }
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  (**(code **)(*DAT_0044f640 + 0x44))();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  (**(code **)(*DAT_0044f640 + 0x44))();
  if ((*(byte *)(in_stack_00000004 + 0x14) & 0x20) != 0) {
    *(undefined4 *)(in_stack_00000004 + 0x95) = 0x60;
    if ((*(byte *)(in_stack_00000004 + 0x15) & 1) == 0) {
      iVar4 = FUN_00429114();
      psVar1 = *(short **)(in_stack_00000004 + 0x99);
      *psVar1 = (short)DAT_0044f640[9] * ((short)iVar4 + 1);
      psVar1[1] = *(short *)((int)DAT_0044f640 + 0x26) + 2;
      FUN_004267f4();
    }
    else {
      GlobalMemoryStatus(&local_24);
      psVar1 = *(short **)(in_stack_00000004 + 0x99);
      *psVar1 = (short)DAT_0044f640[9] << 5;
      psVar1[1] = *(short *)((int)DAT_0044f640 + 0x26) + 2;
      FUN_004267f4();
    }
  }
  if (*(int *)(in_stack_00000004 + 0x95) != 0) {
    FUN_0042fc2c();
    FUN_0042fc2c();
    FUN_0042fc2c();
    FUN_0042fc2c();
    (**(code **)(*DAT_0044f640 + 0x44))();
    *(undefined2 *)(in_stack_00000004 + 0x14) = 0;
    *(int *)(in_stack_00000004 + 0x95) = *(int *)(in_stack_00000004 + 0x95) + -1;
  }
  return;
}

