/* Ghidra address: 00404830; FUN_00404830 */

LRESULT FUN_00404830(void)

{
  undefined4 *puVar1;
  HDC pHVar2;
  int iVar3;
  LRESULT LVar4;
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  HWND in_stack_00000008;
  UINT in_stack_0000000c;
  WPARAM in_stack_00000010;
  LPARAM in_stack_00000014;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4346d3);
  if ((int)in_stack_0000000c < 0x102) {
    if (in_stack_0000000c == 0x101) {
      (&DAT_00443c48)[in_stack_00000010] = (&DAT_00443c48)[in_stack_00000010] & 1;
      if (in_stack_00000010 == 0x2c) {
        FUN_0040a600();
      }
      if (in_stack_00000010 == 8) {
        DAT_0043427c = (uint)(DAT_0043427c == 0);
      }
      if (in_stack_00000010 == 0x7b) {
        PostMessageA((HWND)in_stack_00000004[1],0x111,1,0);
      }
      if (in_stack_00000010 == 0x7a) {
        DAT_00434284 = DAT_00434284 + 1;
        if (8 < DAT_00434284) {
          DAT_00434284 = 1;
        }
        FUN_00404bb8();
      }
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 1) {
      in_stack_00000004[1] = (int)in_stack_00000008;
      DAT_00443c44 = in_stack_00000008;
      pHVar2 = GetDC(in_stack_00000008);
      in_stack_00000004[2] = (int)pHVar2;
      ShowCursor(0);
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 2) {
      (**(code **)(*in_stack_00000004 + 0x20))();
      FUN_00404578();
      PostQuitMessage(0);
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x100) {
      (&DAT_00443c48)[in_stack_00000010] = 3;
      *in_FS_OFFSET = local_28;
      return 0;
    }
  }
  else {
    if (in_stack_0000000c == 0x104) {
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x105) {
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x111) {
      (**(code **)(*in_stack_00000004 + 0x24))();
      puVar1 = DAT_004346f4;
      if (in_stack_00000010 == 1) {
        if ((DAT_004346f4 != (undefined4 *)0x0) && (DAT_004346f4 != (undefined4 *)0x0)) {
          iVar3 = FUN_0042b677();
          *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
          (**(code **)*puVar1)();
        }
        DestroyWindow((HWND)in_stack_00000004[1]);
        SetCursorPos(DAT_00434230,DAT_00434234);
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
  if ((int)in_stack_0000000c < 0x204) {
    if (in_stack_0000000c == 0x203) {
      (**(code **)(*in_stack_00000004 + 0x44))();
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0xa6) {
LAB_00404b0b:
      DAT_00434278 = 1;
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c - 0x200 < 2) {
      (**(code **)(*in_stack_00000004 + 0x34))();
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x202) {
      (**(code **)(*in_stack_00000004 + 0x3c))();
      *in_FS_OFFSET = local_28;
      return 0;
    }
  }
  else {
    if (in_stack_0000000c == 0x204) {
      (**(code **)(*in_stack_00000004 + 0x38))();
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x205) {
      (**(code **)(*in_stack_00000004 + 0x40))();
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x206) goto LAB_00404b0b;
  }
  LVar4 = DefWindowProcA((HWND)in_stack_00000004[1],in_stack_0000000c,in_stack_00000010,
                         in_stack_00000014);
  *in_FS_OFFSET = local_28;
  return LVar4;
}

