/* Ghidra address: 0042361c; FUN_0042361c */

void __cdecl FUN_0042361c(LPCVOID param_1)

{
  char *pcVar1;
  HGLOBAL pvVar2;
  
  DAT_00439fe0 = DAT_00439fe0 + -1;
  if ((param_1 == (LPCVOID)0x0) || (DAT_00439fe0 < 0)) {
    pcVar1 = FUN_00404d88(0x42);
    FUN_0040e524(pcVar1);
  }
  pvVar2 = GlobalHandle(param_1);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(param_1);
  GlobalFree(pvVar2);
  return;
}

