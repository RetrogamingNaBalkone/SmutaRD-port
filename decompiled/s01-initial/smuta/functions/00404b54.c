/* Ghidra address: 00404b54; FUN_00404b54 */

int FUN_00404b54(void)

{
  LPMSG lpMsg;
  BOOL BVar1;
  int *in_stack_00000004;
  int *piVar2;
  
  while( true ) {
    while( true ) {
      lpMsg = (LPMSG)(in_stack_00000004 + 3);
      BVar1 = PeekMessageA(lpMsg,(HWND)0x0,0,0,0);
      if (BVar1 != 0) break;
      piVar2 = in_stack_00000004;
      (**(code **)(*in_stack_00000004 + 0x18))();
      if (DAT_004346f4 != (int *)0x0) {
        (**(code **)(*DAT_004346f4 + 4))(DAT_004346f4,*DAT_004346f4,piVar2,DAT_004346f4);
      }
      FUN_0040477c();
    }
    BVar1 = GetMessageA(lpMsg,(HWND)0x0,0,0);
    if (BVar1 == 0) break;
    TranslateMessage(lpMsg);
    DispatchMessageA(lpMsg);
  }
  return in_stack_00000004[5];
}

