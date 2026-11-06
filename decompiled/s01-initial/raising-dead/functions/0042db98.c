/* Ghidra address: 0042db98; FUN_0042db98 */

void __stdcall FUN_0042db98(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_0043b010;
  iVar2 = 0x32;
  while (iVar2 != 0) {
    if ((*(ushort *)((int)piVar1 + 0x12) & 0x300) == 0x300) {
      FUN_0042d4d4(piVar1);
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return;
}

