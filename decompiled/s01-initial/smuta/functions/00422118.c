/* Ghidra address: 00422118; FUN_00422118 */

int FUN_00422118(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_00000004;
  
  bVar4 = 0;
  FUN_0041e2c4();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_LAB_004368a0;
  puVar2 = *(undefined4 **)(in_stack_00000004 + 100);
  puVar3 = (undefined4 *)(in_stack_00000004 + 0x8f);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(int *)(in_stack_00000004 + 100) = in_stack_00000004 + 0x8f;
  *(undefined1 *)(in_stack_00000004 + 0x74) = 2;
  *(undefined4 *)(in_stack_00000004 + 0x75) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x7f) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x72) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x7d) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x7b) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x83) = 1;
  *(undefined2 *)(in_stack_00000004 + 0x79) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x8d) = *(undefined2 *)(in_stack_00000004 + 0x1b);
  *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xffef;
  if ((*(byte *)(in_stack_00000004 + 0x8d) & 8) == 0) {
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 2;
  }
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

