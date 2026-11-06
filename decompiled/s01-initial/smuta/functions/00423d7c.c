/* Ghidra address: 00423d7c; FUN_00423d7c */

void FUN_00423d7c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_stack_00000004;
  undefined4 local_3c [6];
  int local_24;
  undefined4 local_8;
  
  local_8 = 0x800;
  puVar2 = (undefined4 *)(in_stack_00000004 + 0x30);
  puVar3 = local_3c;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_24 = -(int)*(short *)(DAT_0048aab4 + 0x74e);
  iVar1 = FUN_00411480();
  *(undefined2 *)(in_stack_00000004 + 0x92) = *(undefined2 *)(*(int *)(DAT_0048aab4 + 0x754) + 0x92)
  ;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x20))();
  }
  return;
}

