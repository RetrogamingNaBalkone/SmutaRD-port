/* Ghidra address: 0040c9bc; FUN_0040c9bc */

int __cdecl FUN_0040c9bc(int *param_1)

{
  LPMSG lpMsg;
  BOOL BVar1;
  int *piVar2;
  
  while( true ) {
    while( true ) {
      lpMsg = (LPMSG)(param_1 + 3);
      BVar1 = PeekMessageA(lpMsg,(HWND)0x0,0,0,0);
      if (BVar1 != 0) break;
      if (param_1[0x19] != 0) {
        FUN_0040ba80();
        piVar2 = param_1;
        (**(code **)(*param_1 + 0x18))();
        if (DAT_00439814 != (int *)0x0) {
          (**(code **)(*DAT_00439814 + 4))(DAT_00439814,*DAT_00439814,piVar2,DAT_00439814);
        }
        FUN_0040c590((int)param_1);
      }
    }
    BVar1 = GetMessageA(lpMsg,(HWND)0x0,0,0);
    if (BVar1 == 0) break;
    TranslateMessage(lpMsg);
    DispatchMessageA(lpMsg);
  }
  return param_1[5];
}

