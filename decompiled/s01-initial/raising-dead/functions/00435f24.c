/* Ghidra address: 00435f24; FUN_00435f24 */

SIZE_T __stdcall FUN_00435f24(void)

{
  _MEMORYSTATUS local_20;
  
  local_20.dwLength = 0x20;
  GlobalMemoryStatus(&local_20);
  return local_20.dwAvailPhys;
}

