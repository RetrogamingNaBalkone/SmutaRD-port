/* Ghidra address: 0042b9a0; thunk_FUN_0042e20c */

DWORD thunk_FUN_0042e20c(void)

{
  DWORD DVar1;
  uint in_stack_00000004;
  LONG in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_00000004 < DAT_00437f24) {
    if (in_stack_0000000c == 0) {
      DVar1 = 0;
    }
    else if (in_stack_0000000c == 1) {
      DVar1 = 1;
    }
    else {
      if (in_stack_0000000c != 2) {
        DVar1 = FUN_0042dfc8();
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_00437f28)[in_stack_00000004] = (&DAT_00437f28)[in_stack_00000004] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_0049ab1c + in_stack_00000004 * 4),in_stack_00000008,
                           (PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_0042e02c();
    }
  }
  else {
    DVar1 = FUN_0042dfc8();
  }
  return DVar1;
}

