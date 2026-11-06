/* Ghidra address: 0042ab40; @__lockDebuggerData$qv */

void __stdcall ___lockDebuggerData_qv(void)

{
                    /* 0x2ab40  2  @__lockDebuggerData$qv */
  if (DAT_0053e148 == 0) {
    DAT_0053e148 = 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0053e130);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0053e130);
  return;
}

