/* Ghidra address: 0042e1c4; FUN_0042e1c4 */

bool FUN_0042e1c4(void)

{
  DWORD DVar1;
  uint in_stack_00000004;
  
  if (DAT_00437f24 <= in_stack_00000004) {
    return false;
  }
  DVar1 = GetFileType(*(HANDLE *)(&DAT_0049ab1c + in_stack_00000004 * 4));
  return DVar1 == 2;
}

