/* Ghidra address: 0040b7b4; FUN_0040b7b4 */

void __stdcall FUN_0040b7b4(void)

{
  int iVar1;
  
  if ((DAT_00438f28 != 0) && (DAT_00438f50 != 0)) {
    DAT_00438f50 = 0;
    FUN_0040ba10(DAT_00438f38);
    do {
      iVar1 = (**(code **)(*DAT_00438f38 + 0x80))();
      iVar1 = FUN_0040bac8(iVar1);
    } while (iVar1 != 0);
  }
  return;
}

