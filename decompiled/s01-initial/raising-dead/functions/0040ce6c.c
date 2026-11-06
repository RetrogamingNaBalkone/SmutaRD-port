/* Ghidra address: 0040ce6c; @WndProc$qqspvuiuil */

void __stdcall _WndProc_qqspvuiuil(HWND param_1,UINT param_2,WPARAM param_3,LONG *param_4)

{
  undefined4 *puVar1;
  
                    /* 0xce6c  1  @WndProc$qqspvuiuil */
  puVar1 = (undefined4 *)GetWindowLongA(param_1,0);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_2 == 1) {
      puVar1 = (undefined4 *)*param_4;
      SetWindowLongA(param_1,0,(LONG)puVar1);
      (**(code **)*puVar1)();
    }
    else {
      DefWindowProcA(param_1,param_2,param_3,(LPARAM)param_4);
    }
  }
  else {
    (**(code **)*puVar1)();
  }
  return;
}

