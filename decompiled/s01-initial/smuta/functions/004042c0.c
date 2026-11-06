/* Ghidra address: 004042c0; FUN_004042c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004042c0(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int in_stack_00000004;
  byte *in_stack_00000008;
  
  iVar3 = 0;
  puVar2 = &DAT_00443634;
  do {
    if ((float)(int)((uint)*in_stack_00000008 * in_stack_00000004) * _DAT_00404394 <= _DAT_00404398)
    {
      uVar1 = FUN_0042fc2c();
      *puVar2 = (char)uVar1;
      if ((float)(int)((uint)in_stack_00000008[1] * in_stack_00000004) * _DAT_00404394 <=
          _DAT_00404398) {
        uVar1 = FUN_0042fc2c();
        puVar2[1] = (char)uVar1;
        if ((float)(int)((uint)in_stack_00000008[2] * in_stack_00000004) * _DAT_00404394 <=
            _DAT_00404398) {
          uVar1 = FUN_0042fc2c();
          puVar2[2] = (char)uVar1;
        }
      }
    }
    iVar3 = iVar3 + 3;
    puVar2 = puVar2 + 3;
    in_stack_00000008 = in_stack_00000008 + 3;
  } while (iVar3 < 0x300);
  return &DAT_00443634;
}

