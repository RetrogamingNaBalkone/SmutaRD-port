/* Ghidra address: 0041fba0; FUN_0041fba0 */

void FUN_0041fba0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_00000004;
  undefined4 local_38;
  int local_34;
  undefined2 local_26;
  
  bVar4 = 0;
  iVar1 = FUN_0041133c();
  if (-1 < (short)iVar1) {
    FUN_00421314();
    FUN_00411418();
    puVar2 = (undefined4 *)(in_stack_00000004 + 0x30);
    puVar3 = &local_38;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_34 = local_34 - *(short *)(in_stack_00000004 + 0xbe);
    local_26 = 0;
    FUN_0042158c();
  }
  return;
}

