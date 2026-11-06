/* Ghidra address: 0040b640; FUN_0040b640 */

void __stdcall FUN_0040b640(void)

{
  int iVar1;
  
  if (DAT_00438f28 != 0) {
    iVar1 = DirectDrawCreate();
    if (iVar1 != 0) {
      FUN_0040bac8(iVar1);
    }
    iVar1 = (**(code **)(*DAT_00438f2c + 0x50))();
    if (iVar1 != 0) {
      FUN_0040bac8(iVar1);
    }
    DAT_00438f44 = 1;
  }
  return;
}

