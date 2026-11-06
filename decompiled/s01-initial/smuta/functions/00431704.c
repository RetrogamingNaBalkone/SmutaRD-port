/* Ghidra address: 00431704; FUN_00431704 */

SIZE_T FUN_00431704(void)

{
  _MEMORYSTATUS local_20;
  
  local_20.dwLength = 0x20;
  GlobalMemoryStatus(&local_20);
  return local_20.dwAvailPhys;
}

