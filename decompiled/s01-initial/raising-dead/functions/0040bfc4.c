/* Ghidra address: 0040bfc4; FUN_0040bfc4 */

void __cdecl FUN_0040bfc4(BITMAPINFO *param_1,int param_2,int param_3,int param_4,int param_5)

{
  HDC hdc;
  void *lpBits;
  BITMAPINFO *lpbmi;
  UINT iUsage;
  DWORD rop;
  
  FUN_0040bde8();
  hdc = (HDC)FUN_0040b9b4();
  rop = 0xcc0020;
  iUsage = 0;
  lpbmi = param_1;
  lpBits = (void *)FUN_0040bf9c((int)param_1);
  StretchDIBits(hdc,param_2,param_3,param_4,param_5,0,0,(param_1->bmiHeader).biWidth,
                (param_1->bmiHeader).biHeight,lpBits,lpbmi,iUsage,rop);
  FUN_0040bd60();
  return;
}

