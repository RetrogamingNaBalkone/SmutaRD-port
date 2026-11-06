/* Ghidra address: 00437ba8; SetDIBits */

int __stdcall
SetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,void *lpBits,BITMAPINFO *lpbmi,UINT ColorUse)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00437ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetDIBits(hdc,hbm,start,cLines,lpBits,lpbmi,ColorUse);
  return iVar1;
}

