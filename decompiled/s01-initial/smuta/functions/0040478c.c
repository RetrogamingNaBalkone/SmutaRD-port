/* Ghidra address: 0040478c; FUN_0040478c */

bool FUN_0040478c(void)

{
  HBITMAP hbm;
  HDC in_stack_00000004;
  BITMAPINFO local_7c;
  undefined1 local_50;
  char local_4f;
  undefined2 local_4c;
  undefined1 local_4a;
  
  local_4c = DAT_004346c0;
  local_4a = DAT_004346c2;
  local_7c.bmiHeader.biSize = 0x28;
  local_7c.bmiHeader.biWidth = 1;
  local_7c.bmiHeader.biHeight = 1;
  local_7c.bmiHeader.biPlanes = 1;
  local_7c.bmiHeader.biBitCount = 0x18;
  local_7c.bmiHeader.biCompression = 0;
  local_7c.bmiHeader.biSizeImage = 0;
  local_7c.bmiHeader.biXPelsPerMeter = 0;
  local_7c.bmiHeader.biYPelsPerMeter = 0;
  local_7c.bmiHeader.biClrUsed = 0;
  local_7c.bmiHeader.biClrImportant = 0;
  hbm = CreateCompatibleBitmap(in_stack_00000004,1,1);
  SetDIBits(in_stack_00000004,hbm,0,1,&local_4c,&local_7c,0);
  GetBitmapBits(hbm,3,&local_50);
  DeleteObject(hbm);
  return local_4f == -1;
}

