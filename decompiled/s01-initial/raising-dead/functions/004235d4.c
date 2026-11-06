/* Ghidra address: 004235d4; FUN_004235d4 */

LPVOID __cdecl FUN_004235d4(SIZE_T param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  char *pcVar2;
  
  DAT_00439fe0 = DAT_00439fe0 + 1;
  hMem = GlobalAlloc(2,param_1);
  pvVar1 = GlobalLock(hMem);
  if ((pvVar1 == (LPVOID)0x0) || (2000 < DAT_00439fe0)) {
    pcVar2 = FUN_00404d88(0x41);
    FUN_0040e524(pcVar2);
  }
  return pvVar1;
}

