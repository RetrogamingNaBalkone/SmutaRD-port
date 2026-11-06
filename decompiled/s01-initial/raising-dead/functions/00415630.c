/* Ghidra address: 00415630; FUN_00415630 */

void __cdecl FUN_00415630(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0xfd) != 0) {
    iVar1 = 0;
    do {
      FUN_004117bc(param_1,*(byte *)(param_1 + 0x16a),(short)iVar1);
      iVar1 = iVar1 + 0x1e;
    } while (iVar1 < 0x168);
  }
  return;
}

