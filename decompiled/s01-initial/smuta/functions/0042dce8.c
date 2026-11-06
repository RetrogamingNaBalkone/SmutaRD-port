/* Ghidra address: 0042dce8; FUN_0042dce8 */

DWORD FUN_0042dce8(void)

{
  DWORD DVar1;
  uint in_stack_00000004;
  
  if (in_stack_00000004 < DAT_00437f24) {
    DVar1 = GetFileSize(*(HANDLE *)(&DAT_0049ab1c + in_stack_00000004 * 4),(LPDWORD)0x0);
    if (DVar1 == 0xffffffff) {
      DVar1 = FUN_0042e02c();
    }
  }
  else {
    DVar1 = FUN_0042dfc8();
  }
  return DVar1;
}

