/* Ghidra address: 00403f54; FUN_00403f54 */

void FUN_00403f54(void)

{
  HDC hdc;
  void *lpBits;
  BITMAPINFO *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  BITMAPINFO *lpbmi;
  UINT iUsage;
  DWORD rop;
  
  FUN_00403dd8();
  hdc = (HDC)FUN_00403b48();
  rop = 0xcc0020;
  iUsage = 0;
  lpbmi = in_stack_00000004;
  lpBits = (void *)FUN_00403f2c();
  StretchDIBits(hdc,in_stack_00000008,in_stack_0000000c,in_stack_00000010,in_stack_00000014,0,0,
                (in_stack_00000004->bmiHeader).biWidth,(in_stack_00000004->bmiHeader).biHeight,
                lpBits,lpbmi,iUsage,rop);
  FUN_00403d78();
  return;
}

