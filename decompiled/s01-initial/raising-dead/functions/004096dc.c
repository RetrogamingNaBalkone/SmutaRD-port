/* Ghidra address: 004096dc; FUN_004096dc */

void __stdcall FUN_004096dc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_004cf780 != 0) {
    FUN_004350ec(DAT_004cf780);
  }
  DAT_004cf780 = FUN_00435154(0x8100);
  DAT_004cf778 = DAT_004cf780 & 0xffffff00;
  iVar4 = 0;
  do {
    iVar2 = 0;
    do {
      iVar3 = (0x1f - iVar4) * 0x400;
      iVar1 = DAT_004cf778 + iVar3;
      *(undefined2 *)(DAT_004cf778 + iVar3 + iVar2 * 2) = 0xff;
      *(undefined2 *)(iVar1 + 0x200 + iVar2 * 2) = 0xff00;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x100);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  return;
}

