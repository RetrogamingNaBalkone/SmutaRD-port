/* Ghidra address: 00428d0f; FUN_00428d0f */

void FUN_00428d0f(void)

{
  HGLOBAL pvVar1;
  int *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (int *)0x0) {
    if (*in_stack_00000004 != 0) {
      pvVar1 = GlobalHandle((LPCVOID)*in_stack_00000004);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)*in_stack_00000004);
      GlobalFree(pvVar1);
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

