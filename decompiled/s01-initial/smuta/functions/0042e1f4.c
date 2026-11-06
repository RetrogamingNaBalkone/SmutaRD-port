/* Ghidra address: 0042e1f4; FUN_0042e1f4 */

bool FUN_0042e1f4(void)

{
  DWORD DVar1;
  HANDLE in_stack_00000004;
  
  DVar1 = GetFileType(in_stack_00000004);
  return DVar1 == 2;
}

