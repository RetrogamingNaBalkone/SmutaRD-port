/* Ghidra address: 004379cc; FUN_004379cc */

void __cdecl FUN_004379cc(undefined1 *param_1)

{
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  param_1[1] = (undefined1)local_14.wHour;
  *param_1 = (undefined1)local_14.wMinute;
  param_1[3] = (undefined1)local_14.wSecond;
  param_1[2] = (char)((ulonglong)local_14.wMilliseconds / 10);
  return;
}

