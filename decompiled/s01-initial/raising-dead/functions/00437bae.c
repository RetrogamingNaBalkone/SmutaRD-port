/* Ghidra address: 00437bae; StretchDIBits */

int __stdcall
StretchDIBits(HDC hdc,int xDest,int yDest,int DestWidth,int DestHeight,int xSrc,int ySrc,
             int SrcWidth,int SrcHeight,void *lpBits,BITMAPINFO *lpbmi,UINT iUsage,DWORD rop)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00437bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = StretchDIBits(hdc,xDest,yDest,DestWidth,DestHeight,xSrc,ySrc,SrcWidth,SrcHeight,lpBits,
                        lpbmi,iUsage,rop);
  return iVar1;
}

