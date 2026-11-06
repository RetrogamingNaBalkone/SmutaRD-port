/* Ghidra address: 00437bf8; GetDC */

HDC __stdcall GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00437bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}

