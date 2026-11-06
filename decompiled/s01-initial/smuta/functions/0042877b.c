/* Ghidra address: 0042877b; FUN_0042877b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042877b(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_stack_00000004;
  
  FUN_00428d97();
  FUN_00428733();
  iVar3 = 0;
  do {
    if ((*(byte *)(in_stack_00000004 + 0x14 + iVar3 * 0x14) & 1) != 0) {
      FUN_00428c01();
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  _DAT_0043765c = 4;
  iVar1 = 0;
  do {
    if ((*(byte *)(in_stack_00000004 + 0x14 + iVar1 * 0x14) & 1) != 0) {
      _DAT_0043765c = _DAT_0043765c + -1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (iVar3 == 4) {
    uVar2 = 0;
  }
  else {
    if (DAT_0049aa18 == 0) {
      FUN_004282d6();
      FUN_00428c26();
    }
    uVar2 = 1;
  }
  return uVar2;
}

