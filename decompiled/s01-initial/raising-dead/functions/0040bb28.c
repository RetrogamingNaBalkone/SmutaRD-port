/* Ghidra address: 0040bb28; FUN_0040bb28 */

void __stdcall FUN_0040bb28(void)

{
  int iVar1;
  
  if (DAT_00438f28 != 0) {
    FUN_0040ba10(DAT_00438f30);
    do {
      iVar1 = (**(code **)(*DAT_00438f30 + 0x2c))();
      iVar1 = FUN_0040bac8(iVar1);
    } while (iVar1 != 0);
  }
  return;
}

