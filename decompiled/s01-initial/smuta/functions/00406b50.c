/* Ghidra address: 00406b50; FUN_00406b50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406b50(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  _DAT_00443fa0 = in_stack_00000004;
  FUN_00406be4();
  DAT_00443fa4 = in_stack_00000004;
  DAT_00443fb0 = in_stack_00000004 * in_stack_00000008 * 2;
  DAT_00443fa8 = in_stack_00000008;
  puVar1 = FUN_00410304();
  iVar3 = 0;
  puVar2 = &DAT_004449b8;
  DAT_00434ed4 = puVar1;
  if (0 < in_stack_00000008) {
    do {
      *puVar2 = puVar1;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + in_stack_00000004;
    } while (iVar3 < in_stack_00000008);
  }
  DAT_00443fac = DAT_00443fa4 * 2;
  puVar1 = DAT_00434ed4;
  iVar3 = DAT_00443fa4 * DAT_00443fa8;
  while (0 < iVar3) {
    *puVar1 = 0xffff;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  }
  return;
}

