/* Ghidra address: 0040dab4; FUN_0040dab4 */

void __stdcall FUN_0040dab4(void)

{
  undefined1 *puVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  short asStack_2c [6];
  tagMSG local_20;
  
  iVar4 = 0;
  puVar1 = &DAT_004d00f4;
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar4 < 0x100);
  SetKeyboardState(&DAT_004d00f4);
  FUN_00429e84(asStack_2c);
  FUN_00429e9c(asStack_2c);
  do {
    uVar3 = thunk_FUN_00548000();
    if ((uVar3 == 0) || ((uVar3 & 0x40000000) != 0)) {
      FUN_00429ef0(asStack_2c);
      return;
    }
    BVar2 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    if (BVar2 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
    uVar3 = FUN_00429ebc(asStack_2c);
  } while (uVar3 < 0xbb9);
  return;
}

