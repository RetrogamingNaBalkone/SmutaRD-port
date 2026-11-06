/* Ghidra address: 00405fe4; FUN_00405fe4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00405fe4(void)

{
  int iVar1;
  HWND pHVar2;
  undefined4 *in_FS_OFFSET;
  char *in_stack_0000000c;
  undefined4 local_d8;
  int local_b8 [45];
  
  FUN_0042b4b4(0x434b10);
  iVar1 = FUN_00405d48();
  if (iVar1 == 0xc) {
    _DAT_00434ac8 = 1;
    pHVar2 = FindWindowA(s_TWindow_3D_GAME_00434cff,(LPCSTR)0x0);
    if (pHVar2 == (HWND)0x0) {
      FUN_00405f2c();
      FUN_00405fb4();
      FUN_00405e50();
      FUN_00405d78();
      FUN_004065e8();
      if ((*in_stack_0000000c == '/') &&
         ((in_stack_0000000c[1] == 'W' || (in_stack_0000000c[1] == 'w')))) {
        switch(in_stack_0000000c[2]) {
        case '0':
          _DAT_00434ac8 = 1;
          break;
        case '1':
          _DAT_00434ac8 = 1;
          break;
        case '2':
          _DAT_00434ac8 = 1;
          break;
        case '3':
          _DAT_00434ac8 = 1;
          break;
        case '4':
          _DAT_00434ac8 = 1;
          break;
        case '5':
          _DAT_00434ac8 = 1;
          break;
        default:
          _DAT_00434ac8 = 1;
        }
      }
      FUN_0040f9d0();
      FUN_00405a64();
      DAT_00443d48 = local_b8;
      iVar1 = (**(code **)(local_b8[0] + 0xc))();
      if (iVar1 == 0) {
        iVar1 = 0;
        FUN_00405a94();
        *in_FS_OFFSET = local_d8;
      }
      else {
        iVar1 = FUN_00404b54();
        FUN_00405a94();
        *in_FS_OFFSET = local_d8;
      }
    }
    else {
      iVar1 = 0;
      *in_FS_OFFSET = local_d8;
    }
  }
  else {
    MessageBoxA((HWND)0x0,&DAT_00434cc0,&DAT_00434cf4,0x10);
    iVar1 = 0;
    *in_FS_OFFSET = local_d8;
  }
  return iVar1;
}

