/* Ghidra address: 0040c644; FUN_0040c644 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT __cdecl FUN_0040c644(int *param_1,HWND param_2,UINT param_3,WPARAM param_4,LPARAM param_5)

{
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  undefined2 local_34 [6];
  undefined4 local_28;
  
  FUN_0042c8f0(0x43980c);
  if ((int)param_3 < 0x101) {
    if (param_3 == 0x100) {
      (&DAT_004cff20)[param_4] = 3;
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (param_3 == 1) {
      param_1[1] = (int)param_2;
      DAT_004cff1c = param_2;
      DAT_004cf8fc = GetDC(param_2);
      param_1[2] = (int)DAT_004cf8fc;
      ShowCursor(0);
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (param_3 == 2) {
      (**(code **)(*param_1 + 0x20))();
      FUN_0040c3c4();
      PostQuitMessage(0);
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (param_3 == 7) {
      param_1[0x19] = 1;
      SetCapture((HWND)param_1[1]);
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (param_3 == 8) {
      param_1[0x19] = 0;
      ReleaseCapture();
      *in_FS_OFFSET = local_28;
      return 0;
    }
  }
  else {
    if (param_3 == 0x101) {
      (&DAT_004cff20)[param_4] = (&DAT_004cff20)[param_4] & 1;
      if (param_4 == 0x2c) {
        FUN_00407398((undefined4 *)&DAT_004393a0,*(int *)((int)param_1 + 0x92));
      }
      if (param_4 == 8) {
        DAT_00439394 = (uint)(DAT_00439394 == 0);
      }
      if (param_4 == 0x7b) {
        PostMessageA((HWND)param_1[1],0x111,1,0);
      }
      if (param_4 == 0x7a) {
        DAT_0043939c = DAT_0043939c + 1;
        if (8 < DAT_0043939c) {
          DAT_0043939c = 1;
        }
        FUN_0040ca2c(param_1,&DAT_0043d608);
      }
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (param_3 == 0x104) {
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (param_3 == 0x105) {
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (param_3 == 0x111) {
      (**(code **)(*param_1 + 0x24))();
      if (param_4 == 1) {
        if ((DAT_00439814 != (undefined4 *)0x0) && (DAT_00439814 != (undefined4 *)0x0)) {
          (**(code **)*DAT_00439814)();
        }
        DestroyWindow((HWND)param_1[1]);
        SetCursorPos(DAT_00439890,DAT_00439894);
        ShowCursor(0);
        ShowCursor(1);
        ShowCursor(1);
        ShowCursor(1);
        ShowCursor(1);
      }
      *in_FS_OFFSET = local_28;
      return 0;
    }
  }
  switch(param_3) {
  case 0x200:
  case 0x201:
    (**(code **)(*param_1 + 0x34))();
    LVar1 = 0;
    *in_FS_OFFSET = local_28;
    break;
  case 0x202:
    (**(code **)(*param_1 + 0x3c))();
    LVar1 = 0;
    *in_FS_OFFSET = local_28;
    break;
  case 0x203:
    (**(code **)(*param_1 + 0x44))();
    LVar1 = 0;
    *in_FS_OFFSET = local_28;
    break;
  case 0x204:
    (**(code **)(*param_1 + 0x38))();
    LVar1 = 0;
    *in_FS_OFFSET = local_28;
    break;
  case 0x205:
    FUN_00429e84(local_34);
    _DAT_004d0024 = FUN_00429edc();
    if ((int)(_DAT_004d0024 - DAT_00439808) < 0x14) {
      DAT_00439390 = 1;
    }
    DAT_00439808 = _DAT_004d0024;
    (**(code **)(*param_1 + 0x40))();
    LVar1 = 0;
    *in_FS_OFFSET = local_28;
    break;
  case 0x206:
    DAT_00439390 = 1;
    LVar1 = 0;
    *in_FS_OFFSET = local_28;
    break;
  default:
    LVar1 = DefWindowProcA((HWND)param_1[1],param_3,param_4,param_5);
    *in_FS_OFFSET = local_28;
  }
  return LVar1;
}

