/* Ghidra address: 0041034c; FUN_0041034c */

void FUN_0041034c(void)

{
  HGLOBAL pvVar1;
  LPCVOID in_stack_00000004;
  
  DAT_004358a0 = DAT_004358a0 + -1;
  if ((in_stack_00000004 == (LPCVOID)0x0) || (DAT_004358a0 < 0)) {
    FUN_00427b9f();
  }
  pvVar1 = GlobalHandle(in_stack_00000004);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(in_stack_00000004);
  GlobalFree(pvVar1);
  return;
}

