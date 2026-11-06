/* Ghidra address: 00430d18; FUN_00430d18 */

void FUN_00430d18(void)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0xc; uVar2 < DAT_00438b60; uVar2 = uVar2 + 4) {
    iVar1 = uVar2 * 2 + DAT_00438b74;
    *(int *)(iVar1 + -8) = iVar1 + -0xc;
    *(int *)(iVar1 + -4) = iVar1 + -0xc;
  }
  iVar1 = DAT_00438b60 * 2 + DAT_00438b74;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -4) = 0;
  return;
}

