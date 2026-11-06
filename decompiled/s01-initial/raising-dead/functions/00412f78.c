/* Ghidra address: 00412f78; FUN_00412f78 */

uint * __cdecl FUN_00412f78(int param_1,undefined1 param_2)

{
  short sVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = FUN_00435120(0x9e);
  if (puVar2 != (uint *)0x0) {
    FUN_0040e220(puVar2,4);
    puVar2[5] = (uint)&PTR_FUN_00439dec;
    puVar2[5] = (uint)&PTR_FUN_00439cf8;
  }
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(param_1 + 0x18);
  *(undefined1 *)((int)puVar2 + 0x1a) = param_2;
  *(undefined4 *)((int)puVar2 + 0x69) = *(undefined4 *)(param_1 + 0x69);
  *(undefined2 *)((int)puVar2 + 0x1b) = *(undefined2 *)(param_1 + 0x1b);
  *(undefined4 *)((int)puVar2 + 0x65) = *(undefined4 *)(param_1 + 0x65);
  *(undefined2 *)((int)puVar2 + 0x1d) = *(undefined2 *)(param_1 + 0x1d);
  *(undefined2 *)((int)puVar2 + 0x1f) = *(undefined2 *)(param_1 + 0x1f);
  *(undefined2 *)((int)puVar2 + 0x21) = *(undefined2 *)(param_1 + 0x21);
  puVar5 = (undefined4 *)(param_1 + 0x31);
  puVar6 = (undefined4 *)((int)puVar2 + 0x31);
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)((int)puVar2 + 0x7b) = *(undefined2 *)(param_1 + 0x7b);
  *(undefined2 *)((int)puVar2 + 0x7d) = *(undefined2 *)(param_1 + 0x7d);
  *(undefined2 *)((int)puVar2 + 0x7f) = *(undefined2 *)(param_1 + 0x7f);
  *(undefined2 *)((int)puVar2 + 0x79) = *(undefined2 *)(param_1 + 0x79);
  *(undefined4 *)((int)puVar2 + 0x92) = *(undefined4 *)(param_1 + 0x92);
  *(undefined4 *)((int)puVar2 + 0x8e) = *(undefined4 *)(param_1 + 0x8e);
  *(undefined4 *)((int)puVar2 + 0x9a) = *(undefined4 *)(param_1 + 0x9a);
  uVar3 = (**(code **)(**(int **)(param_1 + 0x6d) + 8))();
  *(undefined4 *)((int)puVar2 + 0x6d) = uVar3;
  *(undefined1 *)((int)puVar2 + 0x89) = 0x20;
  *(undefined2 *)((int)puVar2 + 0x71) = 0xffff;
  sVar1 = FUN_004100cc(param_1,*(short **)(param_1 + 0x69));
  uVar3 = FUN_0040f3f8(*(short **)((int)puVar2 + 0x69),(undefined2 *)((int)puVar2 + 0x75),
                       (undefined2 *)((int)puVar2 + 0x77),(undefined2 *)((int)puVar2 + 0x73),
                       (short *)((int)puVar2 + 0x71),sVar1);
  *(undefined4 *)((int)puVar2 + 0x65) = uVar3;
  return puVar2;
}

