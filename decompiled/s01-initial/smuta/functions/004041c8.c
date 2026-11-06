/* Ghidra address: 004041c8; @WndProc$qqspvuiuil */

void _WndProc_qqspvuiuil(void)

{
  undefined4 *puVar1;
  HWND in_stack_00000004;
  UINT in_stack_00000008;
  WPARAM in_stack_0000000c;
  LONG *in_stack_00000010;
  
                    /* 0x41c8  2  @WndProc$qqspvuiuil */
  puVar1 = (undefined4 *)GetWindowLongA(in_stack_00000004,0);
  if (puVar1 == (undefined4 *)0x0) {
    if (in_stack_00000008 == 1) {
      puVar1 = (undefined4 *)*in_stack_00000010;
      SetWindowLongA(in_stack_00000004,0,(LONG)puVar1);
      (**(code **)*puVar1)();
    }
    else {
      DefWindowProcA(in_stack_00000004,in_stack_00000008,in_stack_0000000c,(LPARAM)in_stack_00000010
                    );
    }
  }
  else {
    (**(code **)*puVar1)();
  }
  return;
}

