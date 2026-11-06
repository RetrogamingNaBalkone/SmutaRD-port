/* Ghidra address: 004379a0; FUN_004379a0 */

void __cdecl FUN_004379a0(uint *param_1)

{
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  *(undefined1 *)(param_1 + 1) = (undefined1)local_14.wDay;
  *(undefined1 *)((int)param_1 + 5) = (undefined1)local_14.wMonth;
  *param_1 = (uint)local_14.wYear;
  return;
}

