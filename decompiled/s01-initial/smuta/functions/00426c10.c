/* Ghidra address: 00426c10; FUN_00426c10 */

LPVOID FUN_00426c10(void)

{
  LPVOID pvVar1;
  int iVar2;
  short sVar3;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  pvVar1 = FUN_00410304();
  (**(code **)(*in_stack_00000004 + 0xc))
            (in_stack_00000004,*in_stack_00000004,in_stack_00000008,in_stack_00000004,pvVar1);
  *(int *)((int)pvVar1 + 8) = (int)pvVar1 + 0xc;
  iVar2 = *(short *)((int)pvVar1 + 4) * 10 + *(int *)((int)pvVar1 + 8);
  for (sVar3 = 0; sVar3 < *(short *)((int)pvVar1 + 4); sVar3 = sVar3 + 1) {
    *(int *)(*(int *)((int)pvVar1 + 8) + 6 + sVar3 * 10) = iVar2;
    *(int *)(iVar2 + 0xe) = iVar2 + 0x12;
    *(undefined2 *)(iVar2 + 4) = 8;
    iVar2 = *(int *)(iVar2 + 0xe) + *(int *)(iVar2 + 10);
  }
  return pvVar1;
}

