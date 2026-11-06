/* Ghidra address: 0041591c; FUN_0041591c */

void __cdecl FUN_0041591c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  char local_28 [34];
  short local_6;
  
  puVar10 = (undefined2 *)(param_1 + 0x3f);
  puVar9 = (undefined2 *)(param_1 + 0x3d);
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  piVar2 = FUN_00430ec4(piVar2,(int *)(param_1 + 0x45));
  piVar2 = FUN_00431258(piVar2,puVar9);
  FUN_00431258(piVar2,puVar10);
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar2,local_28);
  pvVar3 = FUN_004160d8(local_28);
  *(LPVOID *)(param_1 + 0x100) = pvVar3;
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar2,local_28);
  pvVar3 = FUN_004160d8(local_28);
  *(LPVOID *)(param_1 + 0x104) = pvVar3;
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar2,&DAT_004d0a00);
  puVar4 = FUN_0041614c((uint *)&DAT_004d0a00);
  *(undefined4 **)(param_1 + 0x108) = puVar4;
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar2,&DAT_004d0a00);
  puVar4 = FUN_0041614c((uint *)&DAT_004d0a00);
  *(undefined4 **)(param_1 + 0x10c) = puVar4;
  puVar10 = (undefined2 *)(param_1 + 0x113);
  puVar9 = (undefined2 *)(param_1 + 0x135);
  puVar8 = (undefined2 *)(param_1 + 0x133);
  puVar7 = (undefined1 *)(param_1 + 0x16a);
  piVar2 = (int *)(param_1 + 0x13d);
  if (param_2 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(param_2 + 0x3e);
  }
  piVar5 = FUN_00431258(piVar5,(undefined2 *)(param_1 + 0x12f));
  piVar2 = FUN_0043109c(piVar5,piVar2);
  piVar2 = FUN_004311e8(piVar2,puVar7);
  piVar2 = FUN_00431258(piVar2,puVar8);
  piVar2 = FUN_00431258(piVar2,puVar9);
  FUN_00431258(piVar2,puVar10);
  puVar10 = (undefined2 *)(param_1 + 0xf9);
  puVar9 = (undefined2 *)(param_1 + 0xbf);
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  piVar2 = FUN_00431288(piVar2,(undefined1 *)(param_1 + 0x110));
  piVar2 = FUN_00431258(piVar2,puVar9);
  FUN_00431258(piVar2,puVar10);
  FUN_00431354((int *)(param_2 + 0x3e),(undefined1 *)(param_1 + 0x141),0x28,10);
  if (*(short *)(param_1 + 0x12f) < 0) {
    *(undefined2 *)(param_1 + 0xfb) = 1;
    *(short *)(param_1 + 0x12f) = -*(short *)(param_1 + 0x12f);
  }
  if (*(int *)(param_1 + 0x45) == 0) {
    *(undefined2 *)(param_1 + 0xfd) = 1;
  }
  if (*(short *)(param_1 + 0x113) < 0) {
    iVar1 = *(int *)(param_1 + 0x119);
    *(undefined4 *)(iVar1 + 0x3c) = 1;
    FUN_0040f8c4((short *)(iVar1 + 0x44),*(short *)(*(int *)(iVar1 + 0x34) + 0x3d));
    *(undefined2 *)(*(int *)(iVar1 + 0x34) + 0x3d) = *(undefined2 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x40) = 1;
    *(short *)(param_1 + 0x113) = -*(short *)(param_1 + 0x113);
  }
  *(undefined2 *)(param_1 + 0x131) = *(undefined2 *)(param_1 + 0x12f);
  FUN_0040f9f0(*(int *)(param_1 + 0x115),*(short **)(param_1 + 0x69));
  iVar1 = *(int *)(param_1 + 0x115);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x6d);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_0040f8c4((short *)(*(int *)(param_1 + 0x115) + 0x32),*(short *)(param_1 + 0x3d));
  FUN_0040f9f0(*(int *)(param_1 + 0x119),*(short **)(param_1 + 0x69));
  FUN_0040f9f0(*(int *)(param_1 + 0x121),*(short **)(param_1 + 0x100));
  iVar1 = *(int *)(param_1 + 0x121);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_0040f9f0(*(int *)(param_1 + 0x11d),*(short **)(param_1 + 0x100));
  iVar1 = *(int *)(param_1 + 0x11d);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  uVar6 = FUN_0040f4b0(*(short **)(param_1 + 0x104),0,&local_6,0);
  iVar1 = *(int *)(param_1 + 0x125);
  *(undefined4 *)(iVar1 + 0x20) = uVar6;
  *(int *)(iVar1 + 0x38) = (int)local_6;
  FUN_0040f9f0(*(int *)(param_1 + 0x129),*(short **)(param_1 + 0x104));
  iVar1 = *(int *)(param_1 + 0x129);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  uVar6 = FUN_0040f99c(*(int *)(param_1 + 0x2d));
  *(undefined4 *)(param_1 + 0x65) = uVar6;
  return;
}

