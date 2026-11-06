/* Ghidra address: 004028a4; FUN_004028a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_004028a4(void)

{
  LPCSTR pCVar1;
  int *piVar2;
  byte *pbVar3;
  char *pcVar4;
  
  pcVar4 = &DAT_004382ec;
  pCVar1 = (LPCSTR)FUN_00401340();
  piVar2 = FUN_0042d8cc(pCVar1,pcVar4);
  if (piVar2 != (int *)0x0) {
    pbVar3 = (byte *)FUN_00404d88(0x28);
    FUN_0042d8f8(piVar2,pbVar3);
    FUN_0042d444(piVar2);
  }
  return;
}

