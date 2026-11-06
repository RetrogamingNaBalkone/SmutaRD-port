/* Ghidra address: 004152d8; FUN_004152d8 */

void FUN_004152d8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_stack_00000004;
  
  puVar2 = (undefined4 *)(in_stack_00000004 + 0x716);
  puVar3 = (undefined4 *)(*(int *)(in_stack_00000004 + 0x74a) + 0x30);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

