/* Ghidra address: 0040bd60; FUN_0040bd60 */

void __stdcall FUN_0040bd60(void)

{
  int iVar1;
  
  if (DAT_00438f28 != 0) {
    FUN_0040ba10(DAT_00438f30);
    do {
      iVar1 = (**(code **)(*DAT_00438f30 + 0x68))();
      iVar1 = FUN_0040bac8(iVar1);
    } while (iVar1 != 0);
  }
  return;
}

