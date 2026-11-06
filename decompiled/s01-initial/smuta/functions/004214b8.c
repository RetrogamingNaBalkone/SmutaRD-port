/* Ghidra address: 004214b8; FUN_004214b8 */

void FUN_004214b8(void)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined2 extraout_CX;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined2 *puVar4;
  
  puVar4 = (undefined2 *)(in_stack_00000004 + 0x7a);
  if (in_stack_00000008 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_stack_00000008 + 0x3e;
  }
  piVar1 = FUN_0042e8f8(puVar4,in_stack_00000004 + 0x48,iVar3,(int *)iVar3,
                        (undefined4 *)(in_stack_00000004 + 0x48));
  FUN_0042ec88(piVar1,extraout_EDX,extraout_CX,piVar1,puVar4);
  *(int *)(in_stack_00000004 + 0x48) = -*(int *)(in_stack_00000004 + 0x48);
  *(int *)(in_stack_00000004 + 0x34) = -(int)*(short *)(in_stack_00000004 + 0x1f);
  FUN_0042e838();
  pvVar2 = FUN_0041d95a();
  *(LPVOID *)(in_stack_00000004 + 0x8d) = pvVar2;
  if (in_stack_00000008 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(in_stack_00000008 + 0x3e);
  }
  FUN_0042ec88(in_stack_00000004 + 0x7c,extraout_EDX_00,(short)piVar1,piVar1,
               (undefined2 *)(in_stack_00000004 + 0x7c));
  *(undefined4 *)(in_stack_00000004 + 0x99) = 0;
  if (*(short *)(in_stack_00000004 + 0x7c) < 0) {
    *(undefined4 *)(in_stack_00000004 + 0x99) = 1;
    *(short *)(in_stack_00000004 + 0x7c) = -*(short *)(in_stack_00000004 + 0x7c);
  }
  *(short *)(in_stack_00000004 + 0x7e) = *(short *)(in_stack_00000004 + 0x7c) >> 1;
  FUN_0042e838();
  pvVar2 = FUN_0041d95a();
  *(LPVOID *)(in_stack_00000004 + 0x91) = pvVar2;
  return;
}

