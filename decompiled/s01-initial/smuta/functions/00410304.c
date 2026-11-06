/* Ghidra address: 00410304; FUN_00410304 */

LPVOID FUN_00410304(void)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  SIZE_T in_stack_00000004;
  
  DAT_004358a0 = DAT_004358a0 + 1;
  hMem = GlobalAlloc(2,in_stack_00000004);
  pvVar1 = GlobalLock(hMem);
  if ((pvVar1 == (LPVOID)0x0) || (1000 < DAT_004358a0)) {
    FUN_00427b9f();
  }
  return pvVar1;
}

