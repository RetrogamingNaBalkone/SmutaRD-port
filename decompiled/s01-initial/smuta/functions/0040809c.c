/* Ghidra address: 0040809c; FUN_0040809c */

int FUN_0040809c(void)

{
  undefined2 uVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x4351b0);
  FUN_00427be8();
  *(undefined2 *)(in_stack_00000004 + 0x2a) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x28) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x26) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x1e) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x1a) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x16) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x14) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x91) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x95) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x2c) = 0;
  *(undefined1 *)(in_stack_00000004 + 0x30) = 0;
  *(undefined1 *)(in_stack_00000004 + 0x5a) = 0;
  pvVar2 = FUN_0041d904();
  *(LPVOID *)(in_stack_00000004 + 0x65) = pvVar2;
  pvVar2 = FUN_0041d904();
  *(LPVOID *)(in_stack_00000004 + 0x61) = pvVar2;
  uVar3 = FUN_00409ad0();
  *(undefined4 *)(in_stack_00000004 + 0x69) = uVar3;
  uVar3 = FUN_00409ad0();
  *(undefined4 *)(in_stack_00000004 + 0x71) = uVar3;
  pvVar2 = FUN_0041d904();
  *(LPVOID *)(in_stack_00000004 + 0x6d) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 4) = 1;
  pvVar2 = FUN_0041d904();
  *(LPVOID *)(in_stack_00000004 + 0x79) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 4) = 1;
  FUN_0040d43c();
  puVar4 = FUN_00431988();
  if (puVar4 != (uint *)0x0) {
    FUN_0042e498();
    *DAT_0049aa2c = *DAT_0049aa2c + -6;
  }
  puVar8 = &DAT_00445f8e;
  puVar7 = (undefined2 *)&DAT_00445f8c;
  if (puVar4 == (uint *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)((int)puVar4 + 0x3e);
  }
  piVar5 = FUN_0042ec88(puVar4,in_stack_00000004 + 0x5f,(short)piVar5,piVar5,
                        (undefined2 *)(in_stack_00000004 + 0x5f));
  piVar5 = FUN_0042ec88(piVar5,extraout_EDX,extraout_CX,piVar5,puVar7);
  FUN_0042ec88(piVar5,extraout_EDX_00,extraout_CX_00,piVar5,puVar8);
  iVar6 = DAT_0044f640;
  uVar1 = DAT_00445f8e;
  *(undefined2 *)(DAT_0044f640 + 0x20) = 0x28;
  *(undefined2 *)(iVar6 + 0x22) = uVar1;
  *(undefined2 *)(in_stack_00000004 + 0x5f) =
       *(undefined2 *)(*(int *)(in_stack_00000004 + 0x61) + 2);
  if (puVar4 != (uint *)0x0) {
    iVar6 = FUN_0042b677();
    *DAT_0049aa2c = *DAT_0049aa2c + iVar6;
    (**(code **)puVar4[1])();
  }
  *(undefined2 *)(in_stack_00000004 + 0x22) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x24) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x93) = 0;
  DAT_00445f90 = 0;
  DAT_00445f94 = 0;
  DAT_00445f98 = 0;
  DAT_00445f9c = 0;
  DAT_00445fa0 = 0;
  DAT_00445fa4 = 0;
  DAT_00445fa8 = 0;
  uVar3 = FUN_00409ad0();
  *(undefined4 *)(in_stack_00000004 + 0x99) = uVar3;
  FUN_004083cc();
  DAT_0043518c = in_stack_00000004;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_2c;
  return in_stack_00000004;
}

