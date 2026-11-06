/* Ghidra address: 00435538; FUN_00435538 */

void __stdcall FUN_00435538(void)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0xc; uVar2 < DAT_0043c858; uVar2 = uVar2 + 4) {
    iVar1 = uVar2 * 2 + DAT_0043c86c;
    *(int *)(iVar1 + -8) = iVar1 + -0xc;
    *(int *)(iVar1 + -4) = iVar1 + -0xc;
  }
  iVar1 = DAT_0043c858 * 2 + DAT_0043c86c;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -4) = 0;
  return;
}

