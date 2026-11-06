/* Ghidra address: 0040e4cc; FUN_0040e4cc */

void __cdecl FUN_0040e4cc(LPCSTR param_1)

{
  LPCSTR pCVar1;
  int *piVar2;
  char *pcVar3;
  CHAR local_104 [256];
  
  wvsprintfA(local_104,param_1,&stack0x00000008);
  pcVar3 = &DAT_004399b4;
  pCVar1 = (LPCSTR)FUN_00401348();
  piVar2 = FUN_0042d8cc(pCVar1,pcVar3);
  if (piVar2 != (int *)0x0) {
    FUN_0042d8f8(piVar2,&DAT_004399b6);
    FUN_0042d444(piVar2);
  }
  return;
}

