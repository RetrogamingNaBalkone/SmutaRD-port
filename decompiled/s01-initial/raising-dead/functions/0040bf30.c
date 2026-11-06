/* Ghidra address: 0040bf30; FUN_0040bf30 */

void __cdecl FUN_0040bf30(BITMAPINFO *param_1,void *param_2)

{
  HDC hdc;
  
  if (DAT_00438f28 == 0) {
    (param_1->bmiHeader).biHeight = -DAT_004cf7ec;
    (param_1->bmiHeader).biBitCount = 0x10;
    hdc = (HDC)FUN_0040b9b4();
    StretchDIBits(hdc,0,0,DAT_004cf7e8,DAT_004cf7ec,0,0,DAT_004cf7e8,DAT_004cf7ec,param_2,param_1,0,
                  0xcc0020);
  }
  else {
    FUN_0040bcf0();
  }
  return;
}

