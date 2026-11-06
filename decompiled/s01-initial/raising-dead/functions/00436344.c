/* Ghidra address: 00436344; FUN_00436344 */

undefined4 __stdcall FUN_00436344(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  code *lpfn;
  int *lParam;
  int local_4;
  
  lParam = &local_4;
  local_4 = 0;
  DVar1 = GetVersion();
  if ((DVar1 & 0x80000000) == 0) {
    return 0x2000;
  }
  lpfn = FUN_00436330;
  DVar1 = GetCurrentThreadId();
  EnumThreadWindows(DVar1,lpfn,(LPARAM)lParam);
  uVar2 = 0x2000;
  if (local_4 == 0) {
    uVar2 = 0x1000;
  }
  return uVar2;
}

