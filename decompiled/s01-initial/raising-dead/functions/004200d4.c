/* Ghidra address: 004200d4; FUN_004200d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_004200d4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_004fa728 = (DAT_0053d6d8 - DAT_0053d6d0) + 1;
  iVar1 = DAT_0053d6d0;
  if (DAT_0053d6d0 < 0) {
    iVar1 = 0;
  }
  _DAT_004fa724 = DAT_0053d6d8;
  if (0x513 < DAT_0053d6d8) {
    _DAT_004fa724 = 0x513;
  }
  puVar2 = &DAT_004f92d0 + iVar1;
  DAT_004fa720 = iVar1;
  for (; iVar1 <= _DAT_004fa724; iVar1 = iVar1 + 1) {
    *puVar2 = 1;
    puVar2 = puVar2 + 1;
  }
  _DAT_004f1432 = 0;
  FUN_00420274(DAT_004f92c4);
  return;
}

