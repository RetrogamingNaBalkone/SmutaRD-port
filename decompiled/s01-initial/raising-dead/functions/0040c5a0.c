/* Ghidra address: 0040c5a0; FUN_0040c5a0 */

bool __cdecl FUN_0040c5a0(HDC param_1)

{
  HBITMAP hbm;
  BITMAPINFO local_38;
  undefined1 local_c;
  char local_b;
  undefined2 local_7;
  undefined1 local_5;
  
  local_7 = DAT_00439804;
  local_5 = DAT_00439806;
  local_38.bmiHeader.biSize = 0x28;
  local_38.bmiHeader.biWidth = 1;
  local_38.bmiHeader.biHeight = 1;
  local_38.bmiHeader.biPlanes = 1;
  local_38.bmiHeader.biBitCount = 0x18;
  local_38.bmiHeader.biCompression = 0;
  local_38.bmiHeader.biSizeImage = 0;
  local_38.bmiHeader.biXPelsPerMeter = 0;
  local_38.bmiHeader.biYPelsPerMeter = 0;
  local_38.bmiHeader.biClrUsed = 0;
  local_38.bmiHeader.biClrImportant = 0;
  hbm = CreateCompatibleBitmap(param_1,1,1);
  SetDIBits(param_1,hbm,0,1,&local_7,&local_38,0);
  GetBitmapBits(hbm,3,&local_c);
  DeleteObject(hbm);
  return local_b == -1;
}

