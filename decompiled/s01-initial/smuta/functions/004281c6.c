/* Ghidra address: 004281c6; FUN_004281c6 */

void FUN_004281c6(void)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  tagMSG local_2c;
  
  iVar1 = 0;
  do {
    (&DAT_0049a918)[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  SetKeyboardState(&DAT_0049a918);
  FUN_00409a20();
  FUN_00409a38();
  do {
    uVar3 = FUN_00427f4c();
    if ((uVar3 == 0) || ((uVar3 & 0x40000000) != 0)) {
      FUN_00409a8c();
      return;
    }
    BVar2 = PeekMessageA(&local_2c,(HWND)0x0,0,0,1);
    if (BVar2 != 0) {
      TranslateMessage(&local_2c);
      DispatchMessageA(&local_2c);
    }
    uVar3 = FUN_00409a58();
  } while (uVar3 < 0xbb9);
  return;
}

