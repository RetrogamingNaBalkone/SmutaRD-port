/* Ghidra address: 0042b7b4; @__lockDebuggerData$qv */

void ___lockDebuggerData_qv(void)

{
                    /* 0x2b7b4  4  @__lockDebuggerData$qv */
  if (DAT_0049aa48 == 0) {
    DAT_0049aa48 = 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0049aa30);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0049aa30);
  return;
}

