/* Ghidra address: 00432e68; FUN_00432e68 */

void FUN_00432e68(void)

{
  undefined1 *in_stack_00000004;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  in_stack_00000004[1] = (undefined1)local_14.wHour;
  *in_stack_00000004 = (undefined1)local_14.wMinute;
  in_stack_00000004[3] = (undefined1)local_14.wSecond;
  in_stack_00000004[2] = (char)((ulonglong)local_14.wMilliseconds / 10);
  return;
}

