/* Ghidra address: 004239d0; FUN_004239d0 */

void FUN_004239d0(void)

{
  int iVar1;
  int *piVar2;
  LPVOID pvVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined2 extraout_CX_01;
  undefined2 extraout_CX_02;
  undefined2 extraout_CX_03;
  undefined2 extraout_CX_04;
  undefined2 extraout_CX_05;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  short local_6;
  
  puVar8 = (undefined2 *)(in_stack_00000004 + 0x3e);
  puVar7 = (undefined2 *)(in_stack_00000004 + 0x3c);
  if (in_stack_00000008 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_stack_00000008 + 0x3e;
  }
  piVar2 = FUN_0042e8f8(iVar1,puVar7,in_stack_00000004 + 0x44,(int *)iVar1,
                        (undefined4 *)(in_stack_00000004 + 0x44));
  piVar2 = FUN_0042ec88(piVar2,extraout_EDX,extraout_CX,piVar2,puVar7);
  FUN_0042ec88(piVar2,extraout_EDX_00,extraout_CX_00,piVar2,puVar8);
  FUN_0042e838();
  pvVar3 = FUN_0041d95a();
  *(LPVOID *)(in_stack_00000004 + 0xff) = pvVar3;
  FUN_0042e838();
  pvVar3 = FUN_0041d95a();
  *(LPVOID *)(in_stack_00000004 + 0x103) = pvVar3;
  FUN_0042e838();
  puVar4 = FUN_0041d9de();
  *(uint **)(in_stack_00000004 + 0x107) = puVar4;
  FUN_0042e838();
  puVar4 = FUN_0041d9de();
  *(uint **)(in_stack_00000004 + 0x10b) = puVar4;
  puVar8 = (undefined2 *)(in_stack_00000004 + 0x112);
  puVar7 = (undefined2 *)(in_stack_00000004 + 0x134);
  puVar6 = (undefined2 *)(in_stack_00000004 + 0x132);
  if (in_stack_00000008 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_stack_00000008 + 0x3e;
  }
  FUN_0042ec88(in_stack_00000004 + 0x12e,iVar1,(short)in_stack_00000004 + 0x13c,(int *)iVar1,
               (undefined2 *)(in_stack_00000004 + 0x12e));
  FUN_0042eacc();
  piVar2 = FUN_0042ec18();
  piVar2 = FUN_0042ec88(piVar2,extraout_EDX_01,extraout_CX_01,piVar2,puVar6);
  piVar2 = FUN_0042ec88(piVar2,extraout_EDX_02,extraout_CX_02,piVar2,puVar7);
  FUN_0042ec88(piVar2,extraout_EDX_03,extraout_CX_03,piVar2,puVar8);
  puVar8 = (undefined2 *)(in_stack_00000004 + 0xf8);
  puVar7 = (undefined2 *)(in_stack_00000004 + 0xbe);
  piVar2 = FUN_0042ecb8();
  piVar2 = FUN_0042ec88(piVar2,extraout_EDX_04,extraout_CX_04,piVar2,puVar7);
  FUN_0042ec88(piVar2,extraout_EDX_05,extraout_CX_05,piVar2,puVar8);
  FUN_0042ed84();
  if (*(short *)(in_stack_00000004 + 0x12e) < 0) {
    *(undefined2 *)(in_stack_00000004 + 0xfa) = 1;
    *(short *)(in_stack_00000004 + 0x12e) = -*(short *)(in_stack_00000004 + 0x12e);
  }
  if (*(int *)(in_stack_00000004 + 0x44) == 0) {
    *(undefined2 *)(in_stack_00000004 + 0xfc) = 1;
  }
  if (*(short *)(in_stack_00000004 + 0x112) < 0) {
    iVar1 = *(int *)(in_stack_00000004 + 0x118);
    *(undefined4 *)(iVar1 + 0x3c) = 1;
    FUN_0041da94();
    *(undefined2 *)(*(int *)(iVar1 + 0x34) + 0x3c) = *(undefined2 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x40) = 1;
    *(short *)(in_stack_00000004 + 0x112) = -*(short *)(in_stack_00000004 + 0x112);
  }
  *(undefined2 *)(in_stack_00000004 + 0x130) = *(undefined2 *)(in_stack_00000004 + 0x12e);
  FUN_0041dbd0();
  iVar1 = *(int *)(in_stack_00000004 + 0x114);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_stack_00000004 + 0x6c);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_0041da94();
  FUN_0041dbd0();
  FUN_0041dbd0();
  iVar1 = *(int *)(in_stack_00000004 + 0x120);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_stack_00000004 + 0x107);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_0041dbd0();
  iVar1 = *(int *)(in_stack_00000004 + 0x11c);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_stack_00000004 + 0x107);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  uVar5 = FUN_004269f7();
  iVar1 = *(int *)(in_stack_00000004 + 0x124);
  *(undefined4 *)(iVar1 + 0x20) = uVar5;
  *(int *)(iVar1 + 0x38) = (int)local_6;
  FUN_0041dbd0();
  iVar1 = *(int *)(in_stack_00000004 + 0x128);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_stack_00000004 + 0x10b);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  uVar5 = FUN_0041db7c();
  *(undefined4 *)(in_stack_00000004 + 100) = uVar5;
  return;
}

