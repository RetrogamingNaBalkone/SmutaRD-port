/* Ghidra address: 00431d60; FUN_00431d60 */

undefined4 FUN_00431d60(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  WNDENUMPROC lpfn;
  int *lParam;
  int local_4;
  
  lParam = &local_4;
  local_4 = 0;
  DVar1 = GetVersion();
  if ((DVar1 & 0x80000000) == 0) {
    return 0x2000;
  }
  lpfn = (WNDENUMPROC)&LAB_00431d4c;
  DVar1 = GetCurrentThreadId();
  EnumThreadWindows(DVar1,lpfn,(LPARAM)lParam);
  uVar2 = 0x2000;
  if (local_4 == 0) {
    uVar2 = 0x1000;
  }
  return uVar2;
}

