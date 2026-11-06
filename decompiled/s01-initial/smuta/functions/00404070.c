/* Ghidra address: 00404070; FUN_00404070 */

undefined4
FUN_00404070(undefined4 param_1,ATOM param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  LPCSTR lpIconName;
  undefined4 uVar2;
  int nHeight;
  int nWidth;
  HWND pHVar3;
  HMENU hMenu;
  HINSTANCE hInstance;
  int *lpParam;
  WNDCLASSA local_2c;
  
  if (DAT_0043422c == 0) {
    FUN_00429054();
    local_2c.style = 0x1003;
    local_2c.lpfnWndProc = _WndProc_qqspvuiuil;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 4;
    local_2c.hInstance = DAT_00434228;
    lpIconName = (LPCSTR)(**(code **)(*param_4 + 4))();
    local_2c.hIcon = LoadIconA(DAT_00434228,lpIconName);
    local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_2c.hbrBackground = GetStockObject(4);
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = s_TWindow_3D_GAME_00434248;
    param_2 = RegisterClassA(&local_2c);
  }
  param_4[0x13] = param_7 + -1;
  uVar1 = param_8 - 1;
  param_4[0x14] = uVar1;
  DAT_00434230 = param_4[0x13] >> 1;
  if (DAT_00434230 < 0) {
    DAT_00434230 = DAT_00434230 + (uint)((param_4[0x13] & 1U) != 0);
  }
  DAT_00434234 = (int)uVar1 >> 1;
  if (DAT_00434234 < 0) {
    DAT_00434234 = DAT_00434234 + (uint)((uVar1 & 1) != 0);
  }
  param_4[0xb] = 0;
  param_4[0xc] = 0;
  param_4[0xd] = param_7;
  param_4[0xe] = param_8;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    hMenu = (HMENU)0x0;
    pHVar3 = (HWND)0x0;
    hInstance = DAT_00434228;
    lpParam = param_4;
    nHeight = GetSystemMetrics(1);
    nWidth = GetSystemMetrics(0);
    pHVar3 = CreateWindowExA(8,local_2c.lpszClassName,(LPCSTR)param_4[10],0x80000000,0,0,nWidth,
                             nHeight,pHVar3,hMenu,hInstance,lpParam);
    param_4[1] = (int)pHVar3;
    if (pHVar3 == (HWND)0x0) {
      uVar2 = 0;
    }
    else {
      ShowWindow(pHVar3,param_9);
      UpdateWindow((HWND)param_4[1]);
      (**(code **)(*param_4 + 0x10))();
      uVar2 = 1;
    }
  }
  return uVar2;
}

