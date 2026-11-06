/* Ghidra address: 00432e3c; FUN_00432e3c */

void FUN_00432e3c(void)

{
  uint *in_stack_00000004;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  *(undefined1 *)(in_stack_00000004 + 1) = (undefined1)local_14.wDay;
  *(undefined1 *)((int)in_stack_00000004 + 5) = (undefined1)local_14.wMonth;
  *in_stack_00000004 = (uint)local_14.wYear;
  return;
}

